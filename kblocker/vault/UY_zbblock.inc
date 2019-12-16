<?php
// *php 5 fix
global $ax;
// Urugay Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / UY-2018.65.634';
$ax += rmatch($hoster,'.uy','No access allowed from Urugay (UY-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.143.214.0/24','No access allowed from Urugay (UY-IP0001). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.90.119.0/24','No access allowed from Urugay (UY-IP0002). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'131.0.212.0/22','No access allowed from Urugay (UY-IP0003). ');
$ax += cidrblock($address,'138.59.12.0/22','No access allowed from Urugay (UY-IP0004). ');
$ax += cidrblock($address,'138.94.219.136/29','No access allowed from Urugay (UY-IP0005). ');
$ax += cidrblock($address,'138.99.44.0/22','No access allowed from Urugay (UY-IP0006). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'143.0.238.216/29','No access allowed from Urugay (UY-IP0007). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'152.156.0.0/16','No access allowed from Urugay (UY-IP0008). ');
$ax += cidrblock($address,'159.180.12.0/24','No access allowed from Urugay (UY-IP0009). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'161.0.26.176/29','No access allowed from Urugay (UY-IP0010). ');
$ax += cidrblock($address,'161.0.120.0/21','No access allowed from Urugay (UY-IP0011). ');
$ax += cidrblock($address,'164.73.0.0/16','No access allowed from Urugay (UY-IP0012). ');
$ax += cidrblock($address,'167.56.0.0/13','No access allowed from Urugay (UY-IP0013). ');
$ax += cidrblock($address,'167.108.0.0/16','No access allowed from Urugay (UY-IP0014). ');
$ax += cidrblock($address,'167.116.0.0/16','No access allowed from Urugay (UY-IP0015). ');
$ax += cidrblock($address,'168.90.110.208/29','No access allowed from Urugay (UY-IP0016). ');
$ax += cidrblock($address,'168.121.184.0/22','No access allowed from Urugay (UY-IP0017). ');
$ax += cidrblock($address,'168.196.238.0/28','No access allowed from Urugay (UY-IP0018). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'170.51.63.0/24','No access allowed from Urugay (UY-IP0019). ');
$ax += cidrblock($address,'170.51.64.0/20','No access allowed from Urugay (UY-IP0020). ');
$ax += cidrblock($address,'170.51.120.0/21','No access allowed from Urugay (UY-IP0021). ');
$ax += cidrblock($address,'170.51.192.0/21','No access allowed from Urugay (UY-IP0022). ');
$ax += cidrblock($address,'170.247.168.0/22','No access allowed from Urugay (UY-IP0023). ');
$ax += cidrblock($address,'173.45.166.48/29','No access allowed from Urugay (UY-IP0024). ');
$ax += cidrblock($address,'178.170.140.0/24','No access allowed from Urugay (UY-IP0025). ');
$ax += cidrblock($address,'179.0.156.0/22','No access allowed from Urugay (UY-IP0026). ');
$ax += cidrblock($address,'179.24.0.0/13','No access allowed from Urugay (UY-IP0027). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'181.215.141.96/28','No access allowed from Urugay (UY-IP0028). ');
$ax += cidrblock($address,'185.125.225.28/32','No access allowed from Urugay (UY-IP0029). ');
$ax += cidrblock($address,'186.8.0.0/16','No access allowed from Urugay (UY-IP0030). ');
$ax += cidrblock($address,'186.48.0.0/13','No access allowed from Urugay (UY-IP0031). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'190.0.128.0/19','No access allowed from Urugay (UY-IP0032). ');
$ax += cidrblock($address,'190.64.0.0/16','No access allowed from Urugay (UY-IP0033). ');
$ax += cidrblock($address,'190.99.96.0/20','No access allowed from Urugay (UY-IP0034). ');
$ax += cidrblock($address,'190.108.0.0/19','No access allowed from Urugay (UY-IP0035). ');
$ax += cidrblock($address,'190.112.52.0/22','No access allowed from Urugay (UY-IP0036). ');
$ax += cidrblock($address,'190.112.202.0/24','No access allowed from Urugay (UY-IP0037). ');
$ax += cidrblock($address,'190.114.3.128/25','No access allowed from Urugay (UY-IP0038). ');
$ax += cidrblock($address,'190.132.0.0/14','No access allowed from Urugay (UY-IP0039). ');
$ax += cidrblock($address,'191.101.201.0/24','No access allowed from Urugay (UY-IP0040). ');
$ax += cidrblock($address,'191.102.130.208/28','No access allowed from Urugay (UY-IP0041). ');
$ax += cidrblock($address,'191.102.131.96/29','No access allowed from Urugay (UY-IP0042). ');
$ax += cidrblock($address,'192.146.237.0/24','No access allowed from Urugay (UY-IP0043). ');
$ax += cidrblock($address,'198.50.104.232/29','No access allowed from Urugay (UY-IP0044). ');
$ax += cidrblock($address,'198.50.116.152/29','No access allowed from Urugay (UY-IP0045). ');
$ax += cidrblock($address,'198.50.118.80/29','No access allowed from Urugay (UY-IP0046). ');
$ax += cidrblock($address,'198.50.121.208/29','No access allowed from Urugay (UY-IP0047). ');
$ax += cidrblock($address,'198.50.211.208/29','No access allowed from Urugay (UY-IP0048). ');
$ax += cidrblock($address,'198.101.141.152/29','No access allowed from Urugay (UY-IP0049). ');
}
}
if(lmatch($address,'2','')) {
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'200.0.68.0/23','No access allowed from Urugay (UY-IP0050). ');
$ax += cidrblock($address,'200.0.86.0/23','No access allowed from Urugay (UY-IP0051). ');
$ax += cidrblock($address,'200.0.88.0/24','No access allowed from Urugay (UY-IP0052). ');
$ax += cidrblock($address,'200.0.204.0/22','No access allowed from Urugay (UY-IP0053). ');
$ax += cidrblock($address,'200.2.32.0/19','No access allowed from Urugay (UY-IP0054). ');
$ax += cidrblock($address,'200.3.12.0/22','No access allowed from Urugay (UY-IP0055). ');
$ax += cidrblock($address,'200.7.84.0/22','No access allowed from Urugay (UY-IP0056). ');
$ax += cidrblock($address,'200.10.60.0/22','No access allowed from Urugay (UY-IP0057). ');
$ax += cidrblock($address,'200.12.155.0/24','No access allowed from Urugay (UY-IP0058). ');
$ax += cidrblock($address,'200.12.156.0/24','No access allowed from Urugay (UY-IP0059). ');
$ax += cidrblock($address,'200.35.153.0/24','No access allowed from Urugay (UY-IP0060). ');
$ax += cidrblock($address,'200.40.0.0/16','No access allowed from Urugay (UY-IP0061). ');
$ax += cidrblock($address,'200.58.128.0/19','No access allowed from Urugay (UY-IP0062). ');
$ax += cidrblock($address,'200.61.144.0/24','No access allowed from Urugay (UY-IP0063). ');
$ax += cidrblock($address,'200.71.0.0/19','No access allowed from Urugay (UY-IP0064). ');
$ax += cidrblock($address,'200.80.48.0/23','No access allowed from Urugay (UY-IP0065). ');
$ax += cidrblock($address,'200.80.50.0/24','No access allowed from Urugay (UY-IP0066). ');
$ax += cidrblock($address,'200.93.240.0/21','No access allowed from Urugay (UY-IP0067). ');
$ax += cidrblock($address,'200.108.192.0/18','No access allowed from Urugay (UY-IP0068). ');
$ax += cidrblock($address,'200.115.64.0/20','No access allowed from Urugay (UY-IP0069). ');
$ax += cidrblock($address,'200.124.192.0/19','No access allowed from Urugay (UY-IP0070). ');
$ax += cidrblock($address,'200.125.0.0/18','No access allowed from Urugay (UY-IP0071). ');
$ax += cidrblock($address,'201.217.128.0/18','No access allowed from Urugay (UY-IP0072). ');
$ax += cidrblock($address,'201.219.224.0/21','No access allowed from Urugay (UY-IP0073). ');
$ax += cidrblock($address,'201.219.252.0/22','No access allowed from Urugay (UY-IP0074). ');
$ax += cidrblock($address,'201.221.0.0/18','No access allowed from Urugay (UY-IP0075). ');
}
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'45.6.248.0/21','No access allowed from Urugay (UY-IP0076). ');
$ax += cidrblock($address,'45.228.64.0/22','No access allowed from Urugay (UY-IP0077). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.56.245/32','No access allowed from Urugay (UY-IP0078). ');
$ax += cidrblock($address,'5.62.56.246/31','No access allowed from Urugay (UY-IP0079). ');
$ax += cidrblock($address,'5.62.58.225/32','No access allowed from Urugay (UY-IP0080). ');
$ax += cidrblock($address,'5.62.58.226/31','No access allowed from Urugay (UY-IP0081). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'64.57.132.0/24','No access allowed from Urugay (UY-IP0082). ');
}
$ax += inmatch($query,'uytestuy','Test function. (UY). ');
// End of UY list
