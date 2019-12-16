<?php
// *php 5 fix
global $ax;
// North Korea Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / KP-2018.65.634';
$ax += rmatch($hoster,'.kp','No access allowed from North Korea (KP-HN0001). ');
if(lmatch($address,'1','')) {
$ax += cidrblock($address,'103.216.102.0/24','No access allowed from North Korea (KP-IP0001). ');
$ax += cidrblock($address,'175.45.176.0/22','No access allowed from North Korea (KP-IP0002). ');
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'210.52.109.0/24','No access allowed from North Korea (KP-IP0003). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.56.161/32','No access allowed from North Korea (KP-IP0004). ');
$ax += cidrblock($address,'5.62.56.162/31','No access allowed from North Korea (KP-IP0005). ');
$ax += cidrblock($address,'5.62.61.65/32','No access allowed from North Korea (KP-IP0006). ');
$ax += cidrblock($address,'5.62.61.66/31','No access allowed from North Korea (KP-IP0007). ');
}
$ax += inmatch($query,'kptestkp','Test function. (KP). ');
// End of KP list
