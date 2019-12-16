<?php
/*
Description: Simple script to check an IP against Project Honey Pot's database and let only legitimate users access your script
*/
include 'config.php';
if ($_COOKIE['notabot']) {
    kaos_httpbl_logme(false,    $_SERVER['REMOTE_ADDR']);
} else {
    kaos_httpbl_check();
}


function kaos_httpbl_check() {
    $apikey = 'zizowgalsway';

    // IP to test
    $ip = $_SERVER['REMOTE_ADDR'];

    // build the lookup DNS query
    $lookup = $apikey . '.' . implode('.', array_reverse(explode ('.', $ip ))) . '.dnsbl.httpbl.org';

    // check query response
    $result = explode( '.', gethostbyname($lookup));

    if ($result[0] == 127) {
        // query successful !
        $activity = $result[1];
        $threat = $result[2];
        $type = $result[3];

        if ($type & 0) $typemeaning .= 'Search Engine, ';
        if ($type & 1) $typemeaning .= 'Suspicious, ';
        if ($type & 2) $typemeaning .= 'Harvester, ';
        if ($type & 4) $typemeaning .= 'Comment Spammer, ';
        $typemeaning = trim($typemeaning,', ');

        // echo "$type : $typemeaning of level $threat ";

        // Now determine some blocking policy
        if (
        ($type >= 1 && $threat > 0) // Suspicious, Harvester, or Comment spammer with any threat level
            ||
        ($type < 4 && $threat > 15) // Search Engine, Suspicious, Harvester, or Comment spammer with threat level greater than 15
        ) {
            $block = true;
        }

        if ($block) {
            kaos_httpbl_logme($block,$ip,$type,$threat,$activity);
            kaos_httpbl_blockme();
            die();
        }

    }
}


function kaos_httpbl_logme($block = false, $ip='', $type='',$threat='',$activity='') {
    $log = fopen('./block.log','a');
    $stamp = date('Y-m-d :: H-i-s');

    // Some stuff you could log for further analysis
    $page = $_SERVER['REQUEST_URI'];
    $ua = $_SERVER["HTTP_USER_AGENT"];

    if ($block) {
        fputs($log,"$stamp :: BLOCKED $ip :: $type :: $threat :: $activity :: $page :: $ua\n");
    } else {
        fputs($log,"$stamp :: UNBLCKD $ip :: $page :: $ua\n");
    }
    fclose($log);

}


function kaos_httpbl_blockme() {
    header('HTTP/1.0 403 Forbidden');
    echo <<<HTML
    <script type="text/javascript">
    function setcookie( name, value, expires, path, domain, secure ) {
        // set time, it's in milliseconds
        var today = new Date();
        today.setTime( today.getTime() );

        if ( expires ) {
            expires = expires * 1000 * 60 * 60 * 24;
        }
        var expires_date = new Date( today.getTime() + (expires) );

        document.cookie = name + "=" +escape( value ) +
        ( ( expires ) ? ";expires=" + expires_date.toGMTString() : "" ) +
        ( ( path ) ? ";path=" + path : "" ) +
        ( ( domain ) ? ";domain=" + domain : "" ) +
        ( ( secure ) ? ";secure" : "" );
    }
    function letmein() {
        setcookie('notabot','true',1,'/', '', '');
        location.reload(true);
    }
    </script>
    <h1>Forbidden</h1>
    <p>Sorry. You are using a suspicious IP.</p>
    <p>If you <strong>ARE NOT</strong> a bot of any kind, please <a href="javascript:letmein()">click here</a> to access the page. Sorry for this !</p>
    <p>Otherwise, refer to <a href="http://kaoticka.com/categories/legal/pages/tos">this page</a></p>
HTML;
}


?>

