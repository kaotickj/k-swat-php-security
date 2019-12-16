<?PHP
/*
// <========== START HEADER ==========>
Package: KDG BOT-TRAP SPAM PREVENTION SYSTEM
Title: KDG PUZZLE CODE IMAGE GENERATION SCRIPT FOR BOT-TRAP SYSTEM 
Author: John Watts
Date: 2/7/2012
Copyright: (c) 2012 - 2017 by KDG Web Design
License: GNU/GPL3 Open Source License
Website: http://kdgwebdesign.com/
Description: This script generates 5 random numers and some random 
lines for noise to help obscure the numbers in the image from detection
by advanced bots. The numbers are placed in a jpg image with a randomized
position and orientation using random fonts from the array. The random 
lines are added to a base jpg image to create the captcha image. The number
sequence generated is saved into the session cookie to be compared to user 
input. 

You may modify this code to suit your needs, but you must leave this header 
unchanged. 
// <========== END HEADER ==========>
*/
  $red_array = array('FF', '49', '85', '8A');
  $green_array = array('FF', '49', '85', '8A');
  $blue_array = array('FF', '49', '85', '8A');

  $txtred = $red_array[array_rand($red_array)];
  $txtgreen = $green_array[array_rand($green_array)];
  $txtblue = $blue_array[array_rand($blue_array)];
  
  $color1 = mt_rand(50,200);
  $color2 = mt_rand(50,200); 
  $color3 = mt_rand(50,200);  

  $image = @imagecreatefromjpeg('Images/cap_bg.jpg') or die("Cannot Initialize new GD image stream");

  $background = imagecolorallocate($image, 0x66, 0xCC, 0xFF);
  imagefill($image, 0, 0, $background);
  $linecolor1 = imagecolorallocate($image, $color1, $color2, $color3);
  $linecolor2 = imagecolorallocate($image, $color3, $color2, $color1);  
  $linecolor3 = imagecolorallocate($image, $color2, $color1, $color3);
  $textcolor1 = imagecolorallocate($image, 0xFF, 0xFF, 0x00);
  $textcolor2 = imagecolorallocate($image, 0xFF, 0xFF, 0xFF);


 for($i=0; $i < 6; $i++) {
    imagesetthickness($image, rand(1,2));
    imageline($image, rand(0,160), 0, rand(0,160), 90, $linecolor1);
    imageline($image, rand(0,160), 0, rand(0,160), 45, $linecolor2);
    imageline($image, rand(0,160), 0, rand(0,160), 60, $linecolor3);
	}

  session_start();


  $fonts = array();
  $fonts[] = "fonts/DejaVuSans-Bold.ttf";
  $fonts[] = "fonts/DejaVuSerif-Bold.ttf";
  $fonts[] = "fonts/DejaVuSerif-BoldItalic.ttf";
  $fonts[] = "fonts/Alien-Encounters-Solid-Bold.ttf";  
  $fonts[] = "fonts/Alien-Encounters-Solid-Bold-Italic.ttf"; 

 
  $digit = '';
  for($x = 10; $x <= 130; $x += 30) {
    $textcolor = (rand() % 2) ? $textcolor1 : $textcolor2;
    $digit .= ($num = rand(0, 9));
    imagettftext($image, 20, rand(-30,30), $x, rand(20, 42), $textcolor, $fonts[array_rand($fonts)], $num);
  }


  $_SESSION['digit'] = $digit;

 
  header('Content-type: image/png');
  imagepng($image);
  imagedestroy($image);  
  ?>