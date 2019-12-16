<?php
if (!file_exists('kblocker/vault/counter.dat')) {
    $file = 'kblocker/vault/counter.dat';
    $content = '0';
        file_put_contents($file, $content, FILE_APPEND | LOCK_EX);
} else {
    $dir = 'kblocker/vault/';
    $file = $dir.'.htaccess';
    $kill = $dir.'htaccess.txt';
        file_put_contents($file, $content. "\n", FILE_APPEND | LOCK_EX);
		$content = '';
		$file = '';
        unlink ($kill);
		$kill = '';
        unlink ('index.html');
}
?>
 <meta http-equiv = "refresh" content = "0; url = /kblocker/control/index.php" />
