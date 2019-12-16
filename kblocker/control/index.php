<?php
if (file_exists('../makeHtaccess.php')) {
    unlink('../makeHtaccess.php');
}
echo '
<!doctype html>
<html lang="en">
<head>
    <title>K S.W.A.T. PHP Security Suite has been successfully installed/updated</title>
</head>
<body>
<p>
 
 <meta http-equiv = "refresh" content = "0; url = /" />

</p>
</body>
</html>';
?>
