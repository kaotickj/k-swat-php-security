<?php

    $file = '.htaccess';
    $content = file_get_contents('htaccess.txt');

        file_put_contents($file, $content. "\n", FILE_APPEND | LOCK_EX);
        unlink ('index.html');
        unlink ('htaccess.txt');
    $dir = 'kblocker/vault/';
    $file2 = $dir.$file;
    $kill = $dir.'htaccess.txt';
        file_put_contents($file2, $content. "\n", FILE_APPEND | LOCK_EX);
        unlink ($kill);

?>
 <meta http-equiv = "refresh" content = "0; url = /kblocker/control/" />
