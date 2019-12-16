<?php
// *php 5 fix
global $ax;
// Armenia Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / AM-2018.65.634';
$ax += rmatch($hoster,'.am','No access allowed from Armenia (AM-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.243.249.0/24','No access allowed from Armenia (AM-IP0001). ');
$ax += cidrblock($address,'109.68.120.0/21','No access allowed from Armenia (AM-IP0002). ');
$ax += cidrblock($address,'109.75.32.0/22','No access allowed from Armenia (AM-IP0003). ');
$ax += cidrblock($address,'109.75.37.0/24','No access allowed from Armenia (AM-IP0004). ');
$ax += cidrblock($address,'109.75.38.0/23','No access allowed from Armenia (AM-IP0005). ');
$ax += cidrblock($address,'109.75.40.0/21','No access allowed from Armenia (AM-IP0006). ');
$ax += cidrblock($address,'109.105.159.0/24','No access allowed from Armenia (AM-IP0007). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'130.193.120.0/21','No access allowed from Armenia (AM-IP0008). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'141.101.145.0/24','No access allowed from Armenia (AM-IP0009). ');
$ax += cidrblock($address,'141.136.64.0/19','No access allowed from Armenia (AM-IP0010). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'158.46.182.0/23','No access allowed from Armenia (AM-IP0011). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'172.68.124.0/22','No access allowed from Armenia (AM-IP0012). ');
$ax += cidrblock($address,'172.94.35.0/24','No access allowed from Armenia (AM-IP0013). ');
$ax += cidrblock($address,'172.94.38.0/24','No access allowed from Armenia (AM-IP0014). ');
$ax += cidrblock($address,'176.32.192.0/21','No access allowed from Armenia (AM-IP0015). ');
$ax += cidrblock($address,'176.124.96.0/21','No access allowed from Armenia (AM-IP0016). ');
$ax += cidrblock($address,'178.72.128.0/19','No access allowed from Armenia (AM-IP0017). ');
$ax += cidrblock($address,'178.72.168.0/21','No access allowed from Armenia (AM-IP0018). ');
$ax += cidrblock($address,'178.72.176.0/20','No access allowed from Armenia (AM-IP0019). ');
$ax += cidrblock($address,'178.78.128.0/18','No access allowed from Armenia (AM-IP0020). ');
$ax += cidrblock($address,'178.160.128.0/17','No access allowed from Armenia (AM-IP0021). ');
$ax += cidrblock($address,'178.213.128.0/21','No access allowed from Armenia (AM-IP0022). ');
$ax += cidrblock($address,'178.219.48.0/20','No access allowed from Armenia (AM-IP0023). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'181.215.133.80/28','No access allowed from Armenia (AM-IP0024). ');
$ax += cidrblock($address,'185.3.188.0/22','No access allowed from Armenia (AM-IP0025). ');
$ax += cidrblock($address,'185.8.0.0/22','No access allowed from Armenia (AM-IP0026). ');
$ax += cidrblock($address,'185.13.196.0/22','No access allowed from Armenia (AM-IP0027). ');
$ax += cidrblock($address,'185.18.72.0/22','No access allowed from Armenia (AM-IP0028). ');
$ax += cidrblock($address,'185.21.252.0/22','No access allowed from Armenia (AM-IP0029). ');
$ax += cidrblock($address,'185.36.36.0/22','No access allowed from Armenia (AM-IP0030). ');
$ax += cidrblock($address,'185.44.228.0/22','No access allowed from Armenia (AM-IP0031). ');
$ax += cidrblock($address,'185.48.240.0/22','No access allowed from Armenia (AM-IP0032). ');
$ax += cidrblock($address,'185.57.68.0/22','No access allowed from Armenia (AM-IP0033). ');
$ax += cidrblock($address,'185.59.68.0/22','No access allowed from Armenia (AM-IP0034). ');
$ax += cidrblock($address,'185.77.192.0/22','No access allowed from Armenia (AM-IP0035). ');
$ax += cidrblock($address,'185.78.144.0/22','No access allowed from Armenia (AM-IP0036). ');
$ax += cidrblock($address,'185.79.0.0/22','No access allowed from Armenia (AM-IP0037). ');
$ax += cidrblock($address,'185.86.192.0/22','No access allowed from Armenia (AM-IP0038). ');
$ax += cidrblock($address,'185.92.84.0/22','No access allowed from Armenia (AM-IP0039). ');
$ax += cidrblock($address,'185.121.236.0/22','No access allowed from Armenia (AM-IP0040). ');
$ax += cidrblock($address,'185.127.64.0/22','No access allowed from Armenia (AM-IP0041). ');
$ax += cidrblock($address,'185.149.140.0/22','No access allowed from Armenia (AM-IP0042). ');
$ax += cidrblock($address,'185.150.164.0/22','No access allowed from Armenia (AM-IP0043). ');
$ax += cidrblock($address,'185.155.233.138/32','No access allowed from Armenia (AM-IP0044). ');
$ax += cidrblock($address,'185.177.104.0/22','No access allowed from Armenia (AM-IP0045). ');
$ax += cidrblock($address,'185.182.120.0/22','No access allowed from Armenia (AM-IP0046). ');
$ax += cidrblock($address,'185.193.12.0/22','No access allowed from Armenia (AM-IP0047). ');
$ax += cidrblock($address,'185.215.52.0/22','No access allowed from Armenia (AM-IP0048). ');
$ax += cidrblock($address,'185.223.124.0/22','No access allowed from Armenia (AM-IP0049). ');
$ax += cidrblock($address,'185.247.0.0/22','No access allowed from Armenia (AM-IP0050). ');
$ax += cidrblock($address,'188.115.192.0/18','No access allowed from Armenia (AM-IP0051). ');
$ax += cidrblock($address,'188.164.152.0/21','No access allowed from Armenia (AM-IP0052). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'193.142.19.0/24','No access allowed from Armenia (AM-IP0053). ');
$ax += cidrblock($address,'194.247.50.0/24','No access allowed from Armenia (AM-IP0054). ');
$ax += cidrblock($address,'195.8.50.0/23','No access allowed from Armenia (AM-IP0055). ');
$ax += cidrblock($address,'195.43.74.0/23','No access allowed from Armenia (AM-IP0056). ');
$ax += cidrblock($address,'195.60.80.128/27','No access allowed from Armenia (AM-IP0057). ');
$ax += cidrblock($address,'195.88.66.0/23','No access allowed from Armenia (AM-IP0058). ');
$ax += cidrblock($address,'195.88.254.0/23','No access allowed from Armenia (AM-IP0059). ');
$ax += cidrblock($address,'195.128.166.0/23','No access allowed from Armenia (AM-IP0060). ');
$ax += cidrblock($address,'195.191.100.0/23','No access allowed from Armenia (AM-IP0061). ');
$ax += cidrblock($address,'195.191.154.0/23','No access allowed from Armenia (AM-IP0062). ');
$ax += cidrblock($address,'195.191.186.0/23','No access allowed from Armenia (AM-IP0063). ');
$ax += cidrblock($address,'195.250.64.0/19','No access allowed from Armenia (AM-IP0064). ');
$ax += cidrblock($address,'198.50.101.0/29','No access allowed from Armenia (AM-IP0065). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'212.34.224.0/19','No access allowed from Armenia (AM-IP0066). ');
$ax += cidrblock($address,'212.42.192.0/19','No access allowed from Armenia (AM-IP0067). ');
$ax += cidrblock($address,'212.73.64.0/19','No access allowed from Armenia (AM-IP0068). ');
$ax += cidrblock($address,'213.208.38.0/24','No access allowed from Armenia (AM-IP0069). ');
$ax += cidrblock($address,'217.76.0.0/20','No access allowed from Armenia (AM-IP0070). ');
$ax += cidrblock($address,'217.113.0.0/19','No access allowed from Armenia (AM-IP0071). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.7.160.0/21','No access allowed from Armenia (AM-IP0072). ');
$ax += cidrblock($address,'31.47.192.0/21','No access allowed from Armenia (AM-IP0073). ');
$ax += cidrblock($address,'31.132.76.0/24','No access allowed from Armenia (AM-IP0074). ');
$ax += cidrblock($address,'37.26.168.0/21','No access allowed from Armenia (AM-IP0075). ');
$ax += cidrblock($address,'37.157.208.0/20','No access allowed from Armenia (AM-IP0076). ');
$ax += cidrblock($address,'37.186.64.0/18','No access allowed from Armenia (AM-IP0077). ');
$ax += cidrblock($address,'37.230.189.0/24','No access allowed from Armenia (AM-IP0078). ');
$ax += cidrblock($address,'37.252.64.0/19','No access allowed from Armenia (AM-IP0079). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'45.59.129.0/24','No access allowed from Armenia (AM-IP0080). ');
$ax += cidrblock($address,'46.19.96.0/21','No access allowed from Armenia (AM-IP0081). ');
$ax += cidrblock($address,'46.70.0.0/15','No access allowed from Armenia (AM-IP0082). ');
$ax += cidrblock($address,'46.130.0.0/16','No access allowed from Armenia (AM-IP0083). ');
$ax += cidrblock($address,'46.162.192.0/18','No access allowed from Armenia (AM-IP0084). ');
$ax += cidrblock($address,'46.182.168.0/21','No access allowed from Armenia (AM-IP0085). ');
$ax += cidrblock($address,'46.241.128.0/20','No access allowed from Armenia (AM-IP0086). ');
$ax += cidrblock($address,'46.241.160.0/19','No access allowed from Armenia (AM-IP0087). ');
$ax += cidrblock($address,'46.241.192.0/18','No access allowed from Armenia (AM-IP0088). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.60.13/32','No access allowed from Armenia (AM-IP0089). ');
$ax += cidrblock($address,'5.62.60.14/31','No access allowed from Armenia (AM-IP0090). ');
$ax += cidrblock($address,'5.62.62.13/32','No access allowed from Armenia (AM-IP0091). ');
$ax += cidrblock($address,'5.62.62.14/31','No access allowed from Armenia (AM-IP0092). ');
$ax += cidrblock($address,'5.63.160.0/21','No access allowed from Armenia (AM-IP0093). ');
$ax += cidrblock($address,'5.77.128.0/17','No access allowed from Armenia (AM-IP0094). ');
$ax += cidrblock($address,'5.101.222.0/25','No access allowed from Armenia (AM-IP0095). ');
$ax += cidrblock($address,'5.134.80.0/21','No access allowed from Armenia (AM-IP0096). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.89.0.0/19','No access allowed from Armenia (AM-IP0097). ');
$ax += cidrblock($address,'69.28.56.0/32','No access allowed from Armenia (AM-IP0098). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.95.184.0/21','No access allowed from Armenia (AM-IP0099). ');
$ax += cidrblock($address,'78.109.64.0/20','No access allowed from Armenia (AM-IP0100). ');
$ax += cidrblock($address,'79.170.200.0/21','No access allowed from Armenia (AM-IP0101). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'80.86.224.0/20','No access allowed from Armenia (AM-IP0102). ');
$ax += cidrblock($address,'81.16.0.0/20','No access allowed from Armenia (AM-IP0103). ');
$ax += cidrblock($address,'81.89.208.0/20','No access allowed from Armenia (AM-IP0104). ');
$ax += cidrblock($address,'82.199.192.0/19','No access allowed from Armenia (AM-IP0105). ');
$ax += cidrblock($address,'83.139.0.0/18','No access allowed from Armenia (AM-IP0106). ');
$ax += cidrblock($address,'85.203.22.48/28','No access allowed from Armenia (AM-IP0107). ');
$ax += cidrblock($address,'87.241.128.0/18','No access allowed from Armenia (AM-IP0108). ');
$ax += cidrblock($address,'89.249.192.0/20','No access allowed from Armenia (AM-IP0109). ');
}
if(lmatch($address,'9','')) {
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.103.24.0/21','No access allowed from Armenia (AM-IP0110). ');
$ax += cidrblock($address,'91.103.56.0/21','No access allowed from Armenia (AM-IP0111). ');
$ax += cidrblock($address,'91.196.36.0/22','No access allowed from Armenia (AM-IP0112). ');
$ax += cidrblock($address,'91.199.38.0/24','No access allowed from Armenia (AM-IP0113). ');
$ax += cidrblock($address,'91.199.226.0/24','No access allowed from Armenia (AM-IP0114). ');
$ax += cidrblock($address,'91.204.188.0/22','No access allowed from Armenia (AM-IP0115). ');
$ax += cidrblock($address,'91.205.132.0/22','No access allowed from Armenia (AM-IP0116). ');
$ax += cidrblock($address,'91.205.136.0/21','No access allowed from Armenia (AM-IP0117). ');
$ax += cidrblock($address,'91.208.76.0/24','No access allowed from Armenia (AM-IP0118). ');
$ax += cidrblock($address,'91.209.38.0/24','No access allowed from Armenia (AM-IP0119). ');
$ax += cidrblock($address,'91.210.40.0/22','No access allowed from Armenia (AM-IP0120). ');
$ax += cidrblock($address,'91.212.71.0/24','No access allowed from Armenia (AM-IP0121). ');
$ax += cidrblock($address,'91.217.157.0/24','No access allowed from Armenia (AM-IP0122). ');
$ax += cidrblock($address,'91.218.4.0/22','No access allowed from Armenia (AM-IP0123). ');
$ax += cidrblock($address,'91.218.180.0/22','No access allowed from Armenia (AM-IP0124). ');
$ax += cidrblock($address,'91.220.124.0/24','No access allowed from Armenia (AM-IP0125). ');
$ax += cidrblock($address,'91.221.228.0/23','No access allowed from Armenia (AM-IP0126). ');
$ax += cidrblock($address,'91.226.235.0/24','No access allowed from Armenia (AM-IP0127). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.43.136.0/21','No access allowed from Armenia (AM-IP0128). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.94.216.0/21','No access allowed from Armenia (AM-IP0129). ');
$ax += cidrblock($address,'93.170.9.0/24','No access allowed from Armenia (AM-IP0130). ');
$ax += cidrblock($address,'93.185.32.0/20','No access allowed from Armenia (AM-IP0131). ');
$ax += cidrblock($address,'93.187.160.0/21','No access allowed from Armenia (AM-IP0132). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.228.16.0/20','No access allowed from Armenia (AM-IP0133). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.47.184.0/23','No access allowed from Armenia (AM-IP0134). ');
$ax += cidrblock($address,'95.140.192.0/20','No access allowed from Armenia (AM-IP0135). ');
}
}
$ax += inmatch($query,'amtestam','Test function. (AM). ');
// End of AM list
