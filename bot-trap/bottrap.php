<?php
set_include_path("bot-trap"); 
/*
// <========== START HEADER ==========>
Title: KDG BOT-TRAP SPAM PREVENTION SYSTEM 
Author: John Watts
Date: 2/7/2012
Latest Update: 6/4/2017
Copyright: (c) 2012 - 2017 by KDG Web Design
License: GNU/GPL3 Open Source License http://kdgwebdesign.com/categories/legal/pages/gnu-gpl3-license-for-bot-trap
Website: http://kdgwebdesign.com/
Description: Displays the bot-trap form element with captcha image, refresh 
button, logo, input field and submit button. A hidden Honeypot field is included
as an added anti-spam measure in case bot design ever reaches
a level capable of detecting the captcha code. Keep in mind that the honeypot 
field must either use the included class and css, or you must use your own
class with display: none; set in css.  Do not use inline style to hide the 
field as bots are capable of detecting the trap in such cases.  

You may modify this code to suit your needs, but you must leave this header 
unchanged and display the included unmodified logo. 
// <========== END HEADER ==========>
*/

/*	<=============================================================================================>
<====================== START BOT TRAP SPAM PREVENTION SYSTEM ================================>
<=============================================================================================>
*/

/* 
<===============================>
<===== HTTP:BL And KBlocker=====>
<===============================>
*/
//require 'kblocker/zbblock.php';
require 'httpbl.php';
function bottrap() {
?>	

	<link rel="stylesheet" type="text/css" href="/bot-trap/css/bottrap.css" media="all">	
	<div class="puzzle-group" style="max-width:300px;">
		<span class="hyde"><h3>Is Johnny 5 Alive?</h3><input name="johnnytest" type="text" id="johnnytest" /></span>
			<span class="puzzle_wrap"> 
               <img src="/bot-trap/Images/bot-swat-logo.png" alt="Bot Swat Anti-Spam Software (c) 2017 by KDG Web Design.  All Rights Reserved" style="width:99%;" />
 <img id="puzzle" src="/bot-trap/puzzle.php" width="170" height="48" style="border:1px solid #333;" title="Please type the numbers from this image into the box Below" alt="Spam Prevention Code" />
                    <a href="#" onclick="document.getElementById('puzzle').src = '/bot-trap/puzzle.php?' + Math.random();
                    document.getElementById('puzzle_code').value = '';
                    return false;"><img src="/bot-trap/Images/refresh.png" alt="Refresh the Image" title="If you have trouble seeing the numbers, click this button to refresh the image." /></a>
                    <div class="logo"><a href="http://kdgwebdesign.com/categories/software/pages/bot-traptcha-form-spam-prevention-system?ref=bot-trap-logo" target="_blank"><img src="/bot-trap/Images/kdg-logo-left.png" alt="KDG Web Design Logo" style="width:45px;" title="KDG Web Design Logo" /></a></div>
				</span>
               <div class="container"> 				
                    <input id="puzzle_code" type="text"  class="puzzle_box" placeholder="Enter the numbers" name="puzzle" size="28" maxlength="5" onkeyup="this.value = this.value.replace(/[^\d]+/g, '');" required />
                    <button type="submit" name="submit" title="It clicks the button to submits the precious.">Submit</button>
				</div>				
			</div>
<?php
}
/*	<=============================================================================================>
<=======================  END BOT TRAP SPAM PREVENTION SYSTEM  ===============================>
<=============================================================================================>
*/
?>		