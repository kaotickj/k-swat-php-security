<?php
// *php 5 fix
global $ax;
// Cambodia Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / KH-2018.65.634';
$ax += rmatch($hoster,'.kh','No access allowed from Cambodia (KH-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'103.5.124.0/22','No access allowed from Cambodia (KH-IP0001). ');
$ax += cidrblock($address,'103.5.230.0/23','No access allowed from Cambodia (KH-IP0002). ');
$ax += cidrblock($address,'103.6.8.0/22','No access allowed from Cambodia (KH-IP0003). ');
$ax += cidrblock($address,'103.7.24.0/22','No access allowed from Cambodia (KH-IP0004). ');
$ax += cidrblock($address,'103.7.144.0/24','No access allowed from Cambodia (KH-IP0005). ');
$ax += cidrblock($address,'103.9.188.0/22','No access allowed from Cambodia (KH-IP0006). ');
$ax += cidrblock($address,'103.11.216.0/22','No access allowed from Cambodia (KH-IP0007). ');
$ax += cidrblock($address,'103.12.160.0/22','No access allowed from Cambodia (KH-IP0008). ');
$ax += cidrblock($address,'103.14.248.0/22','No access allowed from Cambodia (KH-IP0009). ');
$ax += cidrblock($address,'103.16.60.0/22','No access allowed from Cambodia (KH-IP0010). ');
$ax += cidrblock($address,'103.17.212.0/22','No access allowed from Cambodia (KH-IP0011). ');
$ax += cidrblock($address,'103.20.80.0/22','No access allowed from Cambodia (KH-IP0012). ');
$ax += cidrblock($address,'103.23.132.0/22','No access allowed from Cambodia (KH-IP0013). ');
$ax += cidrblock($address,'103.23.136.0/22','No access allowed from Cambodia (KH-IP0014). ');
$ax += cidrblock($address,'103.23.213.0/24','No access allowed from Cambodia (KH-IP0015). ');
$ax += cidrblock($address,'103.24.32.0/22','No access allowed from Cambodia (KH-IP0016). ');
$ax += cidrblock($address,'103.28.0.0/22','No access allowed from Cambodia (KH-IP0017). ');
$ax += cidrblock($address,'103.28.242.0/23','No access allowed from Cambodia (KH-IP0018). ');
$ax += cidrblock($address,'103.30.196.0/22','No access allowed from Cambodia (KH-IP0019). ');
$ax += cidrblock($address,'103.31.128.0/22','No access allowed from Cambodia (KH-IP0020). ');
$ax += cidrblock($address,'103.38.112.0/22','No access allowed from Cambodia (KH-IP0021). ');
$ax += cidrblock($address,'103.47.188.0/22','No access allowed from Cambodia (KH-IP0022). ');
$ax += cidrblock($address,'103.49.40.0/22','No access allowed from Cambodia (KH-IP0023). ');
$ax += cidrblock($address,'103.51.124.0/22','No access allowed from Cambodia (KH-IP0024). ');
$ax += cidrblock($address,'103.54.112.0/22','No access allowed from Cambodia (KH-IP0025). ');
$ax += cidrblock($address,'103.56.174.0/24','No access allowed from Cambodia (KH-IP0026). ');
$ax += cidrblock($address,'103.58.224.0/22','No access allowed from Cambodia (KH-IP0027). ');
$ax += cidrblock($address,'103.59.172.0/22','No access allowed from Cambodia (KH-IP0028). ');
$ax += cidrblock($address,'103.61.24.0/22','No access allowed from Cambodia (KH-IP0029). ');
$ax += cidrblock($address,'103.61.92.0/22','No access allowed from Cambodia (KH-IP0030). ');
$ax += cidrblock($address,'103.63.190.0/24','No access allowed from Cambodia (KH-IP0031). ');
$ax += cidrblock($address,'103.66.184.0/22','No access allowed from Cambodia (KH-IP0032). ');
$ax += cidrblock($address,'103.67.208.0/22','No access allowed from Cambodia (KH-IP0033). ');
$ax += cidrblock($address,'103.68.236.0/22','No access allowed from Cambodia (KH-IP0034). ');
$ax += cidrblock($address,'103.69.68.0/22','No access allowed from Cambodia (KH-IP0035). ');
$ax += cidrblock($address,'103.73.164.0/22','No access allowed from Cambodia (KH-IP0036). ');
$ax += cidrblock($address,'103.78.128.0/22','No access allowed from Cambodia (KH-IP0037). ');
$ax += cidrblock($address,'103.88.155.0/24','No access allowed from Cambodia (KH-IP0038). ');
$ax += cidrblock($address,'103.88.162.0/24','No access allowed from Cambodia (KH-IP0039). ');
$ax += cidrblock($address,'103.90.148.0/22','No access allowed from Cambodia (KH-IP0040). ');
$ax += cidrblock($address,'103.95.132.0/23','No access allowed from Cambodia (KH-IP0041). ');
$ax += cidrblock($address,'103.96.76.0/22','No access allowed from Cambodia (KH-IP0042). ');
$ax += cidrblock($address,'103.101.80.0/22','No access allowed from Cambodia (KH-IP0043). ');
$ax += cidrblock($address,'103.101.156.0/22','No access allowed from Cambodia (KH-IP0044). ');
$ax += cidrblock($address,'103.101.208.0/22','No access allowed from Cambodia (KH-IP0045). ');
$ax += cidrblock($address,'103.104.60.0/22','No access allowed from Cambodia (KH-IP0046). ');
$ax += cidrblock($address,'103.104.228.0/24','No access allowed from Cambodia (KH-IP0047). ');
$ax += cidrblock($address,'103.105.8.0/22','No access allowed from Cambodia (KH-IP0048). ');
$ax += cidrblock($address,'103.106.204.0/22','No access allowed from Cambodia (KH-IP0049). ');
$ax += cidrblock($address,'103.108.218.0/23','No access allowed from Cambodia (KH-IP0050). ');
$ax += cidrblock($address,'103.109.68.0/22','No access allowed from Cambodia (KH-IP0051). ');
$ax += cidrblock($address,'103.192.180.0/22','No access allowed from Cambodia (KH-IP0052). ');
$ax += cidrblock($address,'103.193.180.0/22','No access allowed from Cambodia (KH-IP0053). ');
$ax += cidrblock($address,'103.193.204.0/22','No access allowed from Cambodia (KH-IP0054). ');
$ax += cidrblock($address,'103.194.84.0/22','No access allowed from Cambodia (KH-IP0055). ');
$ax += cidrblock($address,'103.197.104.0/22','No access allowed from Cambodia (KH-IP0056). ');
$ax += cidrblock($address,'103.205.24.0/22','No access allowed from Cambodia (KH-IP0057). ');
$ax += cidrblock($address,'103.206.200.0/22','No access allowed from Cambodia (KH-IP0058). ');
$ax += cidrblock($address,'103.207.112.0/22','No access allowed from Cambodia (KH-IP0059). ');
$ax += cidrblock($address,'103.214.148.0/22','No access allowed from Cambodia (KH-IP0060). ');
$ax += cidrblock($address,'103.216.48.0/22','No access allowed from Cambodia (KH-IP0061). ');
$ax += cidrblock($address,'103.224.28.0/22','No access allowed from Cambodia (KH-IP0062). ');
$ax += cidrblock($address,'103.225.78.0/23','No access allowed from Cambodia (KH-IP0063). ');
$ax += cidrblock($address,'103.227.172.0/22','No access allowed from Cambodia (KH-IP0064). ');
$ax += cidrblock($address,'103.231.60.0/22','No access allowed from Cambodia (KH-IP0065). ');
$ax += cidrblock($address,'103.232.192.0/22','No access allowed from Cambodia (KH-IP0066). ');
$ax += cidrblock($address,'103.237.52.0/23','No access allowed from Cambodia (KH-IP0067). ');
$ax += cidrblock($address,'103.239.52.0/22','No access allowed from Cambodia (KH-IP0068). ');
$ax += cidrblock($address,'103.240.112.0/22','No access allowed from Cambodia (KH-IP0069). ');
$ax += cidrblock($address,'103.242.12.0/22','No access allowed from Cambodia (KH-IP0070). ');
$ax += cidrblock($address,'103.242.40.0/22','No access allowed from Cambodia (KH-IP0071). ');
$ax += cidrblock($address,'103.242.56.0/22','No access allowed from Cambodia (KH-IP0072). ');
$ax += cidrblock($address,'103.244.248.0/22','No access allowed from Cambodia (KH-IP0073). ');
$ax += cidrblock($address,'103.245.76.0/22','No access allowed from Cambodia (KH-IP0074). ');
$ax += cidrblock($address,'103.246.144.0/22','No access allowed from Cambodia (KH-IP0075). ');
$ax += cidrblock($address,'103.246.228.0/22','No access allowed from Cambodia (KH-IP0076). ');
$ax += cidrblock($address,'103.248.40.0/22','No access allowed from Cambodia (KH-IP0077). ');
$ax += cidrblock($address,'103.253.180.0/22','No access allowed from Cambodia (KH-IP0078). ');
$ax += cidrblock($address,'103.253.252.0/22','No access allowed from Cambodia (KH-IP0079). ');
$ax += cidrblock($address,'103.255.116.0/22','No access allowed from Cambodia (KH-IP0080). ');
$ax += cidrblock($address,'104.250.176.0/24','No access allowed from Cambodia (KH-IP0081). ');
}
if(lmatch($address,'11','')) {
$ax += cidrblock($address,'110.74.192.0/19','No access allowed from Cambodia (KH-IP0082). ');
$ax += cidrblock($address,'110.235.240.0/20','No access allowed from Cambodia (KH-IP0083). ');
$ax += cidrblock($address,'111.67.96.0/20','No access allowed from Cambodia (KH-IP0084). ');
$ax += cidrblock($address,'111.90.176.0/20','No access allowed from Cambodia (KH-IP0085). ');
$ax += cidrblock($address,'111.92.240.0/22','No access allowed from Cambodia (KH-IP0086). ');
$ax += cidrblock($address,'111.118.128.0/19','No access allowed from Cambodia (KH-IP0087). ');
$ax += cidrblock($address,'113.29.248.0/22','No access allowed from Cambodia (KH-IP0088). ');
$ax += cidrblock($address,'113.130.124.0/22','No access allowed from Cambodia (KH-IP0089). ');
$ax += cidrblock($address,'114.134.184.0/21','No access allowed from Cambodia (KH-IP0090). ');
$ax += cidrblock($address,'115.178.24.0/22','No access allowed from Cambodia (KH-IP0091). ');
$ax += cidrblock($address,'116.212.128.0/19','No access allowed from Cambodia (KH-IP0092). ');
$ax += cidrblock($address,'116.214.24.0/21','No access allowed from Cambodia (KH-IP0093). ');
$ax += cidrblock($address,'117.20.112.0/21','No access allowed from Cambodia (KH-IP0094). ');
$ax += cidrblock($address,'117.55.248.0/21','No access allowed from Cambodia (KH-IP0095). ');
$ax += cidrblock($address,'117.120.24.0/21','No access allowed from Cambodia (KH-IP0096). ');
$ax += cidrblock($address,'118.67.200.0/21','No access allowed from Cambodia (KH-IP0097). ');
$ax += cidrblock($address,'119.15.80.0/20','No access allowed from Cambodia (KH-IP0098). ');
$ax += cidrblock($address,'119.82.248.0/21','No access allowed from Cambodia (KH-IP0099). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'120.136.24.0/21','No access allowed from Cambodia (KH-IP0100). ');
$ax += cidrblock($address,'122.252.176.0/21','No access allowed from Cambodia (KH-IP0101). ');
$ax += cidrblock($address,'123.108.248.0/21','No access allowed from Cambodia (KH-IP0102). ');
$ax += cidrblock($address,'124.108.4.0/22','No access allowed from Cambodia (KH-IP0103). ');
$ax += cidrblock($address,'124.108.48.0/21','No access allowed from Cambodia (KH-IP0104). ');
$ax += cidrblock($address,'124.109.16.0/22','No access allowed from Cambodia (KH-IP0105). ');
$ax += cidrblock($address,'124.248.160.0/19','No access allowed from Cambodia (KH-IP0106). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'139.81.252.0/23','No access allowed from Cambodia (KH-IP0107). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'144.48.136.0/22','No access allowed from Cambodia (KH-IP0108). ');
$ax += cidrblock($address,'144.48.228.0/22','No access allowed from Cambodia (KH-IP0109). ');
$ax += cidrblock($address,'146.88.200.0/21','No access allowed from Cambodia (KH-IP0110). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'150.107.4.0/22','No access allowed from Cambodia (KH-IP0111). ');
$ax += cidrblock($address,'150.129.20.0/22','No access allowed from Cambodia (KH-IP0112). ');
$ax += cidrblock($address,'155.254.202.0/24','No access allowed from Cambodia (KH-IP0113). ');
$ax += cidrblock($address,'157.119.96.0/22','No access allowed from Cambodia (KH-IP0114). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'160.202.32.0/22','No access allowed from Cambodia (KH-IP0115). ');
$ax += cidrblock($address,'163.47.172.0/22','No access allowed from Cambodia (KH-IP0116). ');
$ax += cidrblock($address,'163.53.28.0/22','No access allowed from Cambodia (KH-IP0117). ');
$ax += cidrblock($address,'163.53.196.0/22','No access allowed from Cambodia (KH-IP0118). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'172.69.80.0/22','No access allowed from Cambodia (KH-IP0119). ');
$ax += cidrblock($address,'175.28.0.0/22','No access allowed from Cambodia (KH-IP0120). ');
$ax += cidrblock($address,'175.100.0.0/17','No access allowed from Cambodia (KH-IP0121). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'180.178.124.0/22','No access allowed from Cambodia (KH-IP0122). ');
$ax += cidrblock($address,'183.81.184.0/21','No access allowed from Cambodia (KH-IP0123). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'196.52.45.0/24','No access allowed from Cambodia (KH-IP0124). ');
$ax += cidrblock($address,'196.53.88.0/22','No access allowed from Cambodia (KH-IP0125). ');
$ax += cidrblock($address,'196.53.94.0/23','No access allowed from Cambodia (KH-IP0126). ');
}
}
if(lmatch($address,'2','')) {
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'202.7.52.0/22','No access allowed from Cambodia (KH-IP0127). ');
$ax += cidrblock($address,'202.8.72.0/22','No access allowed from Cambodia (KH-IP0128). ');
$ax += cidrblock($address,'202.53.144.0/22','No access allowed from Cambodia (KH-IP0129). ');
$ax += cidrblock($address,'202.58.96.0/22','No access allowed from Cambodia (KH-IP0130). ');
$ax += cidrblock($address,'202.62.32.0/19','No access allowed from Cambodia (KH-IP0131). ');
$ax += cidrblock($address,'202.79.24.0/21','No access allowed from Cambodia (KH-IP0132). ');
$ax += cidrblock($address,'202.84.72.0/21','No access allowed from Cambodia (KH-IP0133). ');
$ax += cidrblock($address,'202.93.8.0/21','No access allowed from Cambodia (KH-IP0134). ');
$ax += cidrblock($address,'202.93.153.0/24','No access allowed from Cambodia (KH-IP0135). ');
$ax += cidrblock($address,'202.124.32.0/20','No access allowed from Cambodia (KH-IP0136). ');
$ax += cidrblock($address,'202.129.236.0/24','No access allowed from Cambodia (KH-IP0137). ');
$ax += cidrblock($address,'202.131.80.0/21','No access allowed from Cambodia (KH-IP0138). ');
$ax += cidrblock($address,'202.150.0.0/22','No access allowed from Cambodia (KH-IP0139). ');
$ax += cidrblock($address,'202.150.8.0/22','No access allowed from Cambodia (KH-IP0140). ');
$ax += cidrblock($address,'202.178.112.0/20','No access allowed from Cambodia (KH-IP0141). ');
$ax += cidrblock($address,'203.80.170.0/23','No access allowed from Cambodia (KH-IP0142). ');
$ax += cidrblock($address,'203.95.196.0/22','No access allowed from Cambodia (KH-IP0143). ');
$ax += cidrblock($address,'203.118.242.0/24','No access allowed from Cambodia (KH-IP0144). ');
$ax += cidrblock($address,'203.119.79.0/24','No access allowed from Cambodia (KH-IP0145). ');
$ax += cidrblock($address,'203.144.64.0/19','No access allowed from Cambodia (KH-IP0146). ');
$ax += cidrblock($address,'203.167.16.0/22','No access allowed from Cambodia (KH-IP0147). ');
$ax += cidrblock($address,'203.176.128.0/20','No access allowed from Cambodia (KH-IP0148). ');
$ax += cidrblock($address,'203.189.128.0/19','No access allowed from Cambodia (KH-IP0149). ');
$ax += cidrblock($address,'203.217.168.0/22','No access allowed from Cambodia (KH-IP0150). ');
$ax += cidrblock($address,'203.223.32.0/20','No access allowed from Cambodia (KH-IP0151). ');
}
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'218.100.71.0/24','No access allowed from Cambodia (KH-IP0152). ');
}
if(lmatch($address,'22','')) {
$ax += cidrblock($address,'220.158.148.0/22','No access allowed from Cambodia (KH-IP0153). ');
$ax += cidrblock($address,'221.120.160.0/22','No access allowed from Cambodia (KH-IP0154). ');
$ax += cidrblock($address,'223.223.168.0/21','No access allowed from Cambodia (KH-IP0155). ');
}
if(lmatch($address,'27','')) {
$ax += cidrblock($address,'27.34.178.0/26','No access allowed from Cambodia (KH-IP0156). ');
$ax += cidrblock($address,'27.34.178.64/32','No access allowed from Cambodia (KH-IP0157). ');
$ax += cidrblock($address,'27.34.186.0/31','No access allowed from Cambodia (KH-IP0158). ');
$ax += cidrblock($address,'27.34.186.2/32','No access allowed from Cambodia (KH-IP0159). ');
$ax += cidrblock($address,'27.34.187.0/27','No access allowed from Cambodia (KH-IP0160). ');
$ax += cidrblock($address,'27.34.187.32/32','No access allowed from Cambodia (KH-IP0161). ');
$ax += cidrblock($address,'27.109.112.0/21','No access allowed from Cambodia (KH-IP0162). ');
$ax += cidrblock($address,'27.111.8.0/22','No access allowed from Cambodia (KH-IP0163). ');
$ax += cidrblock($address,'27.116.60.0/22','No access allowed from Cambodia (KH-IP0164). ');
}
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'36.37.128.0/17','No access allowed from Cambodia (KH-IP0165). ');
$ax += cidrblock($address,'36.255.144.0/22','No access allowed from Cambodia (KH-IP0166). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'42.115.0.0/17','No access allowed from Cambodia (KH-IP0167). ');
$ax += cidrblock($address,'43.226.12.0/22','No access allowed from Cambodia (KH-IP0168). ');
$ax += cidrblock($address,'43.230.60.0/22','No access allowed from Cambodia (KH-IP0169). ');
$ax += cidrblock($address,'43.230.192.0/22','No access allowed from Cambodia (KH-IP0170). ');
$ax += cidrblock($address,'43.231.64.0/22','No access allowed from Cambodia (KH-IP0171). ');
$ax += cidrblock($address,'43.245.32.0/22','No access allowed from Cambodia (KH-IP0172). ');
$ax += cidrblock($address,'43.245.200.0/22','No access allowed from Cambodia (KH-IP0173). ');
$ax += cidrblock($address,'43.245.216.0/22','No access allowed from Cambodia (KH-IP0174). ');
$ax += cidrblock($address,'43.252.16.0/22','No access allowed from Cambodia (KH-IP0175). ');
$ax += cidrblock($address,'43.252.80.0/22','No access allowed from Cambodia (KH-IP0176). ');
$ax += cidrblock($address,'43.255.112.0/22','No access allowed from Cambodia (KH-IP0177). ');
$ax += cidrblock($address,'45.59.146.0/24','No access allowed from Cambodia (KH-IP0178). ');
$ax += cidrblock($address,'45.64.124.0/22','No access allowed from Cambodia (KH-IP0179). ');
$ax += cidrblock($address,'45.112.44.0/22','No access allowed from Cambodia (KH-IP0180). ');
$ax += cidrblock($address,'45.114.160.0/22','No access allowed from Cambodia (KH-IP0181). ');
$ax += cidrblock($address,'45.121.236.0/22','No access allowed from Cambodia (KH-IP0182). ');
$ax += cidrblock($address,'45.127.152.0/22','No access allowed from Cambodia (KH-IP0183). ');
$ax += cidrblock($address,'45.250.236.0/22','No access allowed from Cambodia (KH-IP0184). ');
$ax += cidrblock($address,'46.244.29.64/28','No access allowed from Cambodia (KH-IP0185). ');
$ax += cidrblock($address,'49.156.0.0/22','No access allowed from Cambodia (KH-IP0186). ');
$ax += cidrblock($address,'49.156.32.0/20','No access allowed from Cambodia (KH-IP0187). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.60.65/32','No access allowed from Cambodia (KH-IP0188). ');
$ax += cidrblock($address,'5.62.60.66/31','No access allowed from Cambodia (KH-IP0189). ');
$ax += cidrblock($address,'5.62.62.65/32','No access allowed from Cambodia (KH-IP0190). ');
$ax += cidrblock($address,'5.62.62.66/31','No access allowed from Cambodia (KH-IP0191). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'65.110.61.60/30','No access allowed from Cambodia (KH-IP0192). ');
$ax += cidrblock($address,'65.110.61.64/30','No access allowed from Cambodia (KH-IP0193). ');
$ax += cidrblock($address,'65.110.61.68/31','No access allowed from Cambodia (KH-IP0194). ');
}
if(lmatch($address,'9','')) {
$ax += cidrblock($address,'96.9.64.0/19','No access allowed from Cambodia (KH-IP0195). ');
}
$ax += inmatch($query,'khtestkh','Test function. (KH). ');
// End of KH list
