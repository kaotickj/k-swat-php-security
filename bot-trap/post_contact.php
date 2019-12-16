<?PHP
include 'bottrap_post.php';

		
				if(!isset($_POST['submit']))
				{
				echo "error; you need to submit the form!";
				} else {
			$firstName = $lastName = $email = $message = "";		
					
			$created = date(DATE_W3C); 
			$firstName = secure_input($_POST['first_name']);
			$lastName = secure_input($_POST['last_name']);
			$email = secure_input($_POST['email']);
			$message = secure_input($_POST['details']);	
			
?>

<?php
			
	echo "<head><title>Thank You for Contacting Us</title><link type='text/css' rel='stylesheet' href='../css/default.css'/></head><body style='color:#fff;background:#000;'><section><article><p><img src='../Images/stories/thankyou.png' alt='Thank You for Contacting Us' style='display:block; margin-left:auto; margin-right:auto; width:280px;' /></p><p>Thank you for you contact, ".$firstName." ".$lastName."</p><p>Your message:<br><blockquote>".$message."</blockquote><br>has been posted on ".$created." and you will receive an email reply at: " .$email. " if follow up contact is needed.</p><form action='/'><button type='submit'>Home</button></form></article></section></body>" ;

}
				
?>