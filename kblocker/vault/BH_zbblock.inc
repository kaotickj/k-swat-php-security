<?php
// *php 5 fix
global $ax;
// Bahrain Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / BH-2018.65.634';
$ax += rmatch($hoster,'.bh','No access allowed from Bahrain (BH-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.166.116.0/24','No access allowed from Bahrain (BH-IP0001). ');
$ax += cidrblock($address,'109.63.0.0/17','No access allowed from Bahrain (BH-IP0002). ');
$ax += cidrblock($address,'109.161.128.0/17','No access allowed from Bahrain (BH-IP0003). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.90.63.0/24','No access allowed from Bahrain (BH-IP0004). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'151.248.96.0/20','No access allowed from Bahrain (BH-IP0005). ');
$ax += cidrblock($address,'155.254.215.0/24','No access allowed from Bahrain (BH-IP0006). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'176.241.178.0/24','No access allowed from Bahrain (BH-IP0007). ');
$ax += cidrblock($address,'178.132.32.0/20','No access allowed from Bahrain (BH-IP0008). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'185.3.120.0/23','No access allowed from Bahrain (BH-IP0009). ');
$ax += cidrblock($address,'185.3.122.0/24','No access allowed from Bahrain (BH-IP0010). ');
$ax += cidrblock($address,'185.7.8.0/22','No access allowed from Bahrain (BH-IP0011). ');
$ax += cidrblock($address,'185.33.176.0/22','No access allowed from Bahrain (BH-IP0012). ');
$ax += cidrblock($address,'185.34.228.0/24','No access allowed from Bahrain (BH-IP0013). ');
$ax += cidrblock($address,'185.34.229.0/25','No access allowed from Bahrain (BH-IP0014). ');
$ax += cidrblock($address,'185.34.229.128/31','No access allowed from Bahrain (BH-IP0015). ');
$ax += cidrblock($address,'185.34.229.131/32','No access allowed from Bahrain (BH-IP0016). ');
$ax += cidrblock($address,'185.34.229.132/30','No access allowed from Bahrain (BH-IP0017). ');
$ax += cidrblock($address,'185.34.229.136/29','No access allowed from Bahrain (BH-IP0018). ');
$ax += cidrblock($address,'185.34.229.144/28','No access allowed from Bahrain (BH-IP0019). ');
$ax += cidrblock($address,'185.34.229.160/27','No access allowed from Bahrain (BH-IP0020). ');
$ax += cidrblock($address,'185.34.229.192/26','No access allowed from Bahrain (BH-IP0021). ');
$ax += cidrblock($address,'185.34.230.0/23','No access allowed from Bahrain (BH-IP0022). ');
$ax += cidrblock($address,'185.36.88.0/22','No access allowed from Bahrain (BH-IP0023). ');
$ax += cidrblock($address,'185.49.160.0/22','No access allowed from Bahrain (BH-IP0024). ');
$ax += cidrblock($address,'185.143.124.0/22','No access allowed from Bahrain (BH-IP0025). ');
$ax += cidrblock($address,'185.156.236.0/22','No access allowed from Bahrain (BH-IP0026). ');
$ax += cidrblock($address,'185.165.176.0/22','No access allowed from Bahrain (BH-IP0027). ');
$ax += cidrblock($address,'185.170.12.0/22','No access allowed from Bahrain (BH-IP0028). ');
$ax += cidrblock($address,'185.236.132.0/22','No access allowed from Bahrain (BH-IP0029). ');
$ax += cidrblock($address,'188.116.192.0/18','No access allowed from Bahrain (BH-IP0030). ');
$ax += cidrblock($address,'188.137.128.0/17','No access allowed from Bahrain (BH-IP0031). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'193.188.12.0/23','No access allowed from Bahrain (BH-IP0032). ');
$ax += cidrblock($address,'193.188.96.0/19','No access allowed from Bahrain (BH-IP0033). ');
$ax += cidrblock($address,'195.82.138.0/23','No access allowed from Bahrain (BH-IP0034). ');
$ax += cidrblock($address,'198.50.97.208/29','No access allowed from Bahrain (BH-IP0035). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'23.247.137.0/24','No access allowed from Bahrain (BH-IP0036). ');
$ax += cidrblock($address,'206.159.148.137/32','No access allowed from Bahrain (BH-IP0037). ');
$ax += cidrblock($address,'209.198.240.0/23','No access allowed from Bahrain (BH-IP0038). ');
$ax += cidrblock($address,'217.17.224.0/19','No access allowed from Bahrain (BH-IP0039). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'37.131.0.0/17','No access allowed from Bahrain (BH-IP0040). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'46.42.64.0/18','No access allowed from Bahrain (BH-IP0041). ');
$ax += cidrblock($address,'46.184.128.0/17','No access allowed from Bahrain (BH-IP0042). ');
$ax += cidrblock($address,'46.235.208.0/21','No access allowed from Bahrain (BH-IP0043). ');
$ax += cidrblock($address,'46.243.150.0/24','No access allowed from Bahrain (BH-IP0044). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.60.21/32','No access allowed from Bahrain (BH-IP0045). ');
$ax += cidrblock($address,'5.62.60.22/31','No access allowed from Bahrain (BH-IP0046). ');
$ax += cidrblock($address,'5.62.62.21/32','No access allowed from Bahrain (BH-IP0047). ');
$ax += cidrblock($address,'5.62.62.22/31','No access allowed from Bahrain (BH-IP0048). ');
$ax += cidrblock($address,'57.88.32.0/20','No access allowed from Bahrain (BH-IP0049). ');
$ax += cidrblock($address,'57.98.96.0/20','No access allowed from Bahrain (BH-IP0050). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.209.0.0/19','No access allowed from Bahrain (BH-IP0051). ');
$ax += cidrblock($address,'64.110.29.0/24','No access allowed from Bahrain (BH-IP0052). ');
$ax += cidrblock($address,'64.110.31.0/24','No access allowed from Bahrain (BH-IP0053). ');
$ax += cidrblock($address,'64.110.37.0/24','No access allowed from Bahrain (BH-IP0054). ');
$ax += cidrblock($address,'64.110.68.0/24','No access allowed from Bahrain (BH-IP0055). ');
$ax += cidrblock($address,'64.110.73.0/24','No access allowed from Bahrain (BH-IP0056). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.69.128.0/17','No access allowed from Bahrain (BH-IP0057). ');
$ax += cidrblock($address,'77.92.160.0/19','No access allowed from Bahrain (BH-IP0058). ');
$ax += cidrblock($address,'78.110.64.0/20','No access allowed from Bahrain (BH-IP0059). ');
$ax += cidrblock($address,'79.171.240.0/21','No access allowed from Bahrain (BH-IP0060). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'80.88.240.0/20','No access allowed from Bahrain (BH-IP0061). ');
$ax += cidrblock($address,'80.95.208.0/20','No access allowed from Bahrain (BH-IP0062). ');
$ax += cidrblock($address,'80.241.144.0/20','No access allowed from Bahrain (BH-IP0063). ');
$ax += cidrblock($address,'81.22.16.0/20','No access allowed from Bahrain (BH-IP0064). ');
$ax += cidrblock($address,'82.194.32.0/19','No access allowed from Bahrain (BH-IP0065). ');
$ax += cidrblock($address,'82.195.187.18/32','No access allowed from Bahrain (BH-IP0066). ');
$ax += cidrblock($address,'83.136.56.0/21','No access allowed from Bahrain (BH-IP0067). ');
$ax += cidrblock($address,'84.255.128.0/18','No access allowed from Bahrain (BH-IP0068). ');
$ax += cidrblock($address,'85.158.128.0/21','No access allowed from Bahrain (BH-IP0069). ');
$ax += cidrblock($address,'87.236.48.0/21','No access allowed from Bahrain (BH-IP0070). ');
$ax += cidrblock($address,'87.236.136.0/21','No access allowed from Bahrain (BH-IP0071). ');
$ax += cidrblock($address,'87.237.192.0/21','No access allowed from Bahrain (BH-IP0072). ');
$ax += cidrblock($address,'87.252.96.0/21','No access allowed from Bahrain (BH-IP0073). ');
$ax += cidrblock($address,'87.252.104.0/23','No access allowed from Bahrain (BH-IP0074). ');
$ax += cidrblock($address,'87.252.108.0/22','No access allowed from Bahrain (BH-IP0075). ');
$ax += cidrblock($address,'87.252.126.0/23','No access allowed from Bahrain (BH-IP0076). ');
$ax += cidrblock($address,'88.201.0.0/17','No access allowed from Bahrain (BH-IP0077). ');
$ax += cidrblock($address,'89.31.192.0/21','No access allowed from Bahrain (BH-IP0078). ');
$ax += cidrblock($address,'89.148.0.0/18','No access allowed from Bahrain (BH-IP0079). ');
}
if(lmatch($address,'9','')) {
$ax += cidrblock($address,'93.95.24.0/21','No access allowed from Bahrain (BH-IP0080). ');
$ax += cidrblock($address,'93.188.192.0/21','No access allowed from Bahrain (BH-IP0081). ');
$ax += cidrblock($address,'94.76.0.0/18','No access allowed from Bahrain (BH-IP0082). ');
$ax += cidrblock($address,'94.79.192.0/18','No access allowed from Bahrain (BH-IP0083). ');
$ax += cidrblock($address,'95.84.64.0/18','No access allowed from Bahrain (BH-IP0084). ');
}
$ax += inmatch($query,'bhtestbh','Test function. (BH). ');
// End of BH list
