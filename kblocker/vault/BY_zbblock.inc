<?php
// *php 5 fix
global $ax;
// Belarus Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / BY-2018.65.634';
$ax += rmatch($hoster,'.by','No access allowed from Belarus (BY-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.128.130.0/24','No access allowed from Belarus (BY-IP0001). ');
$ax += cidrblock($address,'104.167.229.0/24','No access allowed from Belarus (BY-IP0002). ');
$ax += cidrblock($address,'109.126.128.0/18','No access allowed from Belarus (BY-IP0003). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.65.0.0/18','No access allowed from Belarus (BY-IP0004). ');
$ax += cidrblock($address,'128.140.240.0/20','No access allowed from Belarus (BY-IP0005). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'134.17.0.0/16','No access allowed from Belarus (BY-IP0006). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'141.8.147.168/29','No access allowed from Belarus (BY-IP0007). ');
$ax += cidrblock($address,'146.120.13.0/24','No access allowed from Belarus (BY-IP0008). ');
$ax += cidrblock($address,'146.120.14.0/23','No access allowed from Belarus (BY-IP0009). ');
$ax += cidrblock($address,'146.120.128.0/20','No access allowed from Belarus (BY-IP0010). ');
$ax += cidrblock($address,'146.185.200.0/25','No access allowed from Belarus (BY-IP0011). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'151.249.128.0/17','No access allowed from Belarus (BY-IP0012). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'164.177.192.0/18','No access allowed from Belarus (BY-IP0013). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'176.60.0.0/16','No access allowed from Belarus (BY-IP0014). ');
$ax += cidrblock($address,'176.118.152.0/21','No access allowed from Belarus (BY-IP0015). ');
$ax += cidrblock($address,'178.21.62.2/32','No access allowed from Belarus (BY-IP0016). ');
$ax += cidrblock($address,'178.120.0.0/13','No access allowed from Belarus (BY-IP0017). ');
$ax += cidrblock($address,'178.154.0.0/17','No access allowed from Belarus (BY-IP0018). ');
$ax += cidrblock($address,'178.159.240.0/21','No access allowed from Belarus (BY-IP0019). ');
$ax += cidrblock($address,'178.163.128.0/17','No access allowed from Belarus (BY-IP0020). ');
$ax += cidrblock($address,'178.168.128.0/17','No access allowed from Belarus (BY-IP0021). ');
$ax += cidrblock($address,'178.171.58.0/23','No access allowed from Belarus (BY-IP0022). ');
$ax += cidrblock($address,'178.172.128.0/17','No access allowed from Belarus (BY-IP0023). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'181.215.134.16/28','No access allowed from Belarus (BY-IP0024). ');
$ax += cidrblock($address,'185.6.24.0/22','No access allowed from Belarus (BY-IP0025). ');
$ax += cidrblock($address,'185.11.76.0/22','No access allowed from Belarus (BY-IP0026). ');
$ax += cidrblock($address,'185.15.156.0/22','No access allowed from Belarus (BY-IP0027). ');
$ax += cidrblock($address,'185.20.112.0/22','No access allowed from Belarus (BY-IP0028). ');
$ax += cidrblock($address,'185.24.100.0/24','No access allowed from Belarus (BY-IP0029). ');
$ax += cidrblock($address,'185.32.224.0/22','No access allowed from Belarus (BY-IP0030). ');
$ax += cidrblock($address,'185.47.152.0/23','No access allowed from Belarus (BY-IP0031). ');
$ax += cidrblock($address,'185.53.72.0/22','No access allowed from Belarus (BY-IP0032). ');
$ax += cidrblock($address,'185.61.104.0/22','No access allowed from Belarus (BY-IP0033). ');
$ax += cidrblock($address,'185.66.68.0/22','No access allowed from Belarus (BY-IP0034). ');
$ax += cidrblock($address,'185.70.12.0/22','No access allowed from Belarus (BY-IP0035). ');
$ax += cidrblock($address,'185.79.16.0/22','No access allowed from Belarus (BY-IP0036). ');
$ax += cidrblock($address,'185.99.135.0/26','No access allowed from Belarus (BY-IP0037). ');
$ax += cidrblock($address,'185.99.135.64/27','No access allowed from Belarus (BY-IP0038). ');
$ax += cidrblock($address,'185.99.135.96/30','No access allowed from Belarus (BY-IP0039). ');
$ax += cidrblock($address,'185.99.135.101/32','No access allowed from Belarus (BY-IP0040). ');
$ax += cidrblock($address,'185.99.135.102/31','No access allowed from Belarus (BY-IP0041). ');
$ax += cidrblock($address,'185.99.135.104/29','No access allowed from Belarus (BY-IP0042). ');
$ax += cidrblock($address,'185.99.135.112/28','No access allowed from Belarus (BY-IP0043). ');
$ax += cidrblock($address,'185.99.135.128/25','No access allowed from Belarus (BY-IP0044). ');
$ax += cidrblock($address,'185.123.184.0/22','No access allowed from Belarus (BY-IP0045). ');
$ax += cidrblock($address,'185.128.200.0/22','No access allowed from Belarus (BY-IP0046). ');
$ax += cidrblock($address,'185.135.11.0/25','No access allowed from Belarus (BY-IP0047). ');
$ax += cidrblock($address,'185.137.116.0/22','No access allowed from Belarus (BY-IP0048). ');
$ax += cidrblock($address,'185.152.136.0/22','No access allowed from Belarus (BY-IP0049). ');
$ax += cidrblock($address,'185.158.216.0/22','No access allowed from Belarus (BY-IP0050). ');
$ax += cidrblock($address,'185.179.80.0/22','No access allowed from Belarus (BY-IP0051). ');
$ax += cidrblock($address,'185.183.120.0/22','No access allowed from Belarus (BY-IP0052). ');
$ax += cidrblock($address,'185.186.208.0/22','No access allowed from Belarus (BY-IP0053). ');
$ax += cidrblock($address,'185.203.152.0/22','No access allowed from Belarus (BY-IP0054). ');
$ax += cidrblock($address,'185.204.116.0/22','No access allowed from Belarus (BY-IP0055). ');
$ax += cidrblock($address,'185.227.96.0/22','No access allowed from Belarus (BY-IP0056). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'191.101.67.128/25','No access allowed from Belarus (BY-IP0057). ');
$ax += cidrblock($address,'193.17.173.0/24','No access allowed from Belarus (BY-IP0058). ');
$ax += cidrblock($address,'193.26.18.0/24','No access allowed from Belarus (BY-IP0059). ');
$ax += cidrblock($address,'193.58.255.0/24','No access allowed from Belarus (BY-IP0060). ');
$ax += cidrblock($address,'193.105.82.0/24','No access allowed from Belarus (BY-IP0061). ');
$ax += cidrblock($address,'193.151.40.0/22','No access allowed from Belarus (BY-IP0062). ');
$ax += cidrblock($address,'193.232.92.0/24','No access allowed from Belarus (BY-IP0063). ');
$ax += cidrblock($address,'194.62.64.0/24','No access allowed from Belarus (BY-IP0064). ');
$ax += cidrblock($address,'194.158.192.0/19','No access allowed from Belarus (BY-IP0065). ');
$ax += cidrblock($address,'195.50.0.0/19','No access allowed from Belarus (BY-IP0066). ');
$ax += cidrblock($address,'195.137.160.0/24','No access allowed from Belarus (BY-IP0067). ');
$ax += cidrblock($address,'195.137.180.0/24','No access allowed from Belarus (BY-IP0068). ');
$ax += cidrblock($address,'195.222.64.0/19','No access allowed from Belarus (BY-IP0069). ');
$ax += cidrblock($address,'198.27.106.176/30','No access allowed from Belarus (BY-IP0070). ');
$ax += cidrblock($address,'198.50.105.232/29','No access allowed from Belarus (BY-IP0071). ');
$ax += cidrblock($address,'198.50.110.0/29','No access allowed from Belarus (BY-IP0072). ');
$ax += cidrblock($address,'198.50.221.60/30','No access allowed from Belarus (BY-IP0073). ');
$ax += cidrblock($address,'198.50.224.172/30','No access allowed from Belarus (BY-IP0074). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'206.49.97.0/24','No access allowed from Belarus (BY-IP0075). ');
$ax += cidrblock($address,'212.98.160.0/19','No access allowed from Belarus (BY-IP0076). ');
$ax += cidrblock($address,'213.184.224.0/19','No access allowed from Belarus (BY-IP0077). ');
$ax += cidrblock($address,'217.21.32.0/19','No access allowed from Belarus (BY-IP0078). ');
$ax += cidrblock($address,'217.23.112.0/20','No access allowed from Belarus (BY-IP0079). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.24.88.0/21','No access allowed from Belarus (BY-IP0080). ');
$ax += cidrblock($address,'31.130.200.0/21','No access allowed from Belarus (BY-IP0081). ');
$ax += cidrblock($address,'31.148.198.0/23','No access allowed from Belarus (BY-IP0082). ');
$ax += cidrblock($address,'31.148.248.0/28','No access allowed from Belarus (BY-IP0083). ');
$ax += cidrblock($address,'31.148.248.16/31','No access allowed from Belarus (BY-IP0084). ');
$ax += cidrblock($address,'31.148.248.18/32','No access allowed from Belarus (BY-IP0085). ');
$ax += cidrblock($address,'31.148.248.20/30','No access allowed from Belarus (BY-IP0086). ');
$ax += cidrblock($address,'31.148.248.24/29','No access allowed from Belarus (BY-IP0087). ');
$ax += cidrblock($address,'31.148.248.32/27','No access allowed from Belarus (BY-IP0088). ');
$ax += cidrblock($address,'31.148.248.64/26','No access allowed from Belarus (BY-IP0089). ');
$ax += cidrblock($address,'31.148.248.128/25','No access allowed from Belarus (BY-IP0090). ');
$ax += cidrblock($address,'31.148.249.0/24','No access allowed from Belarus (BY-IP0091). ');
$ax += cidrblock($address,'31.148.250.0/23','No access allowed from Belarus (BY-IP0092). ');
$ax += cidrblock($address,'37.17.0.0/17','No access allowed from Belarus (BY-IP0093). ');
$ax += cidrblock($address,'37.44.64.0/18','No access allowed from Belarus (BY-IP0094). ');
$ax += cidrblock($address,'37.45.0.0/16','No access allowed from Belarus (BY-IP0095). ');
$ax += cidrblock($address,'37.212.0.0/14','No access allowed from Belarus (BY-IP0096). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'45.74.27.128/25','No access allowed from Belarus (BY-IP0097). ');
$ax += cidrblock($address,'46.28.96.0/21','No access allowed from Belarus (BY-IP0098). ');
$ax += cidrblock($address,'46.36.202.26/32','No access allowed from Belarus (BY-IP0099). ');
$ax += cidrblock($address,'46.53.128.0/17','No access allowed from Belarus (BY-IP0100). ');
$ax += cidrblock($address,'46.56.0.0/16','No access allowed from Belarus (BY-IP0101). ');
$ax += cidrblock($address,'46.175.168.0/21','No access allowed from Belarus (BY-IP0102). ');
$ax += cidrblock($address,'46.182.48.0/21','No access allowed from Belarus (BY-IP0103). ');
$ax += cidrblock($address,'46.191.0.0/17','No access allowed from Belarus (BY-IP0104). ');
$ax += cidrblock($address,'46.216.0.0/16','No access allowed from Belarus (BY-IP0105). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.60.29/32','No access allowed from Belarus (BY-IP0106). ');
$ax += cidrblock($address,'5.62.60.30/31','No access allowed from Belarus (BY-IP0107). ');
$ax += cidrblock($address,'5.62.62.29/32','No access allowed from Belarus (BY-IP0108). ');
$ax += cidrblock($address,'5.62.62.30/31','No access allowed from Belarus (BY-IP0109). ');
$ax += cidrblock($address,'5.100.192.0/19','No access allowed from Belarus (BY-IP0110). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.67.128.0/17','No access allowed from Belarus (BY-IP0111). ');
$ax += cidrblock($address,'77.74.32.0/21','No access allowed from Belarus (BY-IP0112). ');
$ax += cidrblock($address,'79.98.48.0/21','No access allowed from Belarus (BY-IP0113). ');
$ax += cidrblock($address,'79.110.20.0/24','No access allowed from Belarus (BY-IP0114). ');
$ax += cidrblock($address,'79.170.104.0/21','No access allowed from Belarus (BY-IP0115). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'80.94.160.0/20','No access allowed from Belarus (BY-IP0116). ');
$ax += cidrblock($address,'80.94.224.0/20','No access allowed from Belarus (BY-IP0117). ');
$ax += cidrblock($address,'80.249.80.0/20','No access allowed from Belarus (BY-IP0118). ');
$ax += cidrblock($address,'81.25.32.0/20','No access allowed from Belarus (BY-IP0119). ');
$ax += cidrblock($address,'81.30.80.0/20','No access allowed from Belarus (BY-IP0120). ');
$ax += cidrblock($address,'82.209.192.0/18','No access allowed from Belarus (BY-IP0121). ');
$ax += cidrblock($address,'84.201.224.0/20','No access allowed from Belarus (BY-IP0122). ');
$ax += cidrblock($address,'85.203.22.64/28','No access allowed from Belarus (BY-IP0123). ');
$ax += cidrblock($address,'86.57.128.0/17','No access allowed from Belarus (BY-IP0124). ');
$ax += cidrblock($address,'87.252.224.0/19','No access allowed from Belarus (BY-IP0125). ');
}
if(lmatch($address,'9','')) {
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.149.128.0/18','No access allowed from Belarus (BY-IP0126). ');
$ax += cidrblock($address,'91.187.0.0/19','No access allowed from Belarus (BY-IP0127). ');
$ax += cidrblock($address,'91.204.13.0/24','No access allowed from Belarus (BY-IP0128). ');
$ax += cidrblock($address,'91.215.176.0/22','No access allowed from Belarus (BY-IP0129). ');
$ax += cidrblock($address,'91.220.250.0/24','No access allowed from Belarus (BY-IP0130). ');
$ax += cidrblock($address,'91.229.94.0/24','No access allowed from Belarus (BY-IP0131). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.38.64.0/20','No access allowed from Belarus (BY-IP0132). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.84.0.0/15','No access allowed from Belarus (BY-IP0133). ');
$ax += cidrblock($address,'93.125.0.0/17','No access allowed from Belarus (BY-IP0134). ');
$ax += cidrblock($address,'93.170.28.0/22','No access allowed from Belarus (BY-IP0135). ');
$ax += cidrblock($address,'93.170.34.0/24','No access allowed from Belarus (BY-IP0136). ');
$ax += cidrblock($address,'93.170.143.0/24','No access allowed from Belarus (BY-IP0137). ');
$ax += cidrblock($address,'93.170.184.0/23','No access allowed from Belarus (BY-IP0138). ');
$ax += cidrblock($address,'93.170.252.0/24','No access allowed from Belarus (BY-IP0139). ');
$ax += cidrblock($address,'93.171.6.0/24','No access allowed from Belarus (BY-IP0140). ');
$ax += cidrblock($address,'93.171.48.0/20','No access allowed from Belarus (BY-IP0141). ');
$ax += cidrblock($address,'93.171.160.0/23','No access allowed from Belarus (BY-IP0142). ');
$ax += cidrblock($address,'93.179.89.0/25','No access allowed from Belarus (BY-IP0143). ');
$ax += cidrblock($address,'93.189.224.0/21','No access allowed from Belarus (BY-IP0144). ');
$ax += cidrblock($address,'93.191.96.0/21','No access allowed from Belarus (BY-IP0145). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.46.16.0/20','No access allowed from Belarus (BY-IP0146). ');
$ax += cidrblock($address,'95.46.208.0/20','No access allowed from Belarus (BY-IP0147). ');
$ax += cidrblock($address,'95.46.240.0/22','No access allowed from Belarus (BY-IP0148). ');
$ax += cidrblock($address,'95.47.60.0/23','No access allowed from Belarus (BY-IP0149). ');
$ax += cidrblock($address,'95.47.99.0/24','No access allowed from Belarus (BY-IP0150). ');
$ax += cidrblock($address,'95.47.224.0/21','No access allowed from Belarus (BY-IP0151). ');
$ax += cidrblock($address,'95.128.64.0/21','No access allowed from Belarus (BY-IP0152). ');
$ax += cidrblock($address,'95.130.80.0/21','No access allowed from Belarus (BY-IP0153). ');
}
}
$ax += inmatch($query,'bytestby','Test function. (BY). ');
// End of BY list
