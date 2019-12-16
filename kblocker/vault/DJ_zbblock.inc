<?php
// *php 5 fix
global $ax;
// Djibouti Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / DJ-2018.65.634';
$ax += rmatch($hoster,'.dj','No access allowed from Djibouti (DJ-HN0001). ');
if(lmatch($address,'1','')) {
$ax += cidrblock($address,'104.143.25.0/24','No access allowed from Djibouti (DJ-IP0001). ');
$ax += cidrblock($address,'105.16.128.0/21','No access allowed from Djibouti (DJ-IP0002). ');
$ax += cidrblock($address,'105.18.16.0/20','No access allowed from Djibouti (DJ-IP0003). ');
$ax += cidrblock($address,'105.21.128.0/19','No access allowed from Djibouti (DJ-IP0004). ');
$ax += cidrblock($address,'105.28.16.0/20','No access allowed from Djibouti (DJ-IP0005). ');
$ax += cidrblock($address,'154.66.245.0/24','No access allowed from Djibouti (DJ-IP0006). ');
$ax += cidrblock($address,'172.68.128.0/22','No access allowed from Djibouti (DJ-IP0007). ');
$ax += cidrblock($address,'196.201.192.0/22','No access allowed from Djibouti (DJ-IP0008). ');
$ax += cidrblock($address,'196.201.196.0/23','No access allowed from Djibouti (DJ-IP0009). ');
$ax += cidrblock($address,'196.201.199.0/24','No access allowed from Djibouti (DJ-IP0010). ');
$ax += cidrblock($address,'196.201.200.0/21','No access allowed from Djibouti (DJ-IP0011). ');
$ax += cidrblock($address,'196.223.38.0/24','No access allowed from Djibouti (DJ-IP0012). ');
$ax += cidrblock($address,'197.241.0.0/17','No access allowed from Djibouti (DJ-IP0013). ');
$ax += cidrblock($address,'198.50.231.216/29','No access allowed from Djibouti (DJ-IP0014). ');
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'217.78.64.0/20','No access allowed from Djibouti (DJ-IP0015). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'41.189.224.0/20','No access allowed from Djibouti (DJ-IP0016). ');
$ax += cidrblock($address,'41.189.243.0/24','No access allowed from Djibouti (DJ-IP0017). ');
$ax += cidrblock($address,'41.189.247.193/32','No access allowed from Djibouti (DJ-IP0018). ');
$ax += cidrblock($address,'41.189.255.39/32','No access allowed from Djibouti (DJ-IP0019). ');
$ax += cidrblock($address,'46.36.203.21/32','No access allowed from Djibouti (DJ-IP0020). ');
$ax += cidrblock($address,'46.36.203.22/31','No access allowed from Djibouti (DJ-IP0021). ');
$ax += cidrblock($address,'46.36.203.24/31','No access allowed from Djibouti (DJ-IP0022). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.61.96/30','No access allowed from Djibouti (DJ-IP0023). ');
$ax += cidrblock($address,'5.62.63.73/32','No access allowed from Djibouti (DJ-IP0024). ');
$ax += cidrblock($address,'5.62.63.74/31','No access allowed from Djibouti (DJ-IP0025). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'80.78.16.128/30','No access allowed from Djibouti (DJ-IP0026). ');
}
$ax += inmatch($query,'djtestdj','Test function. (DJ). ');
// End of DJ list
