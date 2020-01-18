<?php
// ***CUSTOM SIGNATURE FILE

// *php 5 fix
global $whyblockout, $ax;

// start Includes

@include('/var/www/vhosts/kdgwebdesign.com/httpdocs/kblocker/cidram/vault/includes/zbb_loader.inc'); 


// start cloud and bot includes
@include('aws_zbblock.inc');  // Amazon AWS
@include('badbots_zbblock.inc');  // Known Badbots
@include('stopbots_zbblock.inc');  // Supplementary Known Badbots
//@include('gcp_zbblock.inc');  // Google Cloud
//@include('msaz_zbblock.inc');  // MS Azure
@include('cfrp_zbblock.inc');  // Cloudfare
@include('tpen_zbblock.inc');  // TOR Exit Nodes

@include('cldbyp_zbblock.inc');  // Cloud Services Search Engine Bypass list

// end cloud and bot includes

// Maikuolan Forks (dirty 30 and badips)
@include('badip.inc');  // Known Bad Ips
@include ('ip4.sig'); // Known baddies, dirt 30, plus bypasses

@include('dirty30.inc');  // 30 Worst Offender Hosters
// end Maiku Forks

// *Test Trigger to test function. (Errors will abort processing before here)
$ax = $ax + (inmatch($query,"kblocktest","Triggered test function. This is a test of the K S.W.A.T. Security system. In the event of an actual threat, you would be banned, and specifics regarding the ban would appear here."));

// Quarantined
// Kaos
$ax += regexmatch($requesturi,"theplague",'<div style-"margin:0px auto;text-align:center;"><h2 class="auto-type">Quarantined!</h2><p>This website is under emergency quarantine! K.S.W.A.T. PHP Security Suite has placed this website under lockdown pending an investigation into a recent attemted breach.</p><iframe width="560" height="315" src="https://www.youtube.com/embed/b2OYNMO_mNw?autoplay=1" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></div>');



// SAFREN
// Kaos
$ax += cidrblock($address,'155.159.0.0/16','Safren.Computer Services is prohibited! INSTA-BAN (CMD-10)  (CIDR-SAFREN-0149)');


// LEO UNWARRANTED
// Kaos
$ax += rmatch($hoster,'.gov','<h2 class="auto-type">4th AMENDMENT BREACH</h2> As a Law Enforcement Agency, your visit to this website is a violation of the the 4th Amendment Constitutional Protection against unwarranted search. INSTA-BAN (CMD-10) <em>The right of the people to be secure in their persons, houses, papers, and effects, against unreasonable searches and seizures, shall not be violated, and no Warrants shall issue, but upon probable cause, supported by Oath or affirmation, and particularly describing the place to be searched, and the persons or things to be seized.</em> <h1>You are not authorized on this server</h1>. (UA-GOVENTITY-0009');

// WTVF 5
// Kaos
$ax += lmatch($address,'47.44.210.154','WTVF is not Authorized to visit this website. Your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE </a>. (UA-WTVF-CIDR-0001) INSTA-BAN (CMD-10).');


//ResearchScan
//Kaos
$ax += inmatch($fromhost,'researchscan','Scripted traffic is prohibited! INSTA-BAN (CMD-10) Exploit probe. You are not authorized on this server. (UA-RESEARCHSCAN-0001');

 
//Sogou Web Spider
//Kaos
$ax += rmatch($lcuseragent,'sogou','Sogou Web Spider is not authorized on this server. INSTA-BAN (CMD-10)(UA-SOGOU-0002).');

// ZoomInfoBot
//KaosBlock
$ax += rmatch($lcuseragent,'zoominfo','ZoomInfoBot is not authorized on this server. Zoom off to someone else&#39;s site.  INSTA-BAN (CMD-10)(UA-ZOOM-0002).');
$ax += rmatch($lcuseragent,'zoominfobot','ZoomInfoBot is not authorized on this server. Zoom off to someone else&#39;s site.  INSTA-BAN (CMD-10)(UA-ZOOM-0003).');

//Vultr
//Kaos
$ax += inmatch($fromhost,'vultr','Cloud host.  Scripted traffic is prohibited! INSTA-BAN (CMD-10) VULTURE is not allowed on this server. (CLD-VULTR-0015)');
$ax += cidrblock($address,'149.28.120.0/23','Cloud host.  Scripted traffic is prohibited! INSTA-BAN (CMD-10) VULTURE is not allowed on this server. (CIDR-VULTR-0149)');

//Busted
$ax += lmatch($address,'62.183.127.214','<h2 class="auto-type">Busted!</h2> <p>You were previously logged probing for vulnerabilities. This is not a CMS, you fuckin pleb.  GTFO with that script kiddie bullshit!  INSTA-BAN (CMD-10).');

//CLOUDSIGMA
//Kaos 
$ax += lmatch($address,'104.36.17.151','<h2 class="auto-type">CloudSigma</h2> <p>Scripted traffic is prohibited. INSTA-BAN (CMD-10). Uses spoofed host. (CMD-SPOOF-HOST-0014)');

// LibelCunt 
// Kaos
$ax += lmatch($address,'74.109.2.187','<h2 class="auto-type">LibelCunt</h2> <p>Access by childish, immature, libelous cunts is prohibited. Why are you here, since you hate us anyway?  Go fuck yourself.  Skank. INSTA-BAN (CMD-10).');
$ax += lmatch($address,'174.201.6.201','<h2 class="auto-type">LibelCunt</h2> <p>Access by childish, immature, libelous cunts is prohibited. Why are you here, since you hate us anyway?  Go fuck yourself.  Skank. INSTA-BAN (CMD-10).');

//LibelCunt lapdog
$ax += lmatch($address,'104.36.17.151','<h2 class="auto-type">Punk ass Bitch</h2> <p>Access by bitches is prohibited. Why are you here, since we are so horrible?  Fuck off.  INSTA-BAN (CMD-10).');

// DEMPFS Maroc Telecom
// Kaos
// 9/1/2018
$ax += cidrblock($address,'105.128.0.0/11','Get the fuck outta here with that shit! No access from Africa. Exploit probe.  Your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE </a>, and a serious criminal violation of US and International Law. (UA-DEMPFS-14/88) INSTA-BAN (CMD-10).');

// Telefonica de Espana
// Kaos
// 9/1/2018
$ax += cidrblock($address,'217.127.0.0/16','Telefonica de Espana is not authorized here. INSTA-BAN (CMD-10).');
$ax += inmatch($fromhost,'rima','Requests but ignores robots directives. Excessive crawling. No trust. RIMA-TDE is not allowed on this server.');

// QualityNetwork 
// Kaos
// 9/1/2018
$ax += cidrblock($address,'185.250.42.0/23','Quality Network is not authorized here. INSTA-BAN (CMD-10).');

// ServeTheWorld Server Network 
// Kaos
// 9/1/2018
$ax += cidrblock($address,'185.250.42.0/23','Serve The World is not authorized here. Not an ISP.  Scripted traffic. Your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE </a>, and a serious criminal violation of US and International Law. INSTA-BAN (CMD-10).');

// Comcast Business  Excessive Scraping
// Kaos
// 9/1/2018
$ax += lmatch($address,'75.149.221.170','<h2 class="auto-type">Honey Lover</h2> <p>Likes Honeypots. Probable bot. Your bot has been trapped by our honeypots and has been reported as abuse to your service provider, Comcast Business.  If you do not leave this site NOW, your system will be compromised by our Offensive Security Scripts. Should you return to this website, you will receive no further warnings. Your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE </a>, and a serious criminal violation of US and International Law.</p>(IB-CBC-HONEY-LOVER-0003).<br /> INSTA-BAN (CMD-10).');

// COLOMBIA TELECOM
$ax += cidrblock($address,'201.228.0.0/17','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'190.68.0.0/15','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'190.66.0.0/15','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'200.89.192.0/20','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'190.65.0.0/16','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'201.228.128.0/17','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'190.52.0.0/19','Colombia Telecom is not authorized here.');
$ax += cidrblock($address,'190.252.0.0/14','Colombia Telecom is not authorized here.');

// Shaw COMM - Project Honeypot listed - likes honeypots
$ax += lmatch($address,'96.49.186.63','<h2 class="auto-type">Honey Lover</h2> <p>Likes Honeypots. Probable bot. Your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a></p>(IB-SHAW-COMM-HONEY-LOVER-0003).<br /> INSTA-BAN (CMD-10).');

// Research Scan Bot
$ax += inmatch($fromhost,'researchscan','Research Scan Bot.  Requests but ignores robots directives. Excessive crawling. No trust. Research Scan Bot is not allowed on this server.');

//Foresight (aka foreskin)
// kaos
// 8/23/20188
$ax += lmatch($address,'50.194.70.121','<h2 class="auto-type">Prohibited Agent</h2> <p>As an entity which has been specifically and expressly prohibited from accessing content on this server, your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br />(IB-FORESKIN-MDP-0003).<br /> INSTA-BAN (CMD-10).');

//Planetlab
$ax += inmatch($fromhost,'planetlab5','Scripted traffic.  Requests but ignores robots directives. Excessive crawling. No trust. Scripted Traffic is not allowed on this server.');
$ax += cidrblock($address,'138.246.0.0/16','Scripted traffic.  Requests but ignores robots directives. Excessive crawling. No trust. Scripted Traffic is not allowed on this server.');

// HoroscopeGuild referrer spam 
// Kaos
// 9/29/2017
$ax += regexmatch($requesturi,"horoscopeguild",'The link that you followed to arrive here is fraudulent. The domain name or referring agent is not associated with KDG Web Solutions and not authorized to link to this content.
(REF-SPAM-NICCOM-PTY-0001).');
$ax += inmatch($fromhost,'horoscopeguild','The link that you followed to arrive here is fraudulent. The domain name or referring agent is not associated with KDG Web Solutions and not authorized to link to this content.
(REF-SPAM-NICCOM-PTY-0002). ');
$ax = $ax + (inmatch($query,"horoscope",'The link that you followed to arrive here is fraudulent. The domain name or referring agent is not associated with KDG Web Solutions and not authorized to link to this content.
(REF-SPAM-NICCOM-PTY-0002). '));

$ax = $ax + (inmatch($query,"suspect",'You have been temporarily banned from accessing this server pending an investigation of your recent activity. If you want to restore your access to this server, please contact KDG Web Solutions.'));

//ITS Network Services  AKA: COuntry Financial
$ax += inmatch($fromhost,'countryis','ITS Network Services, aka Country Financial.  Not an isp or service provider.<br /> Legitimate financial orgs do not crawl websites. As an entity which has been specifically and expressly prohibited from accessing content on this server, your visit is in violation of the Legally Biniding Website Terms of Use at https://legal.kdgwebdesign.com/tos.php (UA-ITS-NETWORK-SOLUTIONS-HOST-0001) <br /> INSTA-BAN (CMD-10.)');
$ax += cidrblock($address,'208.74.228.0/22','ITS Network Services, aka Country Financial.  Not an isp or service provider.<br /> Legitimate financial orgs do not crawl websites.  As an entity which has been specifically and expressly prohibited from accessing content on this server, your visit is in violation of the Legally Biniding Website Terms of Use at https://legal.kdgwebdesign.com/tos.php. (UA-ITS-NETWORK-SOLUTIONS-CIDR-0001)<br /> INSTA-BAN (CMD-10.)');

// YELP
// Kaos
// 6/1/2018
//$ax += inmatch($fromhost,'yelp','As an entity which has been specifically and expressly prohibited from accessing content on this server, Yelp&#39;s linking to this website as well as their directory listing of this business and it&#39;s protected domains, email addresses and phone numbers are in violation of the Website Terms of Use at https://legal.kdgwebdesign.com/tos.php  If you are a user referred here by Yelp, please <a href="https://kdgwebdesign.com?ref=yelp&bypass=true"> [ Click Here ] </a> to bypass this block and be taken to our Site Home Page  
//<br />(REFSPAM-YELP-0002). ');

// Madvix.com 
// Kaos
// 6/1/2018
$ax += lmatch($address,'104.28.29.63','<h2 class="auto-type">Prohibited Agent</h2> <p>As an entity which has been specifically and expressly prohibited from accessing content on this server, your visit to this Website is in violation of the site Terms of Use <a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br />(IB-MADVIX-0003).<br /> INSTA-BAN (CMD-10).');

// Orange Espagne SA
// Kaos
// 5/25/2018
$ax += cidrblock($address,'90.160.0.0/12','Orange Espagne is not authorized here. (UA-ORANGE-ES-CIDR-0001).');

// KVH Industries Inc
// Kaos
// 5/23/2018
$ax += inmatch($hoster,'asia','No access from Asia (UA-HOST-ASIA-0003).');
$ax += cidrblock($address,'103.224.8.0/22','Access via KVH Industries is prohibited. (UA-KVHINDUSTRIES-CIDR-0001).');

// Google Proxy
// Kaos
// 5/22/2018
$ax += inmatch($hoster,'google-proxy','Google Proxy, <p class="auto-type">Get outta here with that BS.</p> INSTA-BAN (IB-GOOGLE-PROXY-0003). (CMD-10)');

// TEMPORARILY BLOCKED BECAUSE OF SUSPICIOUS ACTIVITY
// Kaos
// 5/10/2018
$ax += lmatch($address,'72.226.87.209','<h2 class="auto-type">Temporarily Banned</h2> <p>You have been temporarily banned from accessing content on this web site pending an investigation of your recent activity. If you are not sure what you may have done wrong see our site terms of service <br><a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br /> INSTA-BAN (IB-INVESTIGATION-PENDING-1940374). <br>Potential malicious intent. INSTA-BAN (CMD-10).');
$ax += lmatch($address,'107.77.225.116','<h2 class="auto-type">Temporarily Banned</h2> <p>You have been temporarily banned from accessing content on this web site pending an investigation of your recent activity. If you are not sure what you may have done wrong see our site terms of service <br><a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br /> INSTA-BAN (IB-INVESTIGATION-PENDING-1940378). <br>Potential malicious intent. INSTA-BAN (CMD-10).');
//$ax += lmatch($address,'69.131.219.131','<h2 class="auto-type">Temporarily Banned</h2> <p>You have been temporarily banned from accessing content on this web site pending an investigation of your recent activity. <br /> Whoever you may be, you spend WAY too much time on this website.  Please find yourself a hobby.<br /> INSTA-BAN (IB-INVESTIGATION-PENDING-1940378). <br>Potential malicious intent. <br /> Be warned that repeated trangressions of this type WILL result in retaliatory attack. Get on up outta here now before you get pwned.<br /> Identity: J. Roberts  Source: TDS TELECOM PUBLIC IP RECORDS API.  Specific Identifying details collected are indicated at the bottom of this page. ');

// BARKROWLER
// Kaos
// 3/6/2018
$ax += rmatch($lcuseragent,'exensa','Barkrowler (Bubing) Bot is not authorized on this server. INSTA-BAN (IB-BUBING-0002).');
$ax += inmatch($hoster,'exensa','Hey BUB, <p class="auto-type">BUZZ OFF!</p> INSTA-BAN (IB-BUBING-0003). ');
$ax += cidrblock($address,'147.135.128.0/17','Access via OVH Network is prohibited. (UA-OVH-0001).');

// ZMEU
// 3/3/2018
// Kaos
$ax += cidrblock($address,'202.123.176.0/21','Access via Skytel is prohibited. (UA-SKYTEL-0001).');
$ax += inmatch($hoster,'skytel','Source of mailicious traffic.  IPs in this range have been logged as exploit probes and vulnerability scanners. INSTA-BAN (IB-SKYTEL-0004).');
$ax += regexmatch($requesturi,"pma",'Exploit probe. (IB-PMAEXPLOIT-0001). Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>');
$ax += rmatch($lcuseragent,'zmeu','ZMEU Bot is not authorized on this server. (IB-ZMEU-0002).  Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>');
$ax = $ax + (inmatch($query,"zmeu",'Access via Skytel is prohibited. (UA-SKYTEL-0001). <br><br>Source of mailicious traffic.  IPs in this range have been logged as exploit probes and vulnerability scanners. INSTA-BAN (IB-SKYTEL-0004).<br><br>Exploit probe. (IB-PMAEXPLOIT-0001). Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p><br>ZMEU Bot is not authorized on this server. (IB-ZMEU-0002).  Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>'));

// LOCLHOST SPOOF
$ax += regexmatch($requesturi,"hopsonlaw",'Localhost spoof.  INSTA-BAN (IB-LOCALHST-SPOOF-0001). Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>');

// KIOSKED REF SPAM
// Kaos
// 3/3/2018
$ax += inmatch($fromhost,'hopsonlaw','Ref spam.  INSTA-BAN (IB-REF-SPAM-0001). Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>');

// SETUP EXPLOIT
// Kaos
// 3/3/2018
$ax += regexmatch($requesturi,"setup",'Exploit probe. (IB-SETUP-EXPLOIT-0001). Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>');
//$ax = $ax + (inmatch($query,"setup",'Exploit probe. (IB-SETUP-EXPLOIT-0001). Be aware that your activity is being logged and further transgressions will result in  <p class="auto-type">PROSECUTION!</p>'));

// WP USERPRO VULNERABILITY PROBE
// 2/14/2018
// Kaos
$ax = $ax + (inmatch($query,"up_auto_log",'WordPress UserPro Vulnerability Probe. (IB-WP-UP-PROBE-0002). You have been permanently banned from this server for attempted malicious actions. Further attempts will result in criminal prosecution and/or civil litigation. <p>This is not a CMS site! Your actions are being monitored and recorded and the recorded logs will be used as evidence of your criminal actions against this server.</p>'));

// OTENET
// Kaos
// 2/13/2018
$ax += cidrblock($address,'94.66.128.0/18','Access via Otenet is prohibited. (UA-Otenet-0001). ');
$ax += inmatch($hoster,'otenet','Source of mailicious traffic.  IPs in this range have been identified as dictionary attackers and email harvesters. INSTA-BAN (IB-Otenet-0004). ');

// cytanet
// Kaos
// 1/29/2018
$ax += cidrblock($address,'213.149.176.0/20','Access via Cytanet is prohibited. (UA-CYTANET-0001). ');
$ax += inmatch($hoster,'cytanet','Source of mailicious traffic.  IPs in this range have been identified as dictionary attackers and email harvesters. INSTA-BAN (IB-CYTANET-0004). ');

// QWEST Communications / GIGABLAST-0002
// Kaos
// 12/17/2017 
$ax += cidrblock($address,'65.128.0.0/11','Qwest Communications is prohibited from accessing this site! (UA-QWEST-3071). Gigabot is not authorized to access this website. (UA-GIGABLAST-0001)');

// RCCG
// Kaos
// 12/5/2017
$ax += lmatch($address,'197.253.22.195','<h2 class="auto-type">Verified Spammer</h2> <p>As a verified comment spammer, Your access to this website is in violation of the specific ban against such detailed in our site terms of service <br><a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br>  Use of this site by you or your Agents or Representatives is restricted to the Terms of Service page accessed from the above link. </p> Known agent of a restricted entiity. INSTA-BAN (IB-COMMENT-SPAMMER-0004). <br>Known source of spam. INSTA-BAN (CMD-10).');
$ax += cidrblock($address,'197.253.0.0/18','Access from RCCG is forbidden! (UA-RCCG-0001). ');

// T-Mobile/Max Mobile Australia + A wannabe Dictionary Attacker
// Kaos
// 11/24/2017
$ax += lmatch($address,'46.125.250.96','Source identified as a dictionary attacker. INSTA-BAN (IB-PHP-DA-0004)(CMD-10).');
$ax += cidrblock($address,'46.124.0.0/15','Unauthorized Agent. Access from your network is forbidden! (UA-MAXMOBILE-AUSTRALIA-0001). ');

// Universiti Sains Islam Malaysia, Bandar Baru Nilai
// Kaos
// 11/24/2017
$ax += cidrblock($address,'103.18.92.0/22','Unauthorized Agent. Access from your network is forbidden! (UA-USIM-MY-0001). ');

// Bots in videos Folder TEST
// Kaos
// 11/10/2017
$ax += regexmatch($requesturi,"videos",'You are in an unauthorized area. Please stick to the content accessed through the website menus. (UA-VIDEOS-0001). Be aware that your activity is being logged and repeated transgressions will result in  <p class="auto-type">PERMANENT BAN</p> (UA-VIDEOS-0002).');

// Virgin Media Network
// Kaos
// 11/22/2017
$ax += cidrblock($address,'86.0.0.0/11','Unauthorized Agent. Access from your network is forbidden! (UA-VIRGIN-MEDIA-0001). ');
$ax += cidrblock($address,'92.236.0.0/16','Unauthorized Agent. Access from your network is forbidden! (UA-VIRGIN-MEDIA-BENWELL-0001). ');
$ax += inmatch($hoster,'virginm','Virgin Media Access is prohibited. INSTA-BAN (IB-VIRGIN-MEDIA-0004). ');

// Walvisbay Telecom Namibia
// Kaos
// 11/19/2017
$ax += cidrblock($address,'41.182.128.0/20','Unauthorized Agent.(UA-NA-WALVISBAY-0001). No access from Namibia. INSTA-BAN (IB-NA-WALVISBAY-0002). Access from your network is forbidden!  INSTA-BAN (CMD-10)');

// DE-HETZNER-
// Kaos
// 11/15/2017
$ax += cidrblock($address,'94.130.0.0/16','Unauthorized Agent. HETZNER access prohibited. INSTA-BAN (IB-DE-HETZNER-0002). Access from your network is forbidden! (UA-DE-HETZNER-0001). ');

// OVH France
// Kaos
// 11/09/2017
$ax += cidrblock($address,'54.37.0.0/16','Unauthorized Agent. OVH access prohibited. INSTA-BAN (IB-OVH-FR-0002). No access from France.  Access from your network is forbidden! (UA-OVH-FR-0001). ');

// Bots in downloads Folder TEST
// Kaos
// 11/10/2017
$ax += regexmatch($requesturi,"downloads",'You are in an unauthorized area. Please stick to the content accessed through the website menus. (UA-DOWNLOADS-0001). Be aware that your activity is being logged and repeated transgressions will result in  <p class="auto-type">PERMANENT BAN</p>. (UA-DOWNLOADS-0002).');

// Bots in logs Folder TEST
// Kaos
// 11/10/2017
$ax += regexmatch($requesturi,"logs",'You are in an unauthorized area. Please stick to the content accessed through the website menus. (UA-LOGS-0001). Be aware that your activity is being logged and repeated transgressions will result in  <p class="auto-type">PERMANENT BAN</p>. (UA-LOGS-0002).');

// Bots in template Folder TEST
// Kaos
// 11/10/2017
//$ax += regexmatch($requesturi,"template",'You are in an unauthorized area. Please stick to the content accessed through the website menus. (UA-TEMPLATE-0001). Be aware that your activity is being logged and repeated transgressions will result in  <p class="auto-type">PERMANENT BAN</p>. (UA-TEMPLATE-0002).');

// Bots in Styles Folder TEST
// Kaos
// 11/10/2017
//$ax += regexmatch($requesturi,"Styles",'You are in an unauthorized area. Please stick to the content accessed through the website menus. (UA-STYLES-0001). Be aware that your activity is being logged and repeated transgressions will result in  <p class="auto-type">PERMANENT BAN</p>. (UA-STYLES-0002).');

// Bots in Images Folder TEST
// Kaos
// 11/10/2017
//$ax += regexmatch($requesturi,"Images",'You are in an unauthorized area. Please stick to the content accessed through the website menus. (UA-IMAGES-0001). Be aware that your activity is being logged and repeated transgressions will result in  <p class="auto-type">PERMANENT BAN</p>. (UA-IMAGES-0002).');

// Orange WBC Broadband
// Kaos
// 11/05/2017
$ax += cidrblock($address,'2.29.0.0/16','Unauthorized Agent. Access from your network is forbidden! (UA-ORANGE-WBC-0001). ');

// UniNEt
// Kaos
// 11/05/2017
//$ax += cidrblock($address,'189.180.238/24','Unauthorized Agent. Alto! No te permite! Fuera de aquí! (UA-UNINET-0001). ');

// VF1
// Kaos
// 11/05/2017
$ax += cidrblock($address,'91.68.0.0/14','Unauthorized Agent. (UA-VF1-0001). ');

// Telemex Columbia
// Kaos
// 11/05/2017
//$ax += cidrblock($address,'181.136/13','Telmex Colombia. Alto! No te permite! Fuera de aquí! (UA-TELEMEX-TELECOM-0001). ');

// POP WIMAX, Hydra Algiers
// Kaos
// 11/05/2017
$ax += inmatch($hoster,'mail','Email Harvester. INSTA-BAN (IB-EMAIL-HARVESTER-0004). ');
$ax += inmatch($hoster,'agefal','Email Harvester. INSTA-BAN (IB-EMAIL-HARVESTER-0003). ');

// EPM Telecom
// Kaos
// 11/05/2017
//$ax += cidrblock($address,'181.136/13','EPM Telecom. Alto! No te permite! Fuera de aquí! (UA-EPM-TELECOM-0001). ');
//$ax += inmatch($hoster,'une.net','Seen with bot UA. Seen by honeypot.  Unacceptable threat rating. No access . INSTA-BAN (IB-EPM-UNE-0004). ');

// ONO
// Kaos
// 11/05/2017
$ax += cidrblock($address,'217.216.0.0/15','ONO_HFC. Seen with bot UA. Seen by honeypot.  Unacceptable threat rating. No access from Spain. INSTA-BAN (IB-ONO-0004). ');

// BILLi-DSL-POOL/Favco NMC
// Kaos
// 11/01/2017
$ax += cidrblock($address,'46.182.192.0/21','Favco.  You are not authorized on this server. INSTA-BAN (IB-FAVCO-0004). ');

// Lanka Education and Research Network
// Kaos
// 10/31/2017
$ax += cidrblock($address,'192.248.0.0/17','Lanka Education and Research Network. INSTA-BAN (IB-LEARN-0004). ');
$ax += inmatch($hoster,'gw1-v4.kln.ac.lk','Lanka Education and Research Network.  Neither requests nor obeys robots directives. INSTA-BAN (IB-ROBOTS-DIRECTIVES). Not an authorized bot. INSTA-BAN (IB-LEARN-0005) (CMD-10).');

// ADSL-STREAMYX
// Kaos
// 10/31/2017
$ax += cidrblock($address,'175.142.0.0/16','ADSL-STREAMYX. INSTA-BAN (IB-ADSL-STREAMYX-0004). ');

// ProXad
// Kaos
// 10/31/2017
$ax += cidrblock($address,'88.160.0.0/11','ProXad. INSTA-BAN (IB-PROXAD-0004). ');
$ax += inmatch($hoster,'proxad','ProXad.  Neither requests nor obeys robots directives. INSTA-BAN (IB-ROBOTS-DIRECTIVES). Not an authorized bot. INSTA-BAN (IB-PROXAD-0005) (CMD-10).');

// Media Arts Lab
// Kaos
// 10/31/2017
$ax += cidrblock($address,'195.110.64.0/19','Media Arts Lab. You are not authorized on this server. INSTA-BAN (IB-MEDIAARTSLAB-0004). ');

// ERDEMNET Mongolian National Research and Education Network
// Kaos
// 10/31/2017
$ax += cidrblock($address,'202.5.192.0/20','Media Arts Lab. No access from Mongolia. INSTA-BAN (IB-ERDEMENT-0004). ');

// Uptimebot
// Kaos
// 10/30/2017
$ax += cidrblock($address,'74.115.214.128/27','Uptimebot. INSTA-BAN (IB-UPTIMEBOT-0004). ');
$ax += rmatch($lcuseragent,'uptimebot','Uptime Bot is not authorized on this server. (IB-UPTIMEBOT-0002). Ignored directly communicated demands to stop crawling site. INSTA-BAN (IB-NON-COMPLIANCE-0001). Does not obey robots directives. INSTA-BAN (IB-ROBOTS-DIRECTIVES). <p class="auto-type">GTFO with that shit!</p>');
$ax = $ax + (inmatch($query,"uptimebot",'Uptime Bot is not authorized on this server. (IB-UPTIMEBOT-0002). Ignored directly communicate demands to stop crawling site. INSTA-BAN (IB-NON-COMPLIANCE-0001). Does not obey robots directives. INSTA-BAN (IB-ROBOTS-DIRECTIVES). <p class="auto-type">GTFO with that shit!</p>'));

// Bitcoin referrer spam 
// Kaos
// 9/29/2017
$ax += regexmatch($requesturi,"sysbitcoin",'The link that you followed to arrive here is fraudulent. The domain name or referring agent is not associated with KDG Web Design and not authorized to link to this content.
(REF-SPAM-BITCOIN-0001).');
$ax += inmatch($fromhost,'bitcoin','The link that you followed to arrive here is fraudulent. The domain name or referring agent is not associated with KDG Web Design and not authorized to link to this content.
(REF-SPAM-BITCOIN-0002). ');

// Telenor Telecom
// Kaos
// 10/30/2017
$ax += cidrblock($address,'85.164.0.0/14','Telenor Telecom. INSTA-BAN (UA-TELENOR-0004). ');

// Goodline
// Kaos
// 10/30/2017
$ax += cidrblock($address,'158.46.144.0/20','Goodline/E-Light Telecom. INSTA-BAN (UA-GOODLINE-0004). ');

// BULLSATCOM
// Kaos
// 10/30/2017
$ax += cidrblock($address,'46.237.64.0/18','Bullsatcom. INSTA-BAN (UA-BULLSATCOM-0004). ');

// EPM Telecom
// Kaos
// 10/30/2017
//$ax += cidrblock($address,'181.128/13','EPM Tlecom. INSTA-BAN (UA-EPM-TELECOM-0004). ');

// Karib Cable
// Kaos
// 10/30/2017
$ax += cidrblock($address,'207.191.248.0/21','Karib Cable. INSTA-BAN (UA-KARIBCABLE-0004). ');

// Jackson Ip, LLC
// Kaos
// 10/30/2017
$ax += cidrblock($address,'185.161.188.0/22','Jackson IP, LLC.. Not an ISP. Useless traffic. INSTA-BAN (IB-JACKSONIP-0004). ');

// OVH Network
// Kaos
// 10/30/2017
$ax += cidrblock($address,'54.37.0.0/16','OVH Network. No access from France. INSTA-BAN (UA-OVH-NETWORK-0004). ');
$ax += lmatch($address,'54.37.104.38','Source previously caught probing for admin access. <br />Dumbass skiddy, does not even recon before targetting.  <br />Good luck you lil pleb ass bitch.<p class="auto-type"> GTFO with that shit.</p> INSTA-BAN (CMD-10). ');

// Joomla Administrator Exploit Probe
// Kaos
// 10/30/2017
//$ax += regexmatch($requesturi,"administrator",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-ADMIN-PROBE). INSTA-BAN (CMD-10). ');
//$ax += regexmatch($requesturi,"joomla",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-DEFAULT-FILE-JOOMLA-PROBE). INSTA-BAN (CMD-10). ');
$ax += regexmatch($requesturi,"license.txt",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-DEFAULT-FILE-LICENSE-PROBE). INSTA-BAN (CMD-10). ');
$ax += regexmatch($requesturi,"readme.txt",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-DEFAULT-FILE-README-PROBE). INSTA-BAN (CMD-10). ');
$ax += regexmatch($requesturi,"robots.txt.dist",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-DEFAULT-FILE-ROBOTS-PROBE). INSTA-BAN (CMD-10). ');
//$ax += regexmatch($requesturi,"config",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-DEFAULT-FILE-WEBCONFIG-PROBE). INSTA-BAN (CMD-10). ');
$ax += regexmatch($requesturi,"htaccess.txt",'Joomla exploit probe. <h2>NOT JOOMLA YOU PLEB.</h2><p class="auto-type"> GTFO with that shit.</p> (IB-JOOMLA-DEFAULT-FILE-HTACCESS-PROBE). INSTA-BAN (CMD-10). ');

// SUBNET LABS
// Kaos
// 10/30/2017
$ax += cidrblock($address,'64.110.132.0/22','Subnet Labs. Cloud server. Not an ISP. Scripted traffic. INSTA-BAN (IB-SUBNET-LABS-0004). ');
$ax += inmatch($query,"youtube",'Exploit probe. <p class="auto-type"> GTFO with that shit.</p> (IB-YOUTUBE-PROBE). INSTA-BAN (CMD-10). ');
$ax += cidrblock($address,'64.110.128.0/21','Subnet Labs. Cloud server. Not an ISP. Scripted traffic. INSTA-BAN (IB-SUBNET-LABS-0004). ');
 
 // Generic unauthorized APNIC BOT
 // Kaos
 // 10/3/2017
 $ax += cidrblock($address,'182.0.0.0/8','Unauthorized bot. INSTA-BAN (UA-GENNOAUTHBOT-0004). ');

// France Telecom
// Kaos
// 10/5/2017
$ax += cidrblock($address,'90.10.0.0/16','France Telecom. Source of vulnerabilty scanners, scrapers, harvesters, and exploit probes. INSTA-BAN (IB-FRANCE-TELECOM-0004). (CMD-10) ');
$ax += inmatch($hoster,'.fr','France. No access allowed from France (UA-FRANCE-0001).');
 
// Wireless Repair Expo
// Kaos
// 9/25/2017
$ax += lmatch($address,'73.232.54.75','<h2>Kathy Katcher</h2> <p>As an agent of Wireless Repair Expo, Your access to this website is in violation of the specific ban against Wireless Repair Expo and its Agents detailed in our site terms of service <br><a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br>  Use of this site by you or your Agents or Representatives is restricted to the Terms of Service page accessed from the above link. </p> Known agent of a restricted entiity. INSTA-BAN (IB-WEXPO-0004). <br>Known source of spam. INSTA-BAN (CMD-10). <br> Refused to comply after direct communication. INSTA-BAN (CMD-10).<br> ');
//$ax += lmatch($address,'173.128.140.32','<h2>Kathy Katcher</h2> <p>As an agent of Wireless Repair Expo, Your access to this website is in violation of the specific ban against Wireless Repair Expo and its Agents detailed in our site terms of service <br><a href="http://legal.kdgwebdesign.com/tos.php"> HERE. </a><br>  Use of this site by you or your Agents or Representatives is restricted to the Terms of Service page accessed from the above link. </p> Known agent of a restricted entiity. INSTA-BAN (IB-WEXPO-0004). <br> Known source of spam. INSTA-BAN (CMD-10). <br> Refused to comply after direct communication. INSTA-BAN (CMD-10). <br>');

// Total Play Telecom
// Kaos
// 9/27/2017
$ax += cidrblock($address,'187.0.0.0/8','Total Play Telecom. Verified malicious traffic. Excessive scraping. INSTA-BAN (IB-TOTALPLAY-0004). ');

// Benaknoun Afrinic (Algeria)
// Kaos
// 9/27/2017
$ax += cidrblock($address,'105.96.0.0/12','Benaknoun access is denied. No access allowed from Algeria. (UA-BENAKNOUN-0004). ');

// SaudiNet
// Kaos
// 9/27/2017
$ax += cidrblock($address,'93.168.181.0/24','SaudiNet. No access allowed from Saudi Arabia.  Spoofed User Agent Strings.  Verified malicious traffic. Excessive scraping. INSTA-BAN (IB-SAUDINET-0004). ');

// WiLine Networks
// Kaos
// 9/27/2017

// Blocking offending IP only for now.  CIDR in case of future issues with this isp:  64.71.0.0/19
$ax += lmatch($address,'64.71.0.85','<h2>Content Thief. INSTA-BAN (IB-PLAGIARIST-10).</h2> <p>Excessive scaping.  INSTA-BAN (IB-WILINE-10).<br> Unauthorized bot. (UA-WILINE-0001).<br>  Does not request or obey robots directives. INSTA-BAN (CMD-10).<br> Requests scripts and other restricted content not visible to humans. INSTA-BAN (CMD-10).<br> You are not authorized to access this server.  INSTA-BAN (CMD-10).<br>');

// China Mobile Communications Corp.
// Kaos
// 9/27/2017
$ax += cidrblock($address,'112.0.0.0/13','China Mobile Communications Corp.  No access allowed from China Mobile Communications Corp.  Allows malicious traffic. (UA-CMCC-0001). Excessive scraping. INSTA-BAN (IB-CMCC-0004). INSTA-BAN (CMD-10).<br> ');

// Golden Tiger Telecom
// Kaos
// 9/27/2017
$ax += cidrblock($address,'103.25.0.0/24','Golden Tiger Telecom.  No access allowed from Golden Tiger Telecom.  Allows malicious traffic. (UA-GTTI-0001). Excessive scraping. INSTA-BAN (IB-GTTI-0004). INSTA-BAN (CMD-10).<br> ');

// OTE Network
// Kaos
// 9/27/2017
$ax += cidrblock($address,'85.73.128.0/18','No access allowed from Greece.  No access allowed from OTE Networks.  Allows malicious traffic. (UA-OTENET-0001). Excessive scraping. INSTA-BAN (IB-OTENET-0004). ');

// Egonet / Sileman
// Kaos
// 9/28/2017
$ax += cidrblock($address,'85.11.64.0/18','No access allowed from Egonet Allows malicious traffic. (UA-EGONET-0001). ');  
$ax += inmatch($hoster,'sileman','Sileman.  Neither requests nor obeys robots directives. Not an authorized bot. INSTA-BAN (IB-SILEMAN-0004) (CMD-10).');

// Contacts Crawler BOT
// Kaos
// 9/28/2017
$ax += lmatch($address,'142.0.198.172','Contacts Crawler Bot is not authorized on this server. (IB-CONTACTS-CRAWLER-0001). Email Harvester Bot INSTA-BAN (IB-HARVESTER-10). Unauthorized bot. (UA-CONTACTS-CRAWLER-0002). Does not request or obey robots directives. INSTA-BAN (CMD-10).');
$ax += rmatch($useragent,'contacts-crawler','Contacts Crawler Bot is not authorized on this server. (IB-CONTACTS-CRAWLER-0002). Email Harvester Bot INSTA-BAN (IB-HARVESTER-10). Unauthorized bot. (UA-CONTACTS-CRAWLER-0005). Does not request or obey robots directives. INSTA-BAN (CMD-10).');
$ax += rmatch($useragent,'scrapinghub','Contacts Crawler Bot is not authorized on this server. (IB-CONTACTS-CRAWLER-0003). Email Harvester Bot INSTA-BAN (IB-HARVESTER-10). Unauthorized bot. (UA-CONTACTS-CRAWLER-0004). Does not request or obey robots directives. INSTA-BAN (CMD-10).');

// Domain Crawler
// Kaos 
// 9/28/2017
$ax += cidrblock($address,'80.248.224.0/20','No access allowed from InternetBolaget Hosting.  Scripted traffic.  Not an ISP. Allows malicious traffic. (UA-BOLAET-0001). INSTA-BAN (CMD-10)');  
$ax += rmatch($useragent,'domaincrawler','Domain Crawler Bot is not authorized on this server. (IB-DOMAIN-CRAWLER-0002). Email Harvester Bot INSTA-BAN (IB-HARVESTER-10). Unauthorized bot. (UA-DOMAIN-CRAWLER-0005). Does not obey robots directives. INSTA-BAN (CMD-10).');

// Mojeek Bot
// Kaos 
// 9/28/2017 
$ax += cidrblock($address,'5.102.173.0/24','No access allowed from Mojeek Bot. (UA-MOJEEKBOT-0001). INSTA-BAN (CMD-10)');  
$ax += rmatch($useragent,'mojeek','Mojeek Bot is not authorized on this server. (IB-MOJEEKBOT-0002). Harvester. INSTA-BAN (IB-HARVESTER-10). Unauthorized bot. (UA-MOJEEKBOT-0005). Does not obey robots directives. INSTA-BAN (CMD-10).');

// Serbia BroadBand
// Kaos
// 9/29/2017
$ax += cidrblock($address,'188.2.0.0/17','Serbia Broadband. No usage regulation. No access allowed. INSTA-BAN (CMD-10)');
$ax += inmatch($hoster,'.rs','No access allowed from Serbia INSTA-BAN (IB-SERBIA-0001).');
$ax += inmatch($hoster,'dynamic.sbb','Known spam server and dictionary attacker. Unauthorized bot. INSTA-BAN (IB-VIAGRASPAM-0001).');

// KABELTV
// Kaos
// 9/29/2017
$ax += cidrblock($address,'80.160.0.0/13','KABELTV. No usage regulation. No access allowed. INSTA-BAN (CMD-10)');
$ax += inmatch($hoster,'.dk','No access allowed from DENMARK INSTA-BAN (IB-DENMARK-0001).');
$ax += inmatch($hoster,'webspeed','Known spam server. Unacceptable threat rating. Unauthorized bot. INSTA-BAN (IB-WEBSPEED-0001).');

// SKY BROADBAND GREAT BRITAIN  blocked offending ip for now, CIDR for future watch: 5.64.0.0/13 
// Kaos
// 9/29/2017
$ax += lmatch($address,'5.68.155.249','Sky Broadband Great Britain. Unauthorized Bot. Does not request or obey robots directives. Unaccptable threat score. INSTA-BAN (CMD-10)'); 

// mchsi
// Kaos
// 9/29/2017
$ax += lmatch($address,'173.30.156.31','Mediacom Communications Corp, 100 Crystal Run Rd. Middletown, NY, 10941. Unauthorized bot. Likes Honeypots. No access allowed. INSTA-BAN (CMD-10)');
$ax += inmatch($hoster,'mchsi','Mediacom Communications Corp, 100 Crystal Run Rd. Middletown, NY, 10941. Unauthorized bot. Likes Honeypots. No access allowed. INSTA-BAN (IB-HIGHTHREAT-0184) INSTA-BAN (CMD-10)');
 
 
// LMTS, LATVIA
// Kaos
// 9/29/2017
$ax += cidrblock($address,'212.3.194.0/23','Unauthorized bot.');
$ax += inmatch($hoster,'.lv','No access allowed form Latvia. (UA-LATVIA-0001). INSTA-BAN (CMD-10)');

// Telecommunicationcompany Suriname - TeleSur
// Kaos
// 9/29/2017
//$ax += cidrblock($address,'186.179.128/17','TeleSur. No usage regulation. No access allowed. INSTA-BAN (CMD-10)');

// ADSLSTREAMYX (TELEKOM MALAYSIA BERHAD)
// Kaos
// 9/29/2017
$ax += cidrblock($address,'124.0.0.0/8','No access allowed from Malaysia. (UA-MALAYSIA-0001) TELEKOM MALAYSIA BERHAD is not authorized on this server. Unauthorized Bot. INSTA-BAN (CMD-10)');

// Fiberlink
// Kaos
// 9/29/2017
$ax += cidrblock($address,'193.106.228.0/22','Fiberlink. No usage regulation. No access allowed. INSTA-BAN (CMD-10)');
$ax += inmatch($hoster,'.pl','No access allowed from Poland INSTA-BAN (IB-POLAND-0001).');
$ax += inmatch($hoster,'fiberlink','Known spam server. Unacceptable threat rating. Unauthorized bot. INSTA-BAN (IB-FIBERLINK-0001).');

// Fuck Off
$ax += cidrblock($address,'54.160.0.0/12','Unauthorized Bot. INSTA-BAN (CMD-10)');
$ax += lmatch($address,'95.85.1.165','Unauthorized Bot. INSTA-BAN (CMD-10)'); 
$ax += cidrblock($address,'84.109.128.0/20','Unauthorized Bot. INSTA-BAN (CMD-10)'); 
$ax += cidrblock($address,'185.142.212.0/22','Unauthorized Bot. INSTA-BAN (CMD-10)');  
$ax += rmatch($useragent,'gigablast','Your Bot is not authorized on this server. (IB-GIGABLAST-0002). Harvester. INSTA-BAN (IB-HARVESTER-10). Unauthorized bot. (UA-GIGABLAST-0005). Does not obey robots directives. INSTA-BAN (CMD-10).');
$ax += cidrblock($address,'197.210.44.0/22','No access allowed from Nigeria. (UA-NIGERIA-0001) INSTA-BAN (CMD-10)');


// ENFORCE ROBOTS DIRECTIVES
// Kaos
//8/4/2017
$ax += regexmatch($requesturi,"admin_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0001).');
$ax += regexmatch($requesturi,"bin_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0002).');
$ax += regexmatch($requesturi,"cache_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0003).');
$ax += regexmatch($requesturi,"cli_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0004).');
$ax += regexmatch($requesturi,"comp_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0005).'); 
$ax += regexmatch($requesturi,"inc_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0006).');
$ax += regexmatch($requesturi,"lang_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0007).');
$ax += regexmatch($requesturi,"lay_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0008).');
$ax += regexmatch($requesturi,"lib_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0009).');
$ax += regexmatch($requesturi,"logs_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0010).');
$ax += regexmatch($requesturi,"mod_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0011).');
$ax += regexmatch($requesturi,"plug_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0012).');
$ax += regexmatch($requesturi,"tmp_robot_hit",'Violation of robots directives after viewing robots.txt.  Bot access to this content is restricted.
 (UA-BOT-DIRECTIVE-0013).');


 
 // Wannbe Phone Haxxor
 // Kaos
 // 8/15/2017
//$ax += lmatch($address,'173.128.155.171','Wannabe scrippy. Access by dumbasses is restricted. Try something else, I&#39;ll block that too.  Suspected hacktool/hostile probe. INSTA-BAN (CMD-10). ');

// Findxbot/Privacore ApS 
// Kaos
//8/15/2017
$ax += rmatch($useragent,'findxbot','FindX Bot is not authorized by the site admin INSTA-BAN (IB-FINDXBOT-0001).');
$ax += cidrblock($address,'77.66.0.0/17','Privacore ApS. Not an ISP. Scripted traffic. Excessive scraping. INSTA-BAN (IB-PRIVACORE-0004). ');

//Clara World Media/TalkTalk PLC
// Kaos
// 8/17/2017
$ax += cidrblock($address,'2.96.0.0/14','Clara World Media. Charity scammer.  Comment spammer. INSTA-BAN (IB-CLARAWORLDMEDIA-0001) TalkTalk PLC. Caters to unsavories.  INSTA-BAN (IB-TALKTALK-0002). ');

 
 // Honeypot hit
// Kaos
// 8/4/2017
$ax += regexmatch($requesturi,"johnny5",'Honeypot hit! Congratulations, you have now been added to the world&#39;s largest database of email harvesters, spammers, and exploit bots! E-mail Harvester / Comment Spammer. Your Spam is fried! INSTA-BAN (IB-0045). ');

// Quantify Scraper Bot
// Kaos
// 8/9/2017
$ax += inmatch($hoster,'qwant.com','Quantify Bot is not authorized by the site admin INSTA-BAN (IB-QUANTFIY-0001).');
$ax += rmatch($useragent,"qwant","Quantify Bot is not authorized by the site admin INSTA-BAN (IB-QUANTFIY-0002). "); 
$ax += lmatch($address,'194.187.170.120','Logged with scaper type acivity INSTA-BAN (IB-QUANTIFY-0004).  Suspected hacktool/hostile probe. INSTA-BAN (CMD-10). ');

// NTENT bit
// Kaos
// 8/11/2017
$ax += rmatch($useragent,"ntentbot","Didtil Networks: known bad host.  Ntent Bot is banned. INSTA-BAN (IB-NTENT-0002). "); 
$ax += lmatch($address,'216.145.126.117','Logged with scaper type acivity INSTA-BAN (IB-QUANTIFY-0004).  Suspected hacktool/hostile probe. INSTA-BAN (CMD-10). ');


// WebNX Host
// Kaos
// 8/10/2017
$ax += inmatch($hoster,'webnx','You are not authorized by the site admin INSTA-BAN (IB-WEBNX-0001).');
$ax += lmatch($address,'64.140.169.42','WebNX Hosting. Not an ISP. Scripted traffic. Excessive scraping. INSTA-BAN (IB-WEBNX-0004).  Suspected hostile probe. INSTA-BAN (CMD-10). ');
$ax += cidrblock($address,'64.140.168.0/21','WebNX Hosting. Not an ISP. Scripted traffic. Excessive scraping. INSTA-BAN (IB-WEBNX-0004). ');

// Feedparser Bot
// Kaos
// 8/11/2017
$ax += rmatch($useragent,"feedparser","Feedparser is not authorized by the site admin. INSTA-BAN (IB-FEEDPARSER-0002). ");
$ax += cidrblock($address,'104.254.88.0/21','Amanah Tech Data Centers Inc. Not an ISP! and Not Google! INSTA-BAN (IB-FEEDPARSER-0004). ');

// WORDPRESS SPECIFIC EXPLOIT BANS
// Kaos
//8/4/2017
$ax += regexmatch($requesturi,"wp-",'WordPress Exploit Probe. Not Authorized.
 (IB-WP-PROBE-0001).');
$ax += regexmatch($requesturi,"wp-login\.(?:bak|old|orig|php|save)",'WordPress Login Exploit Probe. INSTA-BAN (IB-WP-PROBE-0002). '); 
$ax += inmatch($query,'user','Attempted User Exploit. This site does not allow user registration. INSTA-BAN (CMD-10). ');
//  removed 8/6/2017 was resulting in legitimate traffic being banned.  $ax += regexmatch($requesturi,"blog",'WordPress Exploit Probe. INSTA-BAN (IB-WP-PROBE-0003). '); 
$ax += regexmatch($requesturi,"user",'Attempted User Exploit. This site does not allow user registration. INSTA-BAN (CMD-10). ');
//  removed 8/6/2017 was resulting in legitimate traffic being banned.  $ax += regexmatch($requesturi,"blog",'WordPress Exploit Probe. INSTA-BAN (IB-WP-PROBE-0003). '); 

// DATABASE CONFIG PHISHING BANS
// Kaos 
// 8/4/2017
$ax += regexmatch($requesturi,"config.php",'DB Config Phishing! INSTA-BAN (IB-6124). ');
$ax += regexmatch($requesturi,"configuration.php",'DB Config Phishing! INSTA-BAN (IB-6125). ');

// EXPLOIT PROBE BANS
// Kaos
// 8/4/2017
$ax += regexmatch($requesturi,"suspected",'Suspicious ativity. Usually an exploit probe. INSTA-BAN (CMD-10). ');
$ax += regexmatch($requesturi,"system\.(?:bak|old|orig|php|save)",'Script Exploit Probe! INSTA-BAN (IB-6126). ');
$ax += regexmatch($requesturi,"error\.(?:bak|old|orig|php|save)",'Forced Error Leak Probe! INSTA-BAN (IB-6127). ');
$ax += regexmatch($requesturi,"security\.(?:bak|old|orig|php|save)",'Vulnerability Probe! INSTA-BAN (IB-6128). ');

// IMAGE SCRAPER BANS
// Kaos
// 8/4/2017
//$ax += regexmatch($requesturi,"favicon.ico",'Direct Access is restricted. Image Scraper. Excessive Scraping. (UA-IMAGE-SCRAPER-0001).');

// SHAW-COMM
// Kaos
//8/4/2017
 
$ax += lmatch($address,'174.0.62.187','SHAW-COMM. Generic Vulnerability Probe.  Excessive suspicious queries.  Aggressive scraper. Unacceptable threat score. (UA-V-PROBE-0002).'); 


// SWIPNET
// Kaos
// 6/18/2017

$ax += cidrblock($address,'83.176.0.0/12','Swipnet is not authorized by the site admin. Known bothost/badhost. Suspected hacktool/hostile probe. (UA-SWIPNET-0004). ');

// MYTIME MarketPlace
// Kaos
// 7/25/2017
$ax += lmatch($address,'23.21.55.59','<em>Booking Scammer:</em><h3>MyTime MarketPlace Access is Denied!</h3><h2>It&#39;s MyTime Now!</h2><blockquote>Neither iframe display nor Amazon AWS are allowed.</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and scams targetting or using our company!"</blockquote><h1>Leave now, and do not return!</h1>
 (UA-MYTIME-0002).');

$ax += regexmatch($requesturi,"53e4f09ab85b3bdc1cfdb2a704930f96",'<em>Booking Scammer:</em><h3>MyTime MarketPlace Access is Denied!</h3><h2>Its MyTime Now!</h2><blockquote>Neither iframe display nor Amazon AWS are allowed.</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and scams targetting or using our company!"</blockquote><h1>Leave now, and do not return!</h1>
 (UA-MYTIME-0003).');
 
// Block For Processor Script Requests w/o Submit
// Kaos
// 7/26/2017
$ax += inmatch($query,"no_submit",'<h1>Direct access to this page is forbidden!</h1><blockquote>You may not access this page without submitting its form.<br>Please submit the form.</blockquote><h1>Warning! Repeated requests for this page without submitting its form will result in your being banned from this website!</h1>
 (UA-FORM-PROCESSOR-REQ-0003).'); 

$ax += lmatch($address,'68.51.39.43','<h1>YOU&#39;RE OUT!!!</h1><p>You have been banned from this site for repeated violations of restrictions.</p><h1>Warning:</h1><em>Further malicious activity will result in criminal prosecution!  The penalties for cyber crimes in the State of New Jersey are severe!<br />Nothing on this site is worth going to jail for!</em><br /> (UA-FPR-0004).'); 
 
 
// Intelium
// Kaos
// 5/15/2017
$ax += rmatch($useragent,"YI","Suspected hacktool (UA-0142). "); //71
$ax += rmatch($useragent,"YE","Suspected hacktool (UA-0142.1). "); //72a
$ax += inmatch($lcuseragent,"intelium","Hostile probe. (UA-0143). "); //71
$ax += cidrblock($address,'104.192.74.0/24','Intelium. Known bothost/badhost. Hostile probe. (UA-0143.1). ');

// Afrinic Managed to Unblock from an http:BL block
// Kaos
//6/15/2017

$ax += lmatch($address,'41.89.26.24','Unacceptable threat rating. Known source of malicious code. University of Nairobi/Tangaza University.  Smells like a script kiddy. (UA-NAIROBI_SKIDDY-0001).');

// JBScamWarez
// Kaos
// 9/21/2017
$ax += lmatch($address,'100.15.147.242','<em>JBScamWarez:</em><h3>I know I am a moron and all but, JBScamWarez is denied access! </h3><h2>You&#39;re (not &#39;your&#39;) Out!</h2><blockquote>We have detected attempted access by an agent assosciated with JBScamWarez</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="https://www.youtube.com/embed/fWweqP_ZWbg?autoplay=1" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-JBSCAMMER-0002).'); 
//

// Hidden Cobra
// Kaos
// 6/14/2017

$ax += lmatch($address,'105.184.19.161','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0002).'); 

$ax += lmatch($address,'105.184.229.17','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0003).');  
 
$ax += lmatch($address,'105.184.229.80','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0004).');  

$ax += lmatch($address,'105.184.231.17','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0005).');  

$ax += lmatch($address,'105.184.255.194','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0006).');  

$ax += lmatch($address,'105.225.112.221','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0007).');  

$ax += lmatch($address,'109.160.91.135','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0008).');  

$ax += lmatch($address,'109.162.196.130','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0009).');  

$ax += lmatch($address,'109.166.233.132','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0010).');  

$ax += lmatch($address,'109.201.8.60','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0011).');  

$ax += lmatch($address,'109.219.30.47','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0012).');  

$ax += lmatch($address,'109.224.54.74','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0013).');  

$ax += lmatch($address,'109.229.229.227','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0014).');  

$ax += lmatch($address,'109.69.25.37','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0015).');  

$ax += lmatch($address,'109.69.31.12','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0016).');  

$ax += lmatch($address,'109.72.63.94','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0017).');  

$ax += lmatch($address,'111.68.97.105','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0018).');  

$ax += lmatch($address,'111.93.182.170','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0019).'); 

$ax += lmatch($address,'116.74.71.205','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0020).');   

$ax += lmatch($address,'117.103.69.134','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0021).');  
 
$ax += lmatch($address,'117.202.50.205','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0022).'); 
 
$ax += lmatch($address,'117.203.65.126','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0023).');
 
$ax += lmatch($address,'117.203.65.207','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0024).'); 

$ax += lmatch($address,'117.203.66.157','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0025).');
 
$ax += lmatch($address,'117.203.66.92','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0026).');  
 
$ax += lmatch($address,'117.203.70.76','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0027).');  
 
$ax += lmatch($address,'117.203.71.116','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0028).');  
 
$ax += lmatch($address,'117.206.0.34','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0029).');  
 
$ax += lmatch($address,'117.206.10.13','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0030).');  
 
$ax += lmatch($address,'117.206.10.98','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0031).');  
 
$ax += lmatch($address,'117.206.11.1','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0032).');  
 
$ax += lmatch($address,'117.206.12.44','<em>Snake Charmer:</em><h3>Hidden Cobra Access is Denied!</h3><h2>Your Cobra has Been Charmed!!</h2><blockquote>We have detected attempted access by an agent assosciated with Hidden Cobra</blockquote><br><blockquote>Stop what you are doing and leave now!<br>You are hereby warned that your actions are being monitored and recorded.  We are aware of your presence, and will take aggressive action to prevent further access and exploit attempts!"</blockquote><div style="margin-left:auto; margin-right:auto; text-align:center;"><iframe width="560" height="315" src="http://johnwreeve.com/videos/cobra-charmed.mp4" frameborder="0" allowfullscreen autoplay="true"></iframe></div>
 (UA-HIDDEN-COBRA-0033).');  
 
 
// Unity Media Denmark
// Kaos
// 6/15/2017

$ax += cidrblock($address,'178.202.0.0/15','Unity Media is not authorized on this server. No access from DE. (UA-UNITY_MEDIA-0001). ');

 
// LinkedIN ScamBot
// Kaos
// 6/14/2017

$ax += regexmatch($requesturi,"linkedinbot",'LinkedInBot is not authorized on this site. LinkedIn is neither an access provider nor an indexing service. LinkedIn does not crawl websites.  Try this sh** with some ignorant CMS admin. LinkOut of here. (UA-LINKEDINBOT-0001). Fake LinkedIn ScamBot (UA-LINKEDINBOT-0002).');

$ax += inmatch($lcuseragent,'linkedinbot','LinkedInBot is not authorized on this site. LinkedIn is neither an access provider nor an indexing service. LinkedIn does not crawl websites.  Try this sh** with some ignorant CMS admin. LinkOut of here. (UA-LINKEDINBOT-0001). ');

$ax += lmatch($address,'54.67.67.3','Fake LinkedIn ScamBot (UA-LINKEDINBOT-0002).');

// Linguee ban
//kaos
// 4/22/2017
$ax += cidrblock($address,'62.138.0.0/19','Linguee bot.  Does not like robots.txt.  Your bot is liguini.(SPD-239). ');

// Panscient ban
// kaos
// 4/22/2017
$ax += inmatch($lcuseragent,'panscient.com','Panscient.com is not authorized on this site. Does not request robots.txt.  Ignores robots directives.  Excessive and useless scraping. Too interested in contact page. Most likely an email harvester.  Good luck! See http://kdgwebdesign.com/categories/legal/pages/tos . INSTA-BAN (UA-PANSCIENT-0001). ');


// SurveyBot
// Kaos
//4/12/2017
$ax += inmatch($lcuseragent,'surveybot','SurveyBot is not authorized on this site. Survey says: Get Lost!. INSTA-BAN (UA-SURVEYBOT-0001). ');
$ax += inmatch($lcuseragent,'domaintools','DomainTools is not authorized on this site.  Survey says: Get Lost!. INSTA-BAN (UA-SURVEYBOT-0002). ');
$ax += cidrblock($address,'64.246.165.128/25','No access allowed from Domaintools or SurveyBot.  Survey says: Get Lost!. INSTA-BAN (UA-SURVEYBOT-0003). ');
//$ax += inmatch($query,'surveytest','SurveyBot is not authorized on this site. Survey says: Get Lost!. INSTA-BAN //(UA-SURVEYBOT-0000). ');

// AhrefsBot
// Kaos
// 4/12/2017
$ax += inmatch($lcuseragent,"ahrefsbot","AhrefsBot is not authorized on this site. Ref says: YOU'RE OUT!. INSTA-BAN (UA-AHREFSBOT-0001). ");
//$ax += regexmatch($requesturi,"ahrefstest","AhrefsBot is not authorized on this site. Ref says: YOU'RE OUT!. INSTA-BAN (UA-AHREFSBOT-0000). ");


// OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  Not an access provider, allows rampant abuse, hosts badware/bad services.
// Kaos
// 4/11/2017
$ax += cidrblock($address,'5.39.0.0/17','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services. (ASN-OVH-0000). ');
$ax += cidrblock($address,'5.135.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0001). ');
$ax += cidrblock($address,'8.7.244.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0002). ');
$ax += cidrblock($address,'8.18.128.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0003). ');
$ax += cidrblock($address,'8.18.136.0/21','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0004). ');
$ax += cidrblock($address,'8.18.172.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0005). ');
$ax += cidrblock($address,'8.20.110.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0006). ');
$ax += cidrblock($address,'8.21.41.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0007). ');
$ax += cidrblock($address,'8.24.8.0/21','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0008). ');
$ax += cidrblock($address,'8.26.94.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0009). ');
$ax += cidrblock($address,'8.29.224.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0010). ');
$ax += cidrblock($address,'8.30.208.0/21','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0011). ');
$ax += cidrblock($address,'8.33.96.0/21','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0012). ');
$ax += cidrblock($address,'8.33.128.0/21','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0013). ');
$ax += cidrblock($address,'8.33.136.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0014). ');
$ax += cidrblock($address,'31.201.128.0/17','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0015). ');
$ax += cidrblock($address,'37.49.226.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0016). ');
$ax += cidrblock($address,'37.59.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0017). ');
$ax += cidrblock($address,'37.60.48.0/20','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0018). ');
$ax += cidrblock($address,'37.187.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0019). ');
$ax += cidrblock($address,'37.222.0.0/15','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0020). ');
$ax += cidrblock($address,'46.105.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0021). ');
$ax += cidrblock($address,'62.245.0.0/19','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0022). ');
$ax += cidrblock($address,'87.98.128.0/17','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0023). ');
$ax += cidrblock($address,'87.253.232.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0024). ');
$ax += cidrblock($address,'91.90.88.0/21','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0025). ');
$ax += cidrblock($address,'91.121.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0026). ');
$ax += cidrblock($address,'91.218.204.0/22','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0027). ');
$ax += cidrblock($address,'94.23.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0028). ');
$ax += cidrblock($address,'103.5.12.0/22','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0029). ');
$ax += cidrblock($address,'109.190.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0030). ');
$ax += cidrblock($address,'142.4.192.0/19','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0031). ');
$ax += cidrblock($address,'176.31.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0032). ');
$ax += cidrblock($address,'178.32.0.0/15','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0033). ');
$ax += cidrblock($address,'178.236.224.0/20','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0034). ');
$ax += cidrblock($address,'185.7.240.0/22','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0035). ');
$ax += cidrblock($address,'185.10.17.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0036). ');
$ax += cidrblock($address,'185.12.32.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0037). ');
$ax += cidrblock($address,'188.165.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0038). ');
$ax += cidrblock($address,'192.95.0.0/18','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0039). ');
$ax += cidrblock($address,'193.84.187.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0040). ');
$ax += cidrblock($address,'193.104.19.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0041). ');
$ax += cidrblock($address,'193.104.56.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0042). ');
$ax += cidrblock($address,'193.109.63.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0043). ');
$ax += cidrblock($address,'193.200.52.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0044). ');
$ax += cidrblock($address,'194.50.82.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0045). ');
$ax += cidrblock($address,'195.43.138.0/24','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0046). ');
$ax += cidrblock($address,'195.60.164.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0047). ');
$ax += cidrblock($address,'195.110.30.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0048). ');
$ax += cidrblock($address,'195.246.232.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0049). ');
$ax += cidrblock($address,'195.246.254.0/23','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0050). ');
$ax += cidrblock($address,'198.27.64.0/18','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0051). ');
$ax += cidrblock($address,'198.50.128.0/17','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0052). ');
$ax += cidrblock($address,'198.100.144.0/20','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0053). ');
$ax += cidrblock($address,'198.245.48.0/20','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0054). ');
$ax += cidrblock($address,'213.186.32.0/19','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0055). ');
$ax += cidrblock($address,'213.251.128.0/18','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0056). ');
$ax += cidrblock($address,'151.80.0.0/16','OVH Networks not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services.  (ASN-OVH-0057). ');

// VECTRANET    
// Kaos
// 4/9/2017
$ax += inmatch($hoster,'vectranet.','Vectranet is not authorized on this site. NL Source of badbots which ignore robots.txt directives or fails to requests robots.txt. Excessive Scraping. Access from Netherlands not authorized. (UA-VECTRANET-0001). ');
$ax += cidrblock($address,'109.0.0.0/8','No access allowed from Netherlands (NL-IP6601). ');

// LIPERHEY Unauthorized SEO bot
// Kaos
// 4/9/2017
$ax += inmatch($lcuseragent,'dataprovider.com','SEO is not authorized on this site. Get Lost ya hoser. INSTA-BAN (UA-LIPPERHEY-0001). ');
$ax += inmatch($hoster,'lipperhey.','Hey, Lipper you are not authorized on this site. Hey, if I wanted any Lip from you, I would scrape it off my zipper!. (UA-LIPPERHEY-0002). ');
$ax += inmatch($lcuseragent,'lipperhey','SEO is not authorized on this site (UA-LIPPERHEY-0003). '); //77

// SemRUSH Unauthorized SEO bot
// Kaos
// 4/3/2017
$ax += inmatch($lcuseragent,'semrushbot','Uninvited SEO tool (UA-SEMRUSH-0001). '); //71
$ax += cidrblock($address,'46.229.160.0/20','Advanced Hosters B.V. Not an access provider.  Rush up outta here. (UA-SEMRUSH-0002). ');
$ax += cidrblock($address,'88.208.0.0/18','Advanced Hosters B.V. Not an access provider.  Rush up outta here. (UA-SEMRUSH-0003). ');
$ax += cidrblock($address,'185.56.232.0/22','Advanced Hosters B.V. Not an access provider.  Rush up outta here. (UA-SEMRUSH-0004). ');
$ax += cidrblock($address,'192.243.48.0/20','Advanced Hosters B.V. Not an access provider.  Rush up outta here. (UA-SEMRUSH-0005). ');
$ax += cidrblock($address,'213.174.128.0/19','Advanced Hosters B.V. Not an access provider.  Rush up outta here. (UA-SEMRUSH-0006). ');

// SEZnambot
// Kaos
// 4/2/2017
$ax += inmatch($lcuseragent,'seznambot','We sez you were not invited. We sez see ya! (UA-SEZNAMBOT-0001). '); //71
$ax += inmatch($lcuseragent,'seznam','We sez you were not invited. We sez see ya! (UA-SEZNAMBOT-0002). '); //71


// AMAZON Skiddies
// Kaos
// 4/3/2017, 4/24/2017
$ax += cidrblock($address,'54.93.0.0/16','Amazon Skiddy. Script kiddies not allowed here. Amazon AWS not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services. Logged, forwarded to security for investigation. (UA-AWS-SKIDDY-0001). ');
$ax += cidrblock($address,'54.210.0.0/15','Amazon Skiddy. Script kiddies not allowed here. Amazon AWS not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services. Logged, forwarded to security for investigation. (UA-AWS-SKIDDY-0002). ');
$ax += cidrblock($address,'54.196.0.0/15','Amazon Skiddy. Script kiddies not allowed here. Amazon AWS not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services. Logged, forwarded to security for investigation. (UA-AWS-SKIDDY-0003). ');
$ax += cidrblock($address,'54.88.0.0/16','Amazon Skiddy. Script kiddies not allowed here. Amazon AWS not authorized on this server. Not an access provider, allows rampant abuse, hosts badware/bad services. Logged, forwarded to security for investigation. (UA-AWS-SKIDDY-0004). ');

// BAIDU supps
// kaos
// 4/24/2017 
$ax += inmatch($hoster,'baidu','Badhost. Insta-Ban (IB-BAIDU-0001). (CMD-10) ');
$ax += inmatch($lcuseragent,'baiduspider','Chinese big-brother. Insta-Ban (IB-BAIDU-0002). (CMD-10) ');
$ax += cidrblock($address,'180.76.15.0/24','Baidu. Insta-Ban (IB-BAIDU-0003). (CMD-10) ');
$ax += lmatch($address,'104.193.88.243','Baidu. Chinese big-brother. Badhost. Insta-Ban (IB-BAIDU-0004). (CMD-10)  ');
$ax += lmatch($address,'112.5.237.0','No access from China. Baidu. Chinese big-brother. Badhost. Insta-Ban (IB-BAIDU-0005). (CMD-10) ');
$ax += cidrblock($address,'104.193.88.0/22','Baidu. Insta-Ban (IB-BAIDU-0006). (CMD-10)  ');	


// RANDOM Bans for suspicious activity
// kaos
// 4/24/2017
$ax += inmatch($query,"'A=","RFI attack/SQLi. Try B. But thats the same INSTA-BAN (Cust-SQL-XXX). ");
$ax += cidrblock($address,'69.58.176.0/20','Verisign. Not allowed here. Heres your sign. GTFO! (UA-VERISIGN-0001). ');
$ax += cidrblock($address,'14.0.0.0/8','APNIC. Why you still here?  You here 4 hour. You go home now! (UA-APNIC-0001). ');

$ax += cidrblock($address,'191.0.0.0/8','LACNIC. Alto! No te permite! Fuera de aquí! (UA-LAPNIC-0001). ');

// CLIQzbot  Useless scraper,
// Kaos
// 4/3/2017
$ax += inmatch($lcuseragent,'cliqzbot/1.0','Cliq somewhere else! (UA-CLIQZ-0001). ');
$ax += inmatch($lcuseragent,'cliqzbot','Cliq somewhere else! (UA-CLIQZ-0002). ');
$ax += cidrblock($address,'184.72.0.0/15','Cliqzbot','Cliq somewhere else! (UA-CLIQZ-0003). ');
$ax += cidrblock($address,'35.156.0.0/14','Cliqzbot','Cliq somewhere else! (UA-CLIQZ-0004). ');


// BUbiNG  Scraper or Harvetster
// Kaos
// 4/6/2017
$ax += inmatch($hoster,'domain.not.configured.','Hey bub. You were not invited. (UA-BUBING-0001). ');
$ax += inmatch($lcuseragent,'bubing','Useless scraper, harvester, spammer. Bub-bye now! (UA-BUBING-0002). ');
$ax += cidrblock($address,'64.62.252.160/27','Transplant Resource Center of Maryland. Not an ISP! Known source for BUbiNG Bot(UA-BUBING-0003). ');	


// WHYNOPADLOCK Scraper/Harvester
// Kaos 
// 4/1/2017
$ax += inmatch($lcuseragent,'www.whynopadlock.com','Uninvited agressive scraper.  You just got your head split with our padlock. INSTA-BAN (UA-LEXICONN5-0001). ');
$ax += inmatch($hoster,'lexiconn5.','Uninvited agressive scraper.  You just got your head split with our padlock. INSTA-BAN (UA-LEXICONN5-0002). ');

$ax += cidrblock($address,'69.65.0.0/20','Gigenet is not authorized on this site. Ignores Robots directives. Fails to request robots.txt. Excessive and useless scraping. Not an access provider. (UA-GIGE-0001). ');

// RIPE subs
// kaos
// 4/24/2017
$ax += cidrblock($address,'144.76.0.0/16','You are not authorized on this server. Known source of Vulnerability Scanners. Ignores Robots directives. Fails to request robots.txt. Excessive and useless scraping. Not an access provider. Hit the road, Jack! And dontcha come back no more no more no more no more! (UA-RIPE-0001). ');
$ax += cidrblock($address,'151.0.0.0/8','Access forbidden. IPs within CIDR are known source of attack scripts. (UA-RIPE-0002). ');
$ax += cidrblock($address,'5.255.192.0/18','Yandex is not authorized.  Known badhost. INSTA-BAN (IB-YANDEX-0002). ');


// VOLTRON (Are you serious? lmao!)
// kaos
// 3/24/2017
$ax += inmatch($lcuseragent,'voltron','Voltron is not authorized on this server. Ignores Robots directives. Fails to request robots.txt. Excessive and useless scraping. Not an access provider. Form feet and legs. Form forbidden header. Form INSTA-BAN! (CUST-UA-6124). ');

//Quantil Inc., CDN used to access data blocked by ZB Block
//AS54994
//7th Feb 2016
$ax += cidrblock($address,'8.37.224.0/20','Quantil Networks (CUST-Quantil-01). ');
$ax += cidrblock($address,'45.116.80.0/22','Quantil Networks (CUST-Quantil-02). ');
$ax += cidrblock($address,'63.159.216.0/23','Quantil Networks (CUST-Quantil-03). ');
$ax += cidrblock($address,'70.39.184.0/21','Quantil Networks (CUST-Quantil-04). ');
$ax += cidrblock($address,'103.56.116.0/22','Quantil Networks (CUST-Quantil-05). ');
$ax += cidrblock($address,'168.235.192.0/20','Quantil Networks (CUST-Quantil-06). ');
$ax += cidrblock($address,'203.130.48.0/21','Quantil Networks (CUST-Quantil-07). ');
$ax += cidrblock($address,'203.130.56.0/24','Quantil Networks (CUST-Quantil-08). ');
$ax += cidrblock($address,'203.130.58.0/23','Quantil Networks (CUST-Quantil-09). ');
$ax += cidrblock($address,'203.130.60.0/22','Quantil Networks (CUST-Quantil-10). ');
$ax += cidrblock($address,'220.243.196.0/24','Quantil Networks (CUST-Quantil-11). ');
$ax += cidrblock($address,'220.243.224.0/23','Quantil Networks (CUST-Quantil-12). ');
$ax += cidrblock($address,'220.243.226.0/24','Quantil Networks (CUST-Quantil-13). ');
$ax += cidrblock($address,'220.243.229.0/24','Quantil Networks (CUST-Quantil-14). ');
$ax += cidrblock($address,'220.243.230.0/23','Quantil Networks (CUST-Quantil-15). ');
$ax += cidrblock($address,'220.243.232.0/22','Quantil Networks (CUST-Quantil-16). ');
$ax += cidrblock($address,'220.243.236.0/23','Quantil Networks (CUST-Quantil-17). ');



// start temp google bans

//$ax += inmatch($lcuseragent,'googlebot','Googlebot is no longer allowed on this server. Ignores crawl speed settings. //Ignores Robots directives. Excessive and useless scraping. Not an access provider. Go away until you can abide by robots //directives and allow crawl speed adjustments. (UA-147). ');

//$ax += inmatch($lcuseragent,'google','Googlebot is no longer allowed on this server. Ignores crawl speed settings. Ignores //Robots directives. Excessive and useless scraping. Not an access provider. Go away until you can abide by robots //directives and allow crawl speed adjustments. (UA-147). ');

// end temp google bans


// start archive.org bans
$ax += inmatch($lcuseragent,'archive.org_bot','Archive.org is not permitted on this server. Ignores crawl speed settings. Ignores Robots directives. Excessive and useless scraping. Not an access provider. Archive this! (UA-147). ');
$ax += inmatch($hoster,'crawl890.us.archive.org.','Archive.org is not permitted on this server. Ignores crawl speed settings. Ignores Robots directives. Excessive and useless scraping. Not an access provider. Archive this! (UA-147). '); 
// end archive.org bans

// Croatia(HR) temps
$ax += rmatch($hoster,'.hr','No access allowed from Croatia (HR-HN0001). ');
$ax += cidrblock($address,'31.45.128.0/17','No access allowed from Croatia. Vipnet is not authorized on this server. (HR-IP0001). ');
// end Croatia 


// start Italy bans
$ax += rmatch($hoster,'.it','No access allowed from Italy (IT-HN0001). ');
$ax += cidrblock($address,'168.202.0.0/16','No access allowed from Italy (IT-IP0001). ');
?>