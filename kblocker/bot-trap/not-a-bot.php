<?php
?>
				<SCRIPT LANGUAGE="JavaScript">
					function nav(x) {
					history.go(x);
					}
				</script>
<?php
				if (!empty($_POST)) {
//  <===== CHECK TO SEE IF JOHNNY 5 IS ALIVE ====> //
					if (isset($_POST['johnnytest']) && $_POST['johnnytest'] != '') {
						$spambot_ip = $_SERVER['REMOTE_ADDR'];
						$file = 'logs/johnnies.lst';
						$file2 = '../.htaccess';
						$deny = 'deny from ' . $spambot_ip . ' ## JOHNNY 5 ALIVE Bot Traptcha Auto Block';
						file_put_contents($file2, $deny. "\n", FILE_APPEND | LOCK_EX);
						file_put_contents($file, $spambot_ip. "\n", FILE_APPEND | LOCK_EX);
						die ('We dont care what bots have to say');
						}	
//  <===== END JOHNNY 5 CHECK ====> //

				session_start();				
				if($_POST['puzzle'] != $_SESSION['digit']) die("<head><title>Thank You for Contacting Us</title><link type='text/css' rel='stylesheet' href='../css/resp-style.css'/></head><body style='color:#fff;'><p><img src='../Images/stories/oops.png' alt='Wrong Spam Prevention Code' style='display:block; margin-left:auto; margin-right:auto; width:280px;' /></p><br><br><p>Sorry, the Spam Prevention Code entered was incorrect! Use the  button below to return to the form and try again. If you are having trouble seeing the digits, try refreshing the Puzzle image using the refresh button beside the Spam Prevention Code.<br><br><button class='buttons' onClick='nav(-1)'>Back to Form</button></p>");
				session_destroy();



// This function is used to filter harmful input and secure the form data before storing the data or sending it to your email. Usage: $str = secure_input($_POST['input']); Where $str is your unique PHP variable assigned to the input (i.e., $firstName) and 'input' is the "name" attribute from your form input field (i.e., $_POST['first_name']).  For the example used: $firstName = secure_input($_POST['first_name'] Do not use spaces, hyphens, underscores, etc., in PHP variables.
 			   
			function secure_input($data) {
			  $data = trim($data);
			  $data = stripslashes($data);
			  $data = htmlspecialchars($data);
			  return $data;
			}		
//			die('Popcorn');
	echo '<meta http-equiv="refresh" content="0; url=https://kdgwebdesign.com/index.php?option=com_content&view=article&id=3&catid=2" />';
			   } else {
echo '<meta http-equiv="refresh" content="0; url=https://kdgwebdesign.com/not-a-bot/wp-im_a_bot" />';				   
			   }
?>			   