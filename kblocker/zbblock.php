<?php 
include 'kblocker/cidram/loader.php';

/*	require 'conny.php';
		$conn = new mysqli($servername, $username, $password);
		if ($conn->connect_error) {
			die('' . $db_error .'');
		} 
		$visitor_ip = $_SERVER['REMOTE_ADDR'];
		if ($visitor_ip !="0.0.0.0.0.0"){
		$usrAgnt = $_SERVER['HTTP_USER_AGENT'];
		$whereFrom = $_SERVER['REQUEST_URI'];
		$name = "Visitor IP Record";
		$created = date(DATE_W3C);
        $remotehost = @getHostByAddr($visitor_ip);
		if(isset($_SERVER['HTTP_REFERER'])) {
        $referer = $_SERVER['HTTP_REFERER'];
		}
		else {
		$referer = 'Not Set';	
		}
		//  <============== Log Visitor Details ==============>	
		mysqli_select_db($conn,$dbname);		
		$sql= "INSERT INTO `visitor_ips` (`ip_addy`, `logged-from`, `usr-agnt`, `name`, `created_date`, `referer`, `remotehost`) VALUES ('$visitor_ip', '$whereFrom', '$usrAgnt', '$name', '$created', '$referer', '$remotehost')";
			if (mysqli_query($conn, $sql)) {
			}
			else {
				die('Failed.');
			}
		} */
$zbbversion="1.4.88";
$ip = $_SERVER['REMOTE_ADDR'];

if ($ip !="0.0.0.0.0.0"){
// *****START SCRIPT*****
// For security, we set display errors to OFF here. However, if your host
// has the function blocked, then just comment out the line below with 2
// slashes.
ini_set('display_errors',0);
// SUPER-DEBUG
// Expose errors by uncommenting the next 2 lines. DANGEROUS ON PRODUCTION SERVER!
//ini_set('display_errors',1);
//error_reporting(-1);
// Set user-agent $tring
$zbbuseragent = 'K S.W.A.T.';
ini_set('user_agent', $zbbuseragent);
// Prevent error if ZB Block has run before on the page. Wrap program.
if (!function_exists('inmatch')) {
// *FUNCTION
// inmatch = IN$ MATCH
// Function to match a $tring anywhere IN the $tring.
// Best for known hack codes / profanities / drug names (a bot fav!)
function inmatch($haystack, $pattern, $whyblockin)
{
if (substr_count($haystack,$pattern)){
global $whyblockout, $zbdebug ; 
if ($zbdebug) { $whyblockin = $whyblockin . ' -> inmatch("' . $pattern . '")'; }
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// minmatch = Multiple IN$ MATCH
// Function to match a $tring anywhere IN the $tring. And then check
// to see if multiples have exceeded the permissible appearances.
// Best for detecting nested attacks.

function minmatch($haystack, $pattern, $allowed, $whyblockin)
{
if (substr_count($haystack,$pattern) > $allowed){
global $whyblockout, $zbdebug ;
if ($zbdebug) { $whyblockin = $whyblockin . ' -> minmatch("' . $pattern . '")'; }
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// lmatch = Left$ MATCH
// Function to match the Left side of the $tring.
// Better for singular or simple range IPs.

function lmatch($haystack, $pattern, $whyblockin)
{
$length = strlen($pattern);
if (substr($haystack,0,$length) == $pattern){
global $whyblockout, $zbdebug ;
if ($zbdebug) { $whyblockin = $whyblockin . ' -> lmatch("' . $pattern . '")'; }
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// rmatch = Right$ MATCH
// Function to match the Right side of the $tring.
// Better for Hosts.

function rmatch($haystack, $pattern, $whyblockin)
{
$length = strlen($pattern);
if (substr($haystack,-$length) == $pattern){
global $whyblockout, $zbdebug ;
if ($zbdebug) { $whyblockin = $whyblockin . ' -> rmatch("' . $pattern . '")'; }
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// regexmatch = REGULAR EXPRESSION MATCH
// Function to match a $tring anywhere IN the $tring with more complex Regular Expression matches.
// Best for known hack codes / profanities / drug names (a bot fav!)
// Added by Thomas Parkison
// Best to be used by only those who know how to code Regular Expressions. (Which Zaphod does not know how to do well.)

function regexmatch($haystack, $pattern, $whyblockin) {
//$pattern = str_replace("%","\%",$pattern);
if (preg_match('%' . $pattern . '%i', $haystack)) {
global $whyblockout, $zbdebug;
if ($zbdebug) { $whyblockin = $whyblockin . ' -> regexmatch("' . $pattern . '")'; }
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// iprange = IP RANGE check
// Function to check to see if an IP is in a range of 2 other IPs (Bracketed).
// Best for known blocking known IPs. Good for hosts who don't have domain names.

function iprange($thisip, $lowip, $highip, $whyblockin)
{
$longthisip = sprintf('%u', ip2long($thisip));
$longlowip = sprintf('%u', ip2long($lowip));
$longhighip = sprintf('%u', ip2long($highip));

if (($longlowip <= $longthisip) === ($longthisip <= $longhighip)){
global $whyblockout ;
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// cidrblock = CIDR IP BLOCK check
// Function to check to see if an IP is in CIDR range.

function cidrblock($thisip, $cidr, $whyblockin)
{

list($lowip, $range) = explode("/", $cidr);

$range = 32 - $range;
$range = pow(2,$range);

$longthisip = sprintf('%u', ip2long($thisip));
$longlowip = sprintf('%u', ip2long($lowip));
$longhighip = $longlowip + $range;

if (($longlowip <= $longthisip) === ($longthisip <= $longhighip)){
global $whyblockout ;
$whyblockout = $whyblockout . $whyblockin;
return true;
}
return false;
}

// *FUNCTION
// zbIsTorExitPoint = True if user is on TOR
// Originally coded by IronGeek (at) IronGeek.com
// Used to detect if a user is on TOR

function zbIsTorExitPoint($address){
if (gethostbyname(zbReverseIPOctets($address).".80.104.161.233.64.ip-port.exitlist.torproject.org")=="127.0.0.2") {
return true;
}
return false;
}

// *FUNCTION
// zbReverseIPOctets = Reverse the order of IP octets
// Used by TorOrNot / zbIsTorExitPoint

function zbReverseIPOctets($inputip){
$ipoc = explode(".",$inputip);
return $ipoc[3].".".$ipoc[2].".".$ipoc[1].".".$ipoc[0];
}

// *FUNCTION
// s2b = String to Boolean
// used to convert human positive expressions to 1, everything else is a 0.

function s2b($zbexpression)
{
$zbexpression = strtolower($zbexpression);
if (($zbexpression == 'yes') || ($zbexpression == '1') || ($zbexpression == 'true') || ($zbexpression == 'on')){
return 1;
}
return 0;
}

// *FUNCTION
// iptodb = IP TO DataBase
// Add IP to simple CSV flatfile database.

function iptodb($funcIP, $zbdbfile){

/// Write IP to database
$filex = fopen($zbdbfile,"a");
$outputstring=$funcIP.",";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);
return "done";
}


// *FUNCTION
// iptoddb = IP TO Daily DataBase
// check database age, if non=existant or old refresh, then place IP in database
// used to decrease load on external databases.

function iptoddb($funcIP, $zbdbfile, $zbpbtxtfile){

/// Generate File If Non Existant
if (!file_exists($zbdbfile)){
$filex = fopen($zbdbfile,"a");
$outputstring=date("d").",";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);
}

/// Check database freshness, if not fresh, erase database and start new one.
$zbaaa = @file_get_contents($zbdbfile);
if (substr($zbaaa,0,2) != date("d")){
unlink($zbdbfile);
$filex = fopen($zbdbfile,"a");
$outputstring=date("d").", ";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);

//// Destroy that possibly huge variable to save memory
unset($zbaaa);

//// Do a little extra daily housekeeping
//// remove dupes from permanent ban file

$text = array_unique(file($zbpbtxtfile));

$f = @fopen($zbpbtxtfile,'w+');
if ($f) {
  fputs($f, join('',$text));
  fflush($f);
  fclose($f);
}
}


/// Write IP to database
$filex = fopen($zbdbfile,"a");
$outputstring=$funcIP.", ";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);
return "done";
}

// *FUNCTION
// iptohdb = IP TO Hourly DataBase
// check database age, if non=existant or old refresh, then place IP in database
// used to decrease load on external databases.

function iptohdb($funcIP, $zbdbfile){

/// Generate File If Non Existant
if (!file_exists($zbdbfile)){
$filex = fopen($zbdbfile,"a");
$outputstring=date("h").",";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);
}

/// Check database freshness, if not fresh, erase database and start new one.
$zbaaa = @file_get_contents($zbdbfile);
if (substr($zbaaa,0,2) != date("h")){
unlink($zbdbfile);
$filex = fopen($zbdbfile,"a");
$outputstring=date("h").", ";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);

//// Destroy that possibly huge variable to save memory
unset($zbaaa);
}

/// Write IP to database
$filex = fopen($zbdbfile,"a");
$outputstring=$funcIP.", ";
fwrite($filex,$outputstring);
fflush($filex);
fclose($filex);
return "done";
}

// *FUNCTION
// ipcheckdb($funcIP, $zbdbfile)
// check database $zbdbfile for existance of $funcIP, return count.

function ipcheckdb($funcIP, $zbdbfile){

/// Load Database
$zbaaa = "";
if (file_exists($zbdbfile)){$zbaaa = @file_get_contents($zbdbfile);} //0.4.9 HARDENING
/// Count Matches
$zbaab = 0 ;
$zbaab = @substr_count($zbaaa,$funcIP);
unset($zbaaa);
/// return count
return $zbaab;
}

// *FUNCTION
// ipcheckdb2($funcIP, $zbdbfile)
// check database $zbdbfile for existance of $funcIP, return count.
// *** IP MUST BE FOLLOWED BY A COMMA! ***

function ipcheckdb2($funcIP, $zbdbfile){

/// Load Database
$zbaaa = "";
if (file_exists($zbdbfile)){$zbaaa = @file_get_contents($zbdbfile);} //0.4.9 HARDENING
/// Count Matches
$funcIP = $funcIP . "," ;
$zbaab = 0 ;
$zbaab = @substr_count($zbaaa,$funcIP);
unset($zbaaa);
/// return count
return $zbaab;
}

// *FUNCTION
// ipcheckdb3($funcIP, $zbdbfile)
// check database $zbdbfile for existance of $funcIP, return count.
// *** IP MUST PRECEEDED AND FOLLOWED BY A COMMA! ***

function ipcheckdb3($funcIP, $zbdbfile){

/// Load Database
$zbaaa = "";
if (file_exists($zbdbfile)){$zbaaa = @file_get_contents($zbdbfile);} //0.4.9 HARDENING
/// Count Matches
$funcIP = "," . $funcIP . "," ;
$zbaab = 0 ;
$zbaab = @substr_count($zbaaa,$funcIP);
unset($zbaaa);
/// return count
return $zbaab;
}

// ****************************
// ***** END OF FUNCTIONS *****
// ****************************

// Set variables, globals and the match counter to 0.

include('vault/directory.inc'); //Bring in directory information.
global $whyblockout ;
global $ax ;
global $specialcase ;
global $zbregcheck ;
$ax=0;
$specialcase=0;
$whyblockout="";

// Read in .ini file
$ini = parse_ini_file($path_to_zbblock . "vault/zbblock.ini");

$zblog = s2b($ini['log']);
$zblogdir = $path_to_zbblock . $ini['log_dir'];
$zbcsv = s2b($ini['csv']);
$zbcsvdir = $path_to_zbblock . $ini['csv_dir'];
$zbtimertrap = $ini['timer_trap'];
$zbtorregblock = s2b($ini['block_tor_registration']);
$zbhphregblock = s2b($ini['block_hph_registration']);
$zbsfsregblock = s2b($ini['block_sfs_registration']);
$zbsfsaccessblock = s2b($ini['block_sfs_access']);
$zbsfsdate = $ini['sfs_date'];
$zbtorblock = s2b($ini['block_tor']);
$zbsnooze = $ini['snooze'];
$zbdebug = s2b($ini['debug_mode']);
$zbrdbtimeout = $ini['rdb_timeout'];
$zbfaultcount = $ini['fault_count'];
$zbpw = $ini['zbb_pw'];
$zbheavyhit = $ini['heavy_hit'];
$zbajaxoptout = s2b($ini['ajax_optout']);
$zbepoch = date('U');
$zbepoch = $zbepoch + ($ini['time_offset'] * 3600);
if ($ini['time_format'] == 1){$zbtime = date('r',$zbepoch);}
if ($ini['time_format'] == 2){
$zbisodate2 = date('Y-m-d\TH:i:s',$zbepoch) . substr(date('O',$zbepoch),0,-2) . ":" . substr(date('O',$zbepoch),3);
$zbtime = $zbisodate2;
}
if ($ini['time_format'] == 3){$zbtime = date('U');}
if ($ini['time_format'] == 4){
$zbepoch = date('U');
$zbepoch = $zbepoch / 86400;
$zbepoch = $zbepoch - 34062;
$zbepoch = round($zbepoch, 3);
$zbtime = "Stardate: " . $zbepoch;
}
if ($ini['time_format'] == 5){$zbtime = date('Y-m-d, D - H:i:s ',$zbepoch) . substr(date('O',$zbepoch),0,-2) . ":" . substr(date('O',$zbepoch),3);}


// Set other vars
$zbddbf = $path_to_zbblock . "vault/ipddb.csv"; // Daily DataBase
$zbpbdbf = $path_to_zbblock . "vault/ippbdb.csv"; // Permanent Ban DataBase
$zbpbtxt = $path_to_zbblock . "vault/ippbdb.txt"; // Permanent Ban Text File
$zbwldbf = $path_to_zbblock . "vault/ipwldb.csv"; // White List Database
$zbnldbf = $path_to_zbblock . "vault/nolookup.csv"; // Speedy no-ip look-up database if unresolvable before
$zbsfsdbf = $path_to_zbblock . "vault/bannedips.csv"; // Stop Forum Spam Local Database
$zbregdbf = $path_to_zbblock . "vault/registration_attempts.csv"; // Hourly Registration Database
$zbcondbf = $path_to_zbblock . "vault/confirmation_attempts.csv"; // Hourly Confirmation Database
$randamn = rand(0,1000000);
$randstr= "xxx" . $randamn . "yyy";


// Get the variables for the connection.

if(isset($_SERVER[$ini['ip_origin']])){$address=$_SERVER[$ini['ip_origin']];}
else{$address=$_SERVER['REMOTE_ADDR'];}
$address=strtolower($address);
$hoster=$address;
$zbaac=0;
$zbaac=ipcheckdb2($address, $zbnldbf);
if ($zbaac < 1){
$hoster=strtolower(gethostbyaddr($address)); 
if ($address == $hoster){
$dummy = iptodb($address, $zbnldbf);
}
}
$zbaac=0;

$query2=""; //Make null incase of no server variable set.
$fromhost2=""; //Make null incase of no server variable set.
$useragent=""; //Make null incase of no server variable set.
$pathinfo=""; //Make null incase of no server variable set.
if(isset($_SERVER['QUERY_STRING'])){$query2=@$_SERVER['QUERY_STRING'];} 
$query=strtolower($query2); 
$querydec2=urldecode($query2); //added to remove %## crap for cleaner detections.
$querydec=strtolower($querydec2);
$querydecsws=preg_replace('/\s+/','',$querydec);
$querydecsws=preg_replace("/[^\x9\xA\xD\x20-\x7F]/",'',$querydecsws);
if(isset($_SERVER['HTTP_REFERER'])){$fromhost2=@$_SERVER['HTTP_REFERER'];}
$fromhost=strtolower($fromhost2);
$fromhostsws=preg_replace('/\s+/','',$fromhost);
$fromhostsws=preg_replace("/[^\x9\xA\xD\x20-\x7F]/",'',$fromhostsws);
if(isset($_SERVER['HTTP_USER_AGENT'])){$useragent=@$_SERVER['HTTP_USER_AGENT'];}
$lcuseragent=strtolower($useragent);
$lcuseragentsws=preg_replace('/\s+/','',$lcuseragent);
$lcuseragentsws=preg_replace("/[^\x9\xA\xD\x20-\x7F]/",'',$lcuseragentsws);
$thishost=@$_SERVER['HTTP_HOST'];
$requesturi=@$_SERVER['REQUEST_URI'];
$lcrequesturi=strtolower($requesturi);
$requesturidec = urldecode($requesturi);
$lcrequesturisws=preg_replace('/\s+/','',$lcrequesturi);
$lcrequesturisws=preg_replace("/[^\x9\xA\xD\x20-\x7F]/",'',$lcrequesturisws);
$pathinfo=isset($_SERVER['PATH_INFO']);

// prepare post data

$rawpost=file_get_contents("php://input");
$rawpost=substr($rawpost, 0, 524288); //truncate at .5 megabyte in case of upload.
$rawpostsws=preg_replace('/\s+/','',$rawpost);
$rawpostsws=preg_replace("/[^\x9\xA\xD\x20-\x7F]/",'',$rawpostsws);
$rawpostsws=strtolower($rawpostsws);
$lcpost="&" . strtolower($rawpost);
while(substr_count($lcpost,"%25") > 0){
$lcpost=str_replace("%25","%",$lcpost);
}
$lcpost=str_replace('%26',$randstr,$lcpost);
$lcpost=urldecode($lcpost);
$lcpost=str_replace($randstr,"%26",$lcpost);
$lcpostsws=preg_replace('/\s+/','',$lcpost);
$lcpostsws=preg_replace("/[^\x9\xA\xD\x20-\x7F]/",'',$lcpostsws);


//Set whitelisting variable if whitelisted.
$zbaac = ipcheckdb2(" " . $address,$zbwldbf);
if ($zbaac >= 1){
$zbwhitelisted = 1;
}else{
$zbwhitelisted = 0;
}
// Check to see if client is requesting a whitelisting.
if ($zbpw != ""){
if (inmatch($lcrequesturi,"wlpw=","Whitelist Password Used")){

/// Pause an annoying length of time to chase off brute force password crackers.
sleep(10);

$zbcheckpw="wlpw=".$zbpw ;
if (inmatch($requesturi,$zbcheckpw,"Whitelist Password Confirmed")){
$dummy = iptodb(" " . $address,$zbwldbf);
die("IP added to whitelist database");
}else{
/// Add to a foul if the password was wrong .
$whyblockout = $whyblockout . "Wrong password, STRIKE! " ;
$ax = $ax + 1 ;
}
}
}

// Check to see if client is IP database permanent banned, if so return 503

/// First check if whitelisted. If not in whitelist, continue to check.
if ($zbwhitelisted != 1){

/// Now check permanent ban database. If found, 503.
$zbaac = ipcheckdb2(" " . $address,$zbpbdbf);
if ($zbaac >= 1){

/// If 503 switch to die is active, and the bastard is persistent
if ($ini['die_503'] != 0){
if ($zbaac >= $ini['die_503']){
header('Content-length: -1');
header('Location: http://127.0.0.1/');
die('');
}
$dummy = iptodb(" " . $address,$zbpbdbf);
}

/// Next line sets retry timeout (96 hours now), just incase you snagged 
/// a search engine you want. If you did, then add IP to the whitelist
/// database (IPWLDB.CSV) and remove from the perm-ban database.

$zbretryin = (3600 * 96);

header("HTTP/1.0 503 Service Temporarily Unavailable");  
header("HTTP/1.1 503 Service Temporarily Unavailable");  
header("Status: 503 Service Temporarily Unavailable");  
header("Retry-After: ".$zbretryin);
die("Error : Banned Network or Agent");
}
}

// Check to see if client is into sensitive areas and trigger remote BL checks if activated.

if (inmatch($lcrequesturisws,"/user/register","") || inmatch($lcrequesturisws,"/user/login","") || inmatch($lcrequesturisws,"wp-comments-post","") || inmatch($lcrequesturisws,"section=post&","") || inmatch($lcpostsws,"section=post","") || inmatch($lcrequesturisws,"act=reg&","") || inmatch($lcrequesturisws,"login=","") || inmatch($lcrequesturisws,"=login","") || inmatch($lcrequesturisws,"activate=","") || inmatch($lcrequesturisws,"=activate","") || inmatch($lcrequesturisws,"=register","") || inmatch($lcrequesturisws,"register=","") || inmatch($lcrequesturisws,"signup.php","") || inmatch($lcrequesturisws,"register.php","") || inmatch($lcrequesturisws,"=confirm","") || inmatch($lcrequesturisws,"/comprofiler/registers","") || inmatch($lcrequesturisws,"confirm=","") || inmatch($lcrequesturisws,"=verifyemail","") || inmatch($lcrequesturisws,"=newuser","") || inmatch($lcrequesturisws,"login.php","") || inmatch($lcrequesturisws,"=Special:UserLogin&","") || inmatch($lcrequesturisws,"action=edit","")){
$zbregcheck=true;
}else{
$zbregcheck=false;
}

if ($ini['hourly_reg'] != "0"){
// Check to see if client is into sensitive areas and write into hourly databases.

// Registration

if (inmatch($lcrequesturisws,"/user/register","") || inmatch($lcrequesturisws,"=register","")|| inmatch($lcrequesturisws,"act=reg&","")  || inmatch($lcrequesturisws,"register=","") || inmatch($lcrequesturisws,"signup.php","")  || inmatch($lcrequesturisws,"/comprofiler/registers","") || inmatch($lcrequesturisws,"register.php","") || inmatch($lcrequesturisws,"=newuser","")){
//If allready whitelisted, skip adding to databases.
if ($zbwhitelisted != 1){

/// Write to IP Cache Database, Perhaps do housekeeping.
if ($zbfaultcount != 0){
$dummy = iptohdb($address,$zbregdbf);
}

/// If IP is in Cache Database hourly_reg (ini file) times, boot from system.
$zbaac = ipcheckdb2($address,$zbregdbf);
if ($zbaac > $ini['hourly_reg']){
die('Hourly registration attempts exceeded!<br>Press your back button and try something else.');
}
}
}

// Confirmation

if (inmatch($lcrequesturisws,"activate=","") || inmatch($lcrequesturisws,"=activate","") || inmatch($lcrequesturisws,"confirm=","") || inmatch($lcrequesturisws,"=confirm","") || inmatch($lcrequesturisws,"=verifyemail","") || inmatch($lcrequesturisws,"approve=","")){
//If allready whitelisted, skip adding to databases.
if ($zbwhitelisted != 1){

/// Write to IP Cache Database, Perhaps do housekeeping.
if ($zbfaultcount != 0){
$dummy = iptohdb($address,$zbcondbf);
}

/// If IP is in Cache Database hourly_reg (ini file) times, boot from system.
$zbaac = ipcheckdb2(" " . $address,$zbcondbf);
if ($zbaac > $ini['hourly_reg']){
die('Hourly confirmation attempts exceeded!<br>Press your back button and try something else.');
}
}
}
}

// Load signatures, and perform checks here, add 1 to match counter for each transgression.

include('vault/signatures.inc'); // Main signatures
include('vault/compatibility.inc'); // Compatibility layer

// bannedips.csv access block

if ($zbsfsaccessblock){
  $zbaac = ipcheckdb3($address,$zbsfsdbf);
  if (!(  (rmatch($hoster,".search.msn.com","")) || (rmatch($hoster,".googlebot.com","")) || (rmatch($hoster,".google.com","")) || (rmatch($hoster,".crawl.yahoo.net" ,""))  || (lmatch($address,"66.249.","")) ) ){
    if ($zbaac >= 1){
      $ax = $ax +1 ;
      $whyblockout = 'No access allowed from hostile host. ' . $whyblockout ;
    }
  }
}

// Speed Regulator for Registrations/Logins
if ($zbregcheck){
sleep($zbtimertrap);
}

if ($ax > 0){$zbregcheck = 0;}

// Stop Forum Spam Registration Bouncer
if ($zbsfsregblock){
if ($zbregcheck){

/// Check local database file first
$zbaac = ipcheckdb3($address,$zbsfsdbf);
if ($zbaac >= 1){
$ax = $ax +1 ;
$whyblockout = 'No registrations, or logins, from hosts listed as hostile on Stop Forum Spam (http://www.stopforumspam.com/removal) (local block). ' . $whyblockout ;
}

/// If not found in local, check remote database
if (substr_count($whyblockout,"stopforumspam") <= 0){
$zbsfsurl = 'http://api.stopforumspam.org/api?ip=' . $address . "&host=" . $thishost . "&version=" . $zbbversion ;
$zzt=ini_get('default_socket_timeout');
ini_set('default_socket_timeout',$zbrdbtimeout);
$zbsfsquery = @file_get_contents($zbsfsurl);
ini_set('default_socket_timeout',$zzt);
if (substr_count($zbsfsquery,strtolower("yes"))){
$zbyearslice=strstr($zbsfsquery,"<lastseen>");
$zbyearslice=substr($zbyearslice,10,4);
if ($zbyearslice >= (date("Y")-$zbsfsdate)){
$ax = $ax +1 ;
$whyblockout = 'No registrations, or logins, from hosts listed as hostile on Stop Forum Spam (http://www.stopforumspam.com/removal) (remote). ' . $whyblockout ;
$dummy = iptodb($address,$zbsfsdbf);
}
}
}
}
}

// hpHosts Registration Bouncer
if ($zbhphregblock){
if ($zbregcheck){
/// if allready found in Stop Fourm Spam's local or remote database, don't bother hitting Hp-Hosts
if (substr_count($whyblockout,"stopforumspam") <= 0){
$zbhphquery = "http://verify.hosts-file.net/?v=zbblock_0.4.x&s=" . $address ;
ini_set('default_socket_timeout',$zbrdbtimeout);
if (@file_get_contents($zbhphquery) == "Listed"){
ini_set('default_socket_timeout',60);
$ax = $ax +1 ;
$whyblockout = 'No registrations, or logins, from hosts listed as hostile on http://hosts-file.net/ . ' . $whyblockout ;
}
}
}
}

// TOR Registration Bouncer
if (($zbtorregblock) && ($zbtorblock != 1)){
if ($zbregcheck){
/// if allready found in Host-File.net's or Stop Fourm Spam's local or remote database, don't bother hitting TOR check
if (((substr_count($whyblockout,"stopforumspam")) <=0) && ((substr_count($whyblockout,"hosts-file")) <= 0)){
if (zbIsTorExitPoint($address)){
$ax = $ax +1 ;
$whyblockout = 'TOR Registration Not Allowed. ' . $whyblockout ;
}
}
}
}

// TOR Total block
if ($zbtorblock){
if (zbIsTorExitPoint($address)){
$ax = $ax +1 ;
$whyblockout = 'TOR Not Allowed. INSTA-BAN. ' . $whyblockout ;
}
}

include('vault/customsig.inc'); // Custom signatures moved in a3 bugfix

// Finish signature compares here.

// If matches have occured,

$zbtresspasscount = "";

if($ax > "0"){

//If allready whitelisted, skip adding to databases.
if ($zbwhitelisted != 1){

/// Write to IP Cache Database, Perhaps do housekeeping.
if ($zbfaultcount != 0){
$dummy = iptoddb($address,$zbddbf,$zbpbtxt);
$zbaac = $zbfaultcount - ($zbaac + 1);
}

// Heavy Hit detection
if ($zbheavyhit != 0){
if($ax > $zbheavyhit){$whyblockout = $whyblockout . "Heavy hit. INSTA-BAN. ";}
}

/// If IP is in Cache Database $zbfaultcount times, add to permanent bans.
$zbaac = ipcheckdb2(" " . $address,$zbddbf);
$zbtresspasscount = $zbaac . " " ;
//// Immunity for known good crawlers.
if (!((rmatch($hoster,".google.com","")) || (rmatch($hoster,".googlebot.com","")) || (lmatch($address,"66.249.","")) || (rmatch($hoster,"search.msn.com","")) ||(rmatch($hoster,"crawl.yahoo.net","")))){
if (($zbaac >= $zbfaultcount) || (inmatch($whyblockout,"INSTA-BAN","You have been instantly banned due to hostile actions or malicious behavior!"))){
if (inmatch($whyblockout,"INSTA-BAN","")) {$zbtresspasscount = $zbtresspasscount . "INSTA-";}
$zbtresspasscount = $zbtresspasscount . "BANNED";
$zbaac = "\r\n" . $address . "," . $hoster ;
$dummy = iptodb($zbaac,$zbpbtxt);
$dummy = iptodb(" " . $address,$zbpbdbf);
}
}
}

// Log it!

// First increment serial counter.
$ctr=$path_to_zbblock . "vault/counter.dat";
$filey = fopen($ctr,"r+");
$zbcounter = fgets($filey);
fclose($filey);
$zbcounter = $zbcounter + 1;
$filey = fopen($ctr,"r+");
fwrite($filey,$zbcounter);
fclose($filey);

// Second, sanitize script output.

$query2 = str_replace("<","<_",$query2);
$query2 = str_replace(">","_>",$query2);

$querydec = str_replace("<","<_",$querydec);
$querydec = str_replace(">","_>",$querydec);

$querydecsws = str_replace("<","<_",$querydecsws);
$querydecsws = str_replace(">","_>",$querydecsws);

$fromhost = str_replace("<","<_",$fromhost);
$fromhost = str_replace(">","_>",$fromhost);

$useragent = str_replace("<","<_",$useragent);
$useragent = str_replace(">","_>",$useragent);

$requesturi = str_replace("<","<_",$requesturi);
$requesturi = str_replace(">","_>",$requesturi);

$rawpost = str_replace("<","<_",$rawpost);
$rawpost = str_replace(">","_>",$rawpost);

// Write Log

if ($zblog){
if ($ini['datestamp'] != ""){
$zblogdir = $zblogdir . date($ini['datestamp']) . "_";
}

// Check for existance of killed_log.txt, if not existant, write execution kill.
if (!file_exists($zblogdir . "killed_log.txt")){
$outputstring="<?php die(''); ?>\r\n\r\n";
$filex = fopen($zblogdir . "killed_log.txt","a");
fwrite($filex,$outputstring);
fclose($filex);
}

// Write killed_log.txt
$outputstring = "#: " . $zbcounter . " @: " . $zbtime . " Running: " . $zbbuseragent . "\r\nHost: " . $hoster . "\r\nIP: " . $address . "\r\nScore: " . $ax . "\r\n";
$outputstring = $outputstring . "Violation count: " . $zbtresspasscount . "\r\nWhy blocked: " . $whyblockout . "\r\n";
$outputstring = $outputstring . "Query: " . $query2 . "\r\nReferer: " . $fromhost . "\r\nUser Agent: " . $useragent . "\r\nReconstructed URL: http:// " . $thishost . " " . $requesturi ."\r\n\r\n";
$klt=$zblogdir . "killed_log.txt";
$filex = fopen($klt,"a");
fwrite($filex,$outputstring);
fclose($filex);
}


// Write CSV

if ($zbcsv){
// Check for existance of csv, if not existant, write headers.
if (!file_exists($zbcsvdir . "killed_log.csv")){
$outputstring="Record Number,Date,Time,IP Address,Hostname,Score,Query,Referer,User-Agent,Reconstructed URL,Why Blocked,Username,Email\r\n";
$filex = fopen($zbcsvdir . "killed_log.csv","a");
fwrite($filex,$outputstring);
fclose($filex);
}

// Write .csv Log.
$username = "" ;
$email = "" ;
$outputstring = $zbcounter . ',' . date("ymd,His") . ',' . $address . ',"' . str_replace('"','""',$hoster) . '","' . $ax . '","' . str_replace('"','""',$query2) . '","' . str_replace('"','""',$fromhost) . '","' . str_replace('"','""',$useragent) . '","http://' . $thishost . str_replace('"','""',$requesturi) . '","';
$outputstring = $outputstring . str_replace('"','""',$whyblockout) . '","';
$outputstring = $outputstring . str_replace('"','""',$username) . '","' . str_replace('"','""',$email) . "\"\r\n";
$klt=$zbcsvdir . "killed_log.csv";
$filex = fopen($klt,"a");
fwrite($filex,$outputstring);
fclose($filex);
}

// Pause a bit to fool SQL injectors.

sleep($zbsnooze);

// Give them a page telling them to quit the misbehavior and that they are
// banned till they do. Remember to ESCape the weird characters like apostrophes
// like this \' (with a backwards slash)

//Compose warnings
$warning = "Warning: 199 " . $thishost . ":80 You_are_abusive/hacking/spamming_" . $thishost ;
$warning2 = "X-Abuse: Your connection is not welcome due to: " . $whyblockout ;

header("HTTP/1.0 403 FORBIDDEN");
header("HTTP/1.1 403 FORBIDDEN");
header("Status: 403 FORBIDDEN");
http_response_code(403);

header($warning);
header($warning2);

// Silent blocking detour

if ($ini['silent'] != ""){
$location= "Location: " . $ini['silent'];
header($location);
die("");
}

//Start blocked message

echo('<html>
<head>
<META NAME="ROBOTS" CONTENT="NOINDEX, NOFOLLOW">
<title>403 FORBIDDEN : LOGGED BY ' . $thishost . '</title>
</head>
<style>
body {
	font-family:Helvetica,sans-serif;
    font-size: 10pt;
	color:#fff;
	background:#000;
    background-attachment: fixed;	
	width:95%;
	margin:20px auto 20px auto;
	border-radius:10px;
	text-align:center;
}

@-webkit-keyframes typing { from { width: 0; } }
@-webkit-keyframes blink-caret { 50% { border-color: transparent; } }

.auto-type { 
    font: bold;
    border-right: .1em solid black;
    width: 16.5em; 
    width: 21ch;
    margin: 10px auto 10px auto;
    white-space: nowrap;
    overflow: hidden;
    -webkit-animation: typing 2s steps(21, end),
               blink-caret .5s step-end infinite alternate;
}

header {
	height: 100px;
	border:1px solid #fff;
	border-radius:20px;
	background:#000;
	margin-left:auto;
	margin-right:auto;
	font-size:2em;
}



b {
	font-size:1.2em;
	color:#FF0000;
}

strong {
	text-transform:uppercase;
	font-size:1.1em;
	font-weight:300;
}

a:link {
	text-decoration: none;
	color: #ffba00;
	font-weight:960;
}

a:visited {
	text-decoration: none;
	color: #ffba00;
} 

a:Hover {
	text-decoration: none;
	color:#f1670a;
}

section {
	width:100%;
	background:#000;
	margin:0px auto 0px auto;
	border-top:none;
	border:1px solid #fff;
	border-radius:10px!important;		
}

article {
  width:80%;
  margin:5px auto 0px auto;
  font-size:10pt;
}

footer {
	background:#000;
	margin-top:0px!important;	
	padding-bottom:20px;
	border-top:none;
	border-left:none;
	border-right:none;
	border-bottom:1px solid #fff;
	border-radius:10px!important;	
	width:100%;
}

aside {
	margin-left:auto;
	margin-right:auto;
	width:80%;
	border:1px solid #333;
	text-align:left;
	padding:10px;
	border-radius:5px;
}
</style>
<meta name="viewport" content="width=device-width, initial-scale=1">
<body>
<header>
<p><b>403: FORBIDDEN!</b></p>
</header>
<section>
<article>

<br><br>
<h1>Access Blocked!</h1>
<p>This action has been blocked by K S.W.A.T. because the resource or action you requested or the computer or network you are requesting it from is forbidden. While it is extremely unlikely that you arrived at this page through accidental means, if you reached this page in error, no worries.  Simply stick to accessing the content linked through the site&#39;s menu systems and you will have no further trouble. Be aware: repeated offenses will result in a permanent ban from accessing this site and Criminal and/or Civil Prosecution.</p>

<p>Your action or request was blocked because:<br><br><blockquote><b><strong>' . $whyblockout . '</b></strong></blockquote></p>
');

 echo ('
 <p><br>If you are not sure what you did wrong, you may want to review our<a href="" target = "_blank"> Terms of Use</a></p>
<p>From this point forward, we demand that you cease attempting unauthorized actions on this system. You are hereby warned that any further malicious activity will result in criminal prosecution and/or costly civil litigation.<br><br><em>Specific identifying information regarding this incident including, but not limited to, your IP Address, your domain-name, the referring page, the contents of your query or post, your User Agent String, and the date and time of the unauthorized action have been logged and the recorded details will be used against you in any legal proceedings.</em><br><br><b> Stop whatever you were doing, NOW! </b></p><br>');

echo '<br><p>If you are not a Bot, and feel that you were blocked in error, please complete the Anti-Spam puzzle below  and click the "Submit" button</p>';
include 'bot-trap/bottrap.php';
echo '<form action="/kblocker/bot-trap/not-a-bot.php" method="post">';
echo '<table style="margin-left:auto;margin-right:auto;">
		<tr>
			<td></td>
			<td style="margin-left:auto;margin-right:auto;">';
			bottrap();
echo '</td>
		</tr>
	</table></form><p>Be aware that your actions are being logged, and further trangressions will result in ban from this server.</p>';

echo('<div style="text-align:left;"><p><strong>Your connection details:</strong><br>
<strong>Record #:</strong> ' . $zbcounter . '<br>
<strong>Time:</strong> ' . $zbtime . '<br>
<strong>Host:</strong> ' . $hoster . '<br>
<strong>IP:</strong> ' . $address . '<br>
<strong>Post:</strong> ' . $rawpost . '<br>
<strong>Query:</strong> ' . $query2 . '<br>
<strong>Stripped Query:</strong> ' . $querydecsws . '<br>
<strong>Referer:</strong> ' . $fromhost . '<br>
<strong>User Agent:</strong> ' . $useragent . '<br>
<strong>Reconstructed URL:</strong> http:// ' . $thishost . " " . $requesturi . '</div></p><br>
');

$outputstring="Time: " . date('r') . "\r\nHost: " . $hoster . "\r\nIP: " . $address . "\r\nQuery: " . $query2 . "\r\nPost: " . $rawpost . "\r\nReferer: " . $fromhost . "\r\nUser Agent: " . $useragent . "\rs\nReconstructed URL: http:// " . $thishost . "" . $requesturi ."\r\n" ;
$msg= $outputstring ."\r\nBlocked for: \r\n". $whyblockout ."\r\n";
$sub = "New Threat Blocked\r\n";
//	mail("9313379385@messaging.sprintpcs.com",$sub,$msg);
	mail("security@kdgwebdesign.com",$sub,$msg);
// Email trouble ticket maker.

if ($ini['e_mail'] != ""){
$dummy='Record #:' . $zbcounter . ' %0A
Running:' . $zbbversion . ' %0A 
Time: ' . $zbtime . ' %0A
Host:' . $hoster . ' %0A
IP: ' . $address . ' %0A
Post:' . $rawpost . ' %0A
Query: ' . $query2 . ' %0A
Stripped Query: ' . $querydec . ' %0A
Referer: ' . $fromhost . ' %0A
User Agent: ' . $useragent . ' %0A
Reconstructed URL: http:// ' . $thishost . " " . $requesturi . ' %0A
Why Blocked: ' . $whyblockout . ' %0A
--DO NOT CHANGE ANYTHING ABOVE. Use the area below this line to explain why you think this block was an error-- %0A';

$dummy = str_replace("=","%3D",$dummy);
$dummy = str_replace("&","%26",$dummy);
$dummy = str_replace("?","%3F",$dummy);

$dummy = $ini['e_mail'] . '?subject=Event ID:#' . $zbcounter . ' on ' . $thishost . '&body=' . $dummy ;

echo('<aside><h3>If you feel that you have been blocked in error, you may open a ticket to appeal the block. Do not change the subject line. Leave the prexisting email body intact, otherwise your appeal will be ignored. Be advised that tickets submitted to this address are subject to <a href="categories/legal/pages/tos" target="_blank">This Policy.</a><br>
<br>
Click <a href="&#109;&#97;&#105;&#108;&#116;&#111;&#58;' . $dummy . '">HERE</a> to submit an appeal ticket.</h3></aside><br>
');
}
echo '</article><footer><strong>Zapped by K S.W.A.T. V 1.4.88  </strong></footer></section></body></html>';


// Finally, POP the php script's execution.

die(""); 
}

// Or in the case of no matches, the script will jump here...
// Set the User_Agent to the hostname of the site, thus removing ZB Block user_agent.
$hostout="This session by script at: " . $thishost ;
ini_set('user_agent', $hostout );
// Unset the non-specific variables (thanks tgmorris)...
unset($zbfiledat, $zbbversion, $zbbuseragent, $address, $hoster, $dummy, $query2, $query, $querydec2, $querydec, $querydecsws, $fromhost2, $fromhost, $fromhostsws, $useragent, $lcuseragent, $lcuseragentsws, $thishost, $requesturi, $lcrequesturi, $lcrequesturisws, $pathinfo, $rawpost, $rawpostsws, $lcpost, $lcpostsws, $temp, $ax, $lcpost);
}
// End error prevention wrapping.
// and exit gracefully to where it was.
}
?>
