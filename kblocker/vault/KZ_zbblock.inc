<?php
// *php 5 fix
global $ax;
// Kazakhstan Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / KZ-2018.65.634';
$ax += rmatch($hoster,'.kz','No access allowed from Kazakhstan (KZ-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.128.143.0/24','No access allowed from Kazakhstan (KZ-IP0001). ');
$ax += cidrblock($address,'104.167.212.0/24','No access allowed from Kazakhstan (KZ-IP0002). ');
$ax += cidrblock($address,'109.71.32.0/21','No access allowed from Kazakhstan (KZ-IP0003). ');
$ax += cidrblock($address,'109.163.192.0/21','No access allowed from Kazakhstan (KZ-IP0004). ');
$ax += cidrblock($address,'109.166.56.0/21','No access allowed from Kazakhstan (KZ-IP0005). ');
$ax += cidrblock($address,'109.166.64.0/20','No access allowed from Kazakhstan (KZ-IP0006). ');
$ax += cidrblock($address,'109.166.80.0/21','No access allowed from Kazakhstan (KZ-IP0007). ');
$ax += cidrblock($address,'109.201.32.0/19','No access allowed from Kazakhstan (KZ-IP0008). ');
$ax += cidrblock($address,'109.206.0.0/19','No access allowed from Kazakhstan (KZ-IP0009). ');
$ax += cidrblock($address,'109.229.160.0/19','No access allowed from Kazakhstan (KZ-IP0010). ');
$ax += cidrblock($address,'109.238.160.0/20','No access allowed from Kazakhstan (KZ-IP0011). ');
$ax += cidrblock($address,'109.239.32.0/20','No access allowed from Kazakhstan (KZ-IP0012). ');
$ax += cidrblock($address,'109.248.144.0/20','No access allowed from Kazakhstan (KZ-IP0013). ');
$ax += cidrblock($address,'109.248.208.0/22','No access allowed from Kazakhstan (KZ-IP0014). ');
$ax += cidrblock($address,'109.248.219.0/24','No access allowed from Kazakhstan (KZ-IP0015). ');
$ax += cidrblock($address,'109.248.236.0/24','No access allowed from Kazakhstan (KZ-IP0016). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'141.8.147.176/29','No access allowed from Kazakhstan (KZ-IP0017). ');
$ax += cidrblock($address,'145.249.120.0/21','No access allowed from Kazakhstan (KZ-IP0018). ');
$ax += cidrblock($address,'145.249.128.0/17','No access allowed from Kazakhstan (KZ-IP0019). ');
$ax += cidrblock($address,'145.255.160.0/19','No access allowed from Kazakhstan (KZ-IP0020). ');
$ax += cidrblock($address,'146.0.60.0/22','No access allowed from Kazakhstan (KZ-IP0021). ');
$ax += cidrblock($address,'146.0.192.0/20','No access allowed from Kazakhstan (KZ-IP0022). ');
$ax += cidrblock($address,'146.66.16.0/21','No access allowed from Kazakhstan (KZ-IP0023). ');
$ax += cidrblock($address,'147.30.0.0/16','No access allowed from Kazakhstan (KZ-IP0024). ');
$ax += cidrblock($address,'149.3.192.0/18','No access allowed from Kazakhstan (KZ-IP0025). ');
$ax += cidrblock($address,'149.27.0.0/16','No access allowed from Kazakhstan (KZ-IP0026). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'151.236.192.0/21','No access allowed from Kazakhstan (KZ-IP0027). ');
$ax += cidrblock($address,'151.237.144.0/20','No access allowed from Kazakhstan (KZ-IP0028). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'164.0.0.0/16','No access allowed from Kazakhstan (KZ-IP0029). ');
$ax += cidrblock($address,'164.40.0.0/17','No access allowed from Kazakhstan (KZ-IP0030). ');
$ax += cidrblock($address,'164.138.40.0/21','No access allowed from Kazakhstan (KZ-IP0031). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'176.69.96.0/19','No access allowed from Kazakhstan (KZ-IP0032). ');
$ax += cidrblock($address,'176.69.160.0/19','No access allowed from Kazakhstan (KZ-IP0033). ');
$ax += cidrblock($address,'176.98.192.0/20','No access allowed from Kazakhstan (KZ-IP0034). ');
$ax += cidrblock($address,'176.98.224.0/20','No access allowed from Kazakhstan (KZ-IP0035). ');
$ax += cidrblock($address,'176.98.240.0/22','No access allowed from Kazakhstan (KZ-IP0036). ');
$ax += cidrblock($address,'176.100.48.0/21','No access allowed from Kazakhstan (KZ-IP0037). ');
$ax += cidrblock($address,'176.108.64.0/19','No access allowed from Kazakhstan (KZ-IP0038). ');
$ax += cidrblock($address,'176.110.124.0/23','No access allowed from Kazakhstan (KZ-IP0039). ');
$ax += cidrblock($address,'176.110.126.0/24','No access allowed from Kazakhstan (KZ-IP0040). ');
$ax += cidrblock($address,'176.118.56.0/21','No access allowed from Kazakhstan (KZ-IP0041). ');
$ax += cidrblock($address,'176.119.224.0/21','No access allowed from Kazakhstan (KZ-IP0042). ');
$ax += cidrblock($address,'176.122.80.0/21','No access allowed from Kazakhstan (KZ-IP0043). ');
$ax += cidrblock($address,'176.124.80.0/20','No access allowed from Kazakhstan (KZ-IP0044). ');
$ax += cidrblock($address,'176.222.128.0/18','No access allowed from Kazakhstan (KZ-IP0045). ');
$ax += cidrblock($address,'176.223.72.0/21','No access allowed from Kazakhstan (KZ-IP0046). ');
$ax += cidrblock($address,'176.223.100.0/25','No access allowed from Kazakhstan (KZ-IP0047). ');
$ax += cidrblock($address,'176.223.100.128/28','No access allowed from Kazakhstan (KZ-IP0048). ');
$ax += cidrblock($address,'176.223.100.144/29','No access allowed from Kazakhstan (KZ-IP0049). ');
$ax += cidrblock($address,'176.223.100.152/30','No access allowed from Kazakhstan (KZ-IP0050). ');
$ax += cidrblock($address,'176.223.100.156/31','No access allowed from Kazakhstan (KZ-IP0051). ');
$ax += cidrblock($address,'176.223.100.158/32','No access allowed from Kazakhstan (KZ-IP0052). ');
$ax += cidrblock($address,'176.223.100.160/27','No access allowed from Kazakhstan (KZ-IP0053). ');
$ax += cidrblock($address,'176.223.100.192/26','No access allowed from Kazakhstan (KZ-IP0054). ');
$ax += cidrblock($address,'176.223.101.0/24','No access allowed from Kazakhstan (KZ-IP0055). ');
$ax += cidrblock($address,'176.223.102.0/23','No access allowed from Kazakhstan (KZ-IP0056). ');
$ax += cidrblock($address,'176.223.184.0/22','No access allowed from Kazakhstan (KZ-IP0057). ');
$ax += cidrblock($address,'178.22.168.0/21','No access allowed from Kazakhstan (KZ-IP0058). ');
$ax += cidrblock($address,'178.57.66.0/25','No access allowed from Kazakhstan (KZ-IP0059). ');
$ax += cidrblock($address,'178.57.67.0/25','No access allowed from Kazakhstan (KZ-IP0060). ');
$ax += cidrblock($address,'178.88.0.0/17','No access allowed from Kazakhstan (KZ-IP0061). ');
$ax += cidrblock($address,'178.88.128.0/19','No access allowed from Kazakhstan (KZ-IP0062). ');
$ax += cidrblock($address,'178.88.160.0/21','No access allowed from Kazakhstan (KZ-IP0063). ');
$ax += cidrblock($address,'178.88.168.0/22','No access allowed from Kazakhstan (KZ-IP0064). ');
$ax += cidrblock($address,'178.88.172.0/23','No access allowed from Kazakhstan (KZ-IP0065). ');
$ax += cidrblock($address,'178.88.175.0/24','No access allowed from Kazakhstan (KZ-IP0066). ');
$ax += cidrblock($address,'178.88.176.0/20','No access allowed from Kazakhstan (KZ-IP0067). ');
$ax += cidrblock($address,'178.88.192.0/18','No access allowed from Kazakhstan (KZ-IP0068). ');
$ax += cidrblock($address,'178.89.0.0/16','No access allowed from Kazakhstan (KZ-IP0069). ');
$ax += cidrblock($address,'178.90.0.0/15','No access allowed from Kazakhstan (KZ-IP0070). ');
$ax += cidrblock($address,'178.159.35.0/24','No access allowed from Kazakhstan (KZ-IP0071). ');
$ax += cidrblock($address,'178.171.69.0/24','No access allowed from Kazakhstan (KZ-IP0072). ');
$ax += cidrblock($address,'178.171.70.0/24','No access allowed from Kazakhstan (KZ-IP0073). ');
$ax += cidrblock($address,'178.212.0.0/21','No access allowed from Kazakhstan (KZ-IP0074). ');
$ax += cidrblock($address,'178.238.64.0/20','No access allowed from Kazakhstan (KZ-IP0075). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'185.2.224.0/22','No access allowed from Kazakhstan (KZ-IP0076). ');
$ax += cidrblock($address,'185.8.232.0/22','No access allowed from Kazakhstan (KZ-IP0077). ');
$ax += cidrblock($address,'185.9.120.0/24','No access allowed from Kazakhstan (KZ-IP0078). ');
$ax += cidrblock($address,'185.9.122.0/23','No access allowed from Kazakhstan (KZ-IP0079). ');
$ax += cidrblock($address,'185.13.20.0/22','No access allowed from Kazakhstan (KZ-IP0080). ');
$ax += cidrblock($address,'185.14.100.0/22','No access allowed from Kazakhstan (KZ-IP0081). ');
$ax += cidrblock($address,'185.18.252.0/22','No access allowed from Kazakhstan (KZ-IP0082). ');
$ax += cidrblock($address,'185.19.192.0/22','No access allowed from Kazakhstan (KZ-IP0083). ');
$ax += cidrblock($address,'185.20.124.0/22','No access allowed from Kazakhstan (KZ-IP0084). ');
$ax += cidrblock($address,'185.22.64.0/22','No access allowed from Kazakhstan (KZ-IP0085). ');
$ax += cidrblock($address,'185.27.68.0/22','No access allowed from Kazakhstan (KZ-IP0086). ');
$ax += cidrblock($address,'185.31.72.0/22','No access allowed from Kazakhstan (KZ-IP0087). ');
$ax += cidrblock($address,'185.35.16.0/22','No access allowed from Kazakhstan (KZ-IP0088). ');
$ax += cidrblock($address,'185.46.152.0/24','No access allowed from Kazakhstan (KZ-IP0089). ');
$ax += cidrblock($address,'185.48.124.0/22','No access allowed from Kazakhstan (KZ-IP0090). ');
$ax += cidrblock($address,'185.48.148.0/22','No access allowed from Kazakhstan (KZ-IP0091). ');
$ax += cidrblock($address,'185.57.72.0/22','No access allowed from Kazakhstan (KZ-IP0092). ');
$ax += cidrblock($address,'185.75.191.0/24','No access allowed from Kazakhstan (KZ-IP0093). ');
$ax += cidrblock($address,'185.79.212.0/22','No access allowed from Kazakhstan (KZ-IP0094). ');
$ax += cidrblock($address,'185.80.80.0/22','No access allowed from Kazakhstan (KZ-IP0095). ');
$ax += cidrblock($address,'185.90.72.0/22','No access allowed from Kazakhstan (KZ-IP0096). ');
$ax += cidrblock($address,'185.97.56.0/22','No access allowed from Kazakhstan (KZ-IP0097). ');
$ax += cidrblock($address,'185.97.112.0/22','No access allowed from Kazakhstan (KZ-IP0098). ');
$ax += cidrblock($address,'185.98.4.0/22','No access allowed from Kazakhstan (KZ-IP0099). ');
$ax += cidrblock($address,'185.98.76.0/22','No access allowed from Kazakhstan (KZ-IP0100). ');
$ax += cidrblock($address,'185.98.88.0/22','No access allowed from Kazakhstan (KZ-IP0101). ');
$ax += cidrblock($address,'185.99.124.0/22','No access allowed from Kazakhstan (KZ-IP0102). ');
$ax += cidrblock($address,'185.100.64.0/22','No access allowed from Kazakhstan (KZ-IP0103). ');
$ax += cidrblock($address,'185.100.224.0/22','No access allowed from Kazakhstan (KZ-IP0104). ');
$ax += cidrblock($address,'185.101.20.0/22','No access allowed from Kazakhstan (KZ-IP0105). ');
$ax += cidrblock($address,'185.102.72.0/22','No access allowed from Kazakhstan (KZ-IP0106). ');
$ax += cidrblock($address,'185.102.116.0/22','No access allowed from Kazakhstan (KZ-IP0107). ');
$ax += cidrblock($address,'185.102.128.0/22','No access allowed from Kazakhstan (KZ-IP0108). ');
$ax += cidrblock($address,'185.103.168.0/22','No access allowed from Kazakhstan (KZ-IP0109). ');
$ax += cidrblock($address,'185.103.176.0/22','No access allowed from Kazakhstan (KZ-IP0110). ');
$ax += cidrblock($address,'185.103.184.0/22','No access allowed from Kazakhstan (KZ-IP0111). ');
$ax += cidrblock($address,'185.106.156.0/22','No access allowed from Kazakhstan (KZ-IP0112). ');
$ax += cidrblock($address,'185.107.172.0/22','No access allowed from Kazakhstan (KZ-IP0113). ');
$ax += cidrblock($address,'185.111.104.0/22','No access allowed from Kazakhstan (KZ-IP0114). ');
$ax += cidrblock($address,'185.113.36.0/22','No access allowed from Kazakhstan (KZ-IP0115). ');
$ax += cidrblock($address,'185.113.132.0/22','No access allowed from Kazakhstan (KZ-IP0116). ');
$ax += cidrblock($address,'185.116.140.0/22','No access allowed from Kazakhstan (KZ-IP0117). ');
$ax += cidrblock($address,'185.116.192.0/22','No access allowed from Kazakhstan (KZ-IP0118). ');
$ax += cidrblock($address,'185.120.76.0/22','No access allowed from Kazakhstan (KZ-IP0119). ');
$ax += cidrblock($address,'185.121.80.0/22','No access allowed from Kazakhstan (KZ-IP0120). ');
$ax += cidrblock($address,'185.122.32.0/22','No access allowed from Kazakhstan (KZ-IP0121). ');
$ax += cidrblock($address,'185.123.16.0/22','No access allowed from Kazakhstan (KZ-IP0122). ');
$ax += cidrblock($address,'185.123.40.0/22','No access allowed from Kazakhstan (KZ-IP0123). ');
$ax += cidrblock($address,'185.125.44.0/22','No access allowed from Kazakhstan (KZ-IP0124). ');
$ax += cidrblock($address,'185.125.88.0/22','No access allowed from Kazakhstan (KZ-IP0125). ');
$ax += cidrblock($address,'185.129.48.0/22','No access allowed from Kazakhstan (KZ-IP0126). ');
$ax += cidrblock($address,'185.129.192.0/22','No access allowed from Kazakhstan (KZ-IP0127). ');
$ax += cidrblock($address,'185.134.236.0/22','No access allowed from Kazakhstan (KZ-IP0128). ');
$ax += cidrblock($address,'185.136.12.0/22','No access allowed from Kazakhstan (KZ-IP0129). ');
$ax += cidrblock($address,'185.143.20.0/22','No access allowed from Kazakhstan (KZ-IP0130). ');
$ax += cidrblock($address,'185.143.128.0/22','No access allowed from Kazakhstan (KZ-IP0131). ');
$ax += cidrblock($address,'185.146.0.0/22','No access allowed from Kazakhstan (KZ-IP0132). ');
$ax += cidrblock($address,'185.146.16.0/22','No access allowed from Kazakhstan (KZ-IP0133). ');
$ax += cidrblock($address,'185.151.40.0/22','No access allowed from Kazakhstan (KZ-IP0134). ');
$ax += cidrblock($address,'185.179.8.0/22','No access allowed from Kazakhstan (KZ-IP0135). ');
$ax += cidrblock($address,'185.182.216.0/22','No access allowed from Kazakhstan (KZ-IP0136). ');
$ax += cidrblock($address,'185.191.28.0/22','No access allowed from Kazakhstan (KZ-IP0137). ');
$ax += cidrblock($address,'185.206.32.0/22','No access allowed from Kazakhstan (KZ-IP0138). ');
$ax += cidrblock($address,'185.215.160.0/22','No access allowed from Kazakhstan (KZ-IP0139). ');
$ax += cidrblock($address,'185.217.16.0/22','No access allowed from Kazakhstan (KZ-IP0140). ');
$ax += cidrblock($address,'185.217.180.0/22','No access allowed from Kazakhstan (KZ-IP0141). ');
$ax += cidrblock($address,'185.217.188.0/22','No access allowed from Kazakhstan (KZ-IP0142). ');
$ax += cidrblock($address,'185.224.212.0/24','No access allowed from Kazakhstan (KZ-IP0143). ');
$ax += cidrblock($address,'185.239.144.0/22','No access allowed from Kazakhstan (KZ-IP0144). ');
$ax += cidrblock($address,'185.246.160.0/22','No access allowed from Kazakhstan (KZ-IP0145). ');
$ax += cidrblock($address,'188.0.128.0/19','No access allowed from Kazakhstan (KZ-IP0146). ');
$ax += cidrblock($address,'188.94.152.0/21','No access allowed from Kazakhstan (KZ-IP0147). ');
$ax += cidrblock($address,'188.130.156.0/22','No access allowed from Kazakhstan (KZ-IP0148). ');
$ax += cidrblock($address,'188.130.167.0/24','No access allowed from Kazakhstan (KZ-IP0149). ');
$ax += cidrblock($address,'188.246.236.0/22','No access allowed from Kazakhstan (KZ-IP0150). ');
$ax += cidrblock($address,'188.246.248.0/21','No access allowed from Kazakhstan (KZ-IP0151). ');
$ax += cidrblock($address,'188.247.176.0/20','No access allowed from Kazakhstan (KZ-IP0152). ');
$ax += cidrblock($address,'188.247.192.0/19','No access allowed from Kazakhstan (KZ-IP0153). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'192.162.156.0/22','No access allowed from Kazakhstan (KZ-IP0154). ');
$ax += cidrblock($address,'193.0.162.0/23','No access allowed from Kazakhstan (KZ-IP0155). ');
$ax += cidrblock($address,'193.29.53.0/24','No access allowed from Kazakhstan (KZ-IP0156). ');
$ax += cidrblock($address,'193.31.200.0/21','No access allowed from Kazakhstan (KZ-IP0157). ');
$ax += cidrblock($address,'193.93.56.0/22','No access allowed from Kazakhstan (KZ-IP0158). ');
$ax += cidrblock($address,'193.93.212.0/22','No access allowed from Kazakhstan (KZ-IP0159). ');
$ax += cidrblock($address,'193.193.224.0/19','No access allowed from Kazakhstan (KZ-IP0160). ');
$ax += cidrblock($address,'193.254.250.0/23','No access allowed from Kazakhstan (KZ-IP0161). ');
$ax += cidrblock($address,'194.0.21.0/24','No access allowed from Kazakhstan (KZ-IP0162). ');
$ax += cidrblock($address,'194.0.60.0/24','No access allowed from Kazakhstan (KZ-IP0163). ');
$ax += cidrblock($address,'194.0.108.0/22','No access allowed from Kazakhstan (KZ-IP0164). ');
$ax += cidrblock($address,'194.0.124.0/22','No access allowed from Kazakhstan (KZ-IP0165). ');
$ax += cidrblock($address,'194.9.30.0/23','No access allowed from Kazakhstan (KZ-IP0166). ');
$ax += cidrblock($address,'194.60.232.0/22','No access allowed from Kazakhstan (KZ-IP0167). ');
$ax += cidrblock($address,'194.105.104.0/21','No access allowed from Kazakhstan (KZ-IP0168). ');
$ax += cidrblock($address,'194.187.136.0/22','No access allowed from Kazakhstan (KZ-IP0169). ');
$ax += cidrblock($address,'194.187.244.0/22','No access allowed from Kazakhstan (KZ-IP0170). ');
$ax += cidrblock($address,'195.2.230.0/23','No access allowed from Kazakhstan (KZ-IP0171). ');
$ax += cidrblock($address,'195.12.96.0/19','No access allowed from Kazakhstan (KZ-IP0172). ');
$ax += cidrblock($address,'195.38.22.0/24','No access allowed from Kazakhstan (KZ-IP0173). ');
$ax += cidrblock($address,'195.47.255.0/24','No access allowed from Kazakhstan (KZ-IP0174). ');
$ax += cidrblock($address,'195.49.208.0/21','No access allowed from Kazakhstan (KZ-IP0175). ');
$ax += cidrblock($address,'195.82.0.0/19','No access allowed from Kazakhstan (KZ-IP0176). ');
$ax += cidrblock($address,'195.88.2.0/24','No access allowed from Kazakhstan (KZ-IP0177). ');
$ax += cidrblock($address,'195.93.152.0/23','No access allowed from Kazakhstan (KZ-IP0178). ');
$ax += cidrblock($address,'195.162.14.0/23','No access allowed from Kazakhstan (KZ-IP0179). ');
$ax += cidrblock($address,'195.162.26.0/23','No access allowed from Kazakhstan (KZ-IP0180). ');
$ax += cidrblock($address,'195.189.28.0/22','No access allowed from Kazakhstan (KZ-IP0181). ');
$ax += cidrblock($address,'195.189.68.0/22','No access allowed from Kazakhstan (KZ-IP0182). ');
$ax += cidrblock($address,'195.200.74.0/23','No access allowed from Kazakhstan (KZ-IP0183). ');
$ax += cidrblock($address,'195.210.46.0/23','No access allowed from Kazakhstan (KZ-IP0184). ');
$ax += cidrblock($address,'195.226.208.0/24','No access allowed from Kazakhstan (KZ-IP0185). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'2.72.0.0/13','No access allowed from Kazakhstan (KZ-IP0186). ');
$ax += cidrblock($address,'2.132.0.0/14','No access allowed from Kazakhstan (KZ-IP0187). ');
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'204.212.153.240/32','No access allowed from Kazakhstan (KZ-IP0188). ');
$ax += cidrblock($address,'206.123.152.0/25','No access allowed from Kazakhstan (KZ-IP0189). ');
}
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'212.13.128.0/18','No access allowed from Kazakhstan (KZ-IP0190). ');
$ax += cidrblock($address,'212.19.128.0/19','No access allowed from Kazakhstan (KZ-IP0191). ');
$ax += cidrblock($address,'212.45.80.0/20','No access allowed from Kazakhstan (KZ-IP0192). ');
$ax += cidrblock($address,'212.76.0.0/19','No access allowed from Kazakhstan (KZ-IP0193). ');
$ax += cidrblock($address,'212.96.64.0/21','No access allowed from Kazakhstan (KZ-IP0194). ');
$ax += cidrblock($address,'212.96.72.0/23','No access allowed from Kazakhstan (KZ-IP0195). ');
$ax += cidrblock($address,'212.96.74.0/24','No access allowed from Kazakhstan (KZ-IP0196). ');
$ax += cidrblock($address,'212.96.76.0/22','No access allowed from Kazakhstan (KZ-IP0197). ');
$ax += cidrblock($address,'212.96.80.0/23','No access allowed from Kazakhstan (KZ-IP0198). ');
$ax += cidrblock($address,'212.96.84.0/24','No access allowed from Kazakhstan (KZ-IP0199). ');
$ax += cidrblock($address,'212.96.86.0/23','No access allowed from Kazakhstan (KZ-IP0200). ');
$ax += cidrblock($address,'212.96.88.0/23','No access allowed from Kazakhstan (KZ-IP0201). ');
$ax += cidrblock($address,'212.96.92.0/22','No access allowed from Kazakhstan (KZ-IP0202). ');
$ax += cidrblock($address,'212.116.224.0/19','No access allowed from Kazakhstan (KZ-IP0203). ');
$ax += cidrblock($address,'212.154.128.0/17','No access allowed from Kazakhstan (KZ-IP0204). ');
$ax += cidrblock($address,'213.5.184.0/21','No access allowed from Kazakhstan (KZ-IP0205). ');
$ax += cidrblock($address,'213.109.208.0/20','No access allowed from Kazakhstan (KZ-IP0206). ');
$ax += cidrblock($address,'213.141.160.0/19','No access allowed from Kazakhstan (KZ-IP0207). ');
$ax += cidrblock($address,'213.157.32.0/19','No access allowed from Kazakhstan (KZ-IP0208). ');
$ax += cidrblock($address,'213.211.64.0/18','No access allowed from Kazakhstan (KZ-IP0209). ');
$ax += cidrblock($address,'213.232.196.0/23','No access allowed from Kazakhstan (KZ-IP0210). ');
$ax += cidrblock($address,'213.232.201.0/24','No access allowed from Kazakhstan (KZ-IP0211). ');
$ax += cidrblock($address,'213.232.218.0/23','No access allowed from Kazakhstan (KZ-IP0212). ');
$ax += cidrblock($address,'213.232.220.0/22','No access allowed from Kazakhstan (KZ-IP0213). ');
$ax += cidrblock($address,'213.232.224.0/24','No access allowed from Kazakhstan (KZ-IP0214). ');
$ax += cidrblock($address,'213.232.230.0/23','No access allowed from Kazakhstan (KZ-IP0215). ');
$ax += cidrblock($address,'213.232.242.0/23','No access allowed from Kazakhstan (KZ-IP0216). ');
$ax += cidrblock($address,'213.232.244.0/24','No access allowed from Kazakhstan (KZ-IP0217). ');
$ax += cidrblock($address,'213.232.246.0/23','No access allowed from Kazakhstan (KZ-IP0218). ');
$ax += cidrblock($address,'217.11.64.0/20','No access allowed from Kazakhstan (KZ-IP0219). ');
$ax += cidrblock($address,'217.15.176.0/20','No access allowed from Kazakhstan (KZ-IP0220). ');
$ax += cidrblock($address,'217.76.64.0/20','No access allowed from Kazakhstan (KZ-IP0221). ');
$ax += cidrblock($address,'217.196.16.0/20','No access allowed from Kazakhstan (KZ-IP0222). ');
}
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.31.216.0/21','No access allowed from Kazakhstan (KZ-IP0223). ');
$ax += cidrblock($address,'31.132.80.0/20','No access allowed from Kazakhstan (KZ-IP0224). ');
$ax += cidrblock($address,'31.133.208.0/20','No access allowed from Kazakhstan (KZ-IP0225). ');
$ax += cidrblock($address,'31.148.22.0/24','No access allowed from Kazakhstan (KZ-IP0226). ');
$ax += cidrblock($address,'31.169.0.0/19','No access allowed from Kazakhstan (KZ-IP0227). ');
$ax += cidrblock($address,'31.171.160.0/19','No access allowed from Kazakhstan (KZ-IP0228). ');
$ax += cidrblock($address,'31.223.192.0/20','No access allowed from Kazakhstan (KZ-IP0229). ');
$ax += cidrblock($address,'37.0.127.0/25','No access allowed from Kazakhstan (KZ-IP0230). ');
$ax += cidrblock($address,'37.17.176.0/21','No access allowed from Kazakhstan (KZ-IP0231). ');
$ax += cidrblock($address,'37.99.0.0/17','No access allowed from Kazakhstan (KZ-IP0232). ');
$ax += cidrblock($address,'37.150.0.0/15','No access allowed from Kazakhstan (KZ-IP0233). ');
$ax += cidrblock($address,'37.208.40.0/21','No access allowed from Kazakhstan (KZ-IP0234). ');
$ax += cidrblock($address,'37.228.64.0/21','No access allowed from Kazakhstan (KZ-IP0235). ');
$ax += cidrblock($address,'37.230.251.0/24','No access allowed from Kazakhstan (KZ-IP0236). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'45.59.141.0/24','No access allowed from Kazakhstan (KZ-IP0237). ');
$ax += cidrblock($address,'46.8.252.0/23','No access allowed from Kazakhstan (KZ-IP0238). ');
$ax += cidrblock($address,'46.16.144.0/21','No access allowed from Kazakhstan (KZ-IP0239). ');
$ax += cidrblock($address,'46.19.40.0/21','No access allowed from Kazakhstan (KZ-IP0240). ');
$ax += cidrblock($address,'46.34.192.0/19','No access allowed from Kazakhstan (KZ-IP0241). ');
$ax += cidrblock($address,'46.36.128.0/19','No access allowed from Kazakhstan (KZ-IP0242). ');
$ax += cidrblock($address,'46.36.201.131/32','No access allowed from Kazakhstan (KZ-IP0243). ');
$ax += cidrblock($address,'46.36.201.132/30','No access allowed from Kazakhstan (KZ-IP0244). ');
$ax += cidrblock($address,'46.42.192.0/18','No access allowed from Kazakhstan (KZ-IP0245). ');
$ax += cidrblock($address,'46.161.62.0/25','No access allowed from Kazakhstan (KZ-IP0246). ');
$ax += cidrblock($address,'46.227.184.0/21','No access allowed from Kazakhstan (KZ-IP0247). ');
$ax += cidrblock($address,'46.235.80.0/21','No access allowed from Kazakhstan (KZ-IP0248). ');
$ax += cidrblock($address,'46.255.232.0/21','No access allowed from Kazakhstan (KZ-IP0249). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.34.0.0/17','No access allowed from Kazakhstan (KZ-IP0250). ');
$ax += cidrblock($address,'5.62.60.193/32','No access allowed from Kazakhstan (KZ-IP0251). ');
$ax += cidrblock($address,'5.62.60.194/31','No access allowed from Kazakhstan (KZ-IP0252). ');
$ax += cidrblock($address,'5.62.62.185/32','No access allowed from Kazakhstan (KZ-IP0253). ');
$ax += cidrblock($address,'5.62.62.186/31','No access allowed from Kazakhstan (KZ-IP0254). ');
$ax += cidrblock($address,'5.63.64.0/18','No access allowed from Kazakhstan (KZ-IP0255). ');
$ax += cidrblock($address,'5.76.0.0/16','No access allowed from Kazakhstan (KZ-IP0256). ');
$ax += cidrblock($address,'5.101.52.0/22','No access allowed from Kazakhstan (KZ-IP0257). ');
$ax += cidrblock($address,'5.101.56.0/22','No access allowed from Kazakhstan (KZ-IP0258). ');
$ax += cidrblock($address,'5.104.232.0/21','No access allowed from Kazakhstan (KZ-IP0259). ');
$ax += cidrblock($address,'5.188.64.0/22','No access allowed from Kazakhstan (KZ-IP0260). ');
$ax += cidrblock($address,'5.188.152.0/22','No access allowed from Kazakhstan (KZ-IP0261). ');
$ax += cidrblock($address,'5.188.240.0/20','No access allowed from Kazakhstan (KZ-IP0262). ');
$ax += cidrblock($address,'5.250.128.0/19','No access allowed from Kazakhstan (KZ-IP0263). ');
$ax += cidrblock($address,'5.251.0.0/16','No access allowed from Kazakhstan (KZ-IP0264). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.84.32.0/19','No access allowed from Kazakhstan (KZ-IP0265). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.73.128.0/21','No access allowed from Kazakhstan (KZ-IP0266). ');
$ax += cidrblock($address,'77.74.64.0/21','No access allowed from Kazakhstan (KZ-IP0267). ');
$ax += cidrblock($address,'77.94.3.0/24','No access allowed from Kazakhstan (KZ-IP0268). ');
$ax += cidrblock($address,'77.94.4.0/22','No access allowed from Kazakhstan (KZ-IP0269). ');
$ax += cidrblock($address,'77.94.8.0/21','No access allowed from Kazakhstan (KZ-IP0270). ');
$ax += cidrblock($address,'77.94.16.0/20','No access allowed from Kazakhstan (KZ-IP0271). ');
$ax += cidrblock($address,'77.220.206.0/23','No access allowed from Kazakhstan (KZ-IP0272). ');
$ax += cidrblock($address,'77.240.32.0/20','No access allowed from Kazakhstan (KZ-IP0273). ');
$ax += cidrblock($address,'77.245.96.0/20','No access allowed from Kazakhstan (KZ-IP0274). ');
$ax += cidrblock($address,'78.40.108.0/23','No access allowed from Kazakhstan (KZ-IP0275). ');
$ax += cidrblock($address,'78.109.144.0/20','No access allowed from Kazakhstan (KZ-IP0276). ');
$ax += cidrblock($address,'79.110.22.128/25','No access allowed from Kazakhstan (KZ-IP0277). ');
$ax += cidrblock($address,'79.134.32.0/20','No access allowed from Kazakhstan (KZ-IP0278). ');
$ax += cidrblock($address,'79.140.224.0/20','No access allowed from Kazakhstan (KZ-IP0279). ');
$ax += cidrblock($address,'79.142.48.0/20','No access allowed from Kazakhstan (KZ-IP0280). ');
$ax += cidrblock($address,'79.142.93.0/24','No access allowed from Kazakhstan (KZ-IP0281). ');
$ax += cidrblock($address,'79.142.94.0/24','No access allowed from Kazakhstan (KZ-IP0282). ');
}
if(lmatch($address,'8','')) {
if(lmatch($address,'80','')) {
$ax += cidrblock($address,'80.78.20.104/29','No access allowed from Kazakhstan (KZ-IP0283). ');
$ax += cidrblock($address,'80.241.0.0/20','No access allowed from Kazakhstan (KZ-IP0284). ');
$ax += cidrblock($address,'80.241.32.0/20','No access allowed from Kazakhstan (KZ-IP0285). ');
$ax += cidrblock($address,'80.242.208.0/20','No access allowed from Kazakhstan (KZ-IP0286). ');
$ax += cidrblock($address,'80.249.16.0/20','No access allowed from Kazakhstan (KZ-IP0287). ');
$ax += cidrblock($address,'80.249.137.0/24','No access allowed from Kazakhstan (KZ-IP0288). ');
$ax += cidrblock($address,'80.249.138.0/23','No access allowed from Kazakhstan (KZ-IP0289). ');
$ax += cidrblock($address,'80.249.140.0/22','No access allowed from Kazakhstan (KZ-IP0290). ');
$ax += cidrblock($address,'80.249.152.0/21','No access allowed from Kazakhstan (KZ-IP0291). ');
}
if(lmatch($address,'81','')) {
$ax += cidrblock($address,'81.17.160.0/20','No access allowed from Kazakhstan (KZ-IP0292). ');
$ax += cidrblock($address,'81.18.32.0/20','No access allowed from Kazakhstan (KZ-IP0293). ');
$ax += cidrblock($address,'81.88.144.0/20','No access allowed from Kazakhstan (KZ-IP0294). ');
}
if(lmatch($address,'82','')) {
$ax += cidrblock($address,'82.115.32.0/19','No access allowed from Kazakhstan (KZ-IP0295). ');
$ax += cidrblock($address,'82.200.128.0/17','No access allowed from Kazakhstan (KZ-IP0296). ');
}
if(lmatch($address,'84','')) {
$ax += cidrblock($address,'84.240.192.0/18','No access allowed from Kazakhstan (KZ-IP0297). ');
}
if(lmatch($address,'85','')) {
$ax += cidrblock($address,'85.29.128.0/18','No access allowed from Kazakhstan (KZ-IP0298). ');
$ax += cidrblock($address,'85.117.96.0/19','No access allowed from Kazakhstan (KZ-IP0299). ');
$ax += cidrblock($address,'85.159.24.0/21','No access allowed from Kazakhstan (KZ-IP0300). ');
}
if(lmatch($address,'86','')) {
$ax += cidrblock($address,'86.107.128.0/23','No access allowed from Kazakhstan (KZ-IP0301). ');
$ax += cidrblock($address,'86.107.130.0/24','No access allowed from Kazakhstan (KZ-IP0302). ');
$ax += cidrblock($address,'86.107.132.0/22','No access allowed from Kazakhstan (KZ-IP0303). ');
$ax += cidrblock($address,'86.107.136.0/21','No access allowed from Kazakhstan (KZ-IP0304). ');
}
if(lmatch($address,'87','')) {
$ax += cidrblock($address,'87.76.32.0/19','No access allowed from Kazakhstan (KZ-IP0305). ');
$ax += cidrblock($address,'87.239.160.0/21','No access allowed from Kazakhstan (KZ-IP0306). ');
$ax += cidrblock($address,'87.243.8.0/21','No access allowed from Kazakhstan (KZ-IP0307). ');
$ax += cidrblock($address,'87.243.16.0/20','No access allowed from Kazakhstan (KZ-IP0308). ');
$ax += cidrblock($address,'87.243.32.0/19','No access allowed from Kazakhstan (KZ-IP0309). ');
$ax += cidrblock($address,'87.247.0.0/18','No access allowed from Kazakhstan (KZ-IP0310). ');
$ax += cidrblock($address,'87.255.192.0/19','No access allowed from Kazakhstan (KZ-IP0311). ');
}
if(lmatch($address,'88','')) {
$ax += cidrblock($address,'88.151.176.0/21','No access allowed from Kazakhstan (KZ-IP0312). ');
$ax += cidrblock($address,'88.204.128.0/17','No access allowed from Kazakhstan (KZ-IP0313). ');
}
if(lmatch($address,'89','')) {
$ax += cidrblock($address,'89.28.128.0/21','No access allowed from Kazakhstan (KZ-IP0314). ');
$ax += cidrblock($address,'89.33.112.0/22','No access allowed from Kazakhstan (KZ-IP0315). ');
$ax += cidrblock($address,'89.33.208.0/20','No access allowed from Kazakhstan (KZ-IP0316). ');
$ax += cidrblock($address,'89.35.252.0/22','No access allowed from Kazakhstan (KZ-IP0317). ');
$ax += cidrblock($address,'89.36.164.0/22','No access allowed from Kazakhstan (KZ-IP0318). ');
$ax += cidrblock($address,'89.36.200.0/22','No access allowed from Kazakhstan (KZ-IP0319). ');
$ax += cidrblock($address,'89.37.24.0/22','No access allowed from Kazakhstan (KZ-IP0320). ');
$ax += cidrblock($address,'89.37.220.0/22','No access allowed from Kazakhstan (KZ-IP0321). ');
$ax += cidrblock($address,'89.38.164.0/22','No access allowed from Kazakhstan (KZ-IP0322). ');
$ax += cidrblock($address,'89.40.48.0/20','No access allowed from Kazakhstan (KZ-IP0323). ');
$ax += cidrblock($address,'89.40.192.0/22','No access allowed from Kazakhstan (KZ-IP0324). ');
$ax += cidrblock($address,'89.42.60.0/22','No access allowed from Kazakhstan (KZ-IP0325). ');
$ax += cidrblock($address,'89.42.204.0/22','No access allowed from Kazakhstan (KZ-IP0326). ');
$ax += cidrblock($address,'89.43.20.0/22','No access allowed from Kazakhstan (KZ-IP0327). ');
$ax += cidrblock($address,'89.43.164.0/22','No access allowed from Kazakhstan (KZ-IP0328). ');
$ax += cidrblock($address,'89.44.12.0/22','No access allowed from Kazakhstan (KZ-IP0329). ');
$ax += cidrblock($address,'89.106.232.0/21','No access allowed from Kazakhstan (KZ-IP0330). ');
$ax += cidrblock($address,'89.107.96.0/21','No access allowed from Kazakhstan (KZ-IP0331). ');
$ax += cidrblock($address,'89.191.217.15/32','No access allowed from Kazakhstan (KZ-IP0332). ');
$ax += cidrblock($address,'89.218.0.0/16','No access allowed from Kazakhstan (KZ-IP0333). ');
$ax += cidrblock($address,'89.219.4.0/22','No access allowed from Kazakhstan (KZ-IP0334). ');
$ax += cidrblock($address,'89.219.8.0/21','No access allowed from Kazakhstan (KZ-IP0335). ');
$ax += cidrblock($address,'89.219.16.0/20','No access allowed from Kazakhstan (KZ-IP0336). ');
$ax += cidrblock($address,'89.219.32.0/22','No access allowed from Kazakhstan (KZ-IP0337). ');
$ax += cidrblock($address,'89.250.80.0/20','No access allowed from Kazakhstan (KZ-IP0338). ');
}
}
if(lmatch($address,'9','')) {
if(lmatch($address,'90','')) {
$ax += cidrblock($address,'90.143.16.0/21','No access allowed from Kazakhstan (KZ-IP0339). ');
$ax += cidrblock($address,'90.143.28.0/22','No access allowed from Kazakhstan (KZ-IP0340). ');
$ax += cidrblock($address,'90.143.32.0/19','No access allowed from Kazakhstan (KZ-IP0341). ');
$ax += cidrblock($address,'90.143.123.247/32','No access allowed from Kazakhstan (KZ-IP0342). ');
$ax += cidrblock($address,'90.143.128.0/19','No access allowed from Kazakhstan (KZ-IP0343). ');
$ax += cidrblock($address,'90.143.164.0/22','No access allowed from Kazakhstan (KZ-IP0344). ');
$ax += cidrblock($address,'90.143.168.0/21','No access allowed from Kazakhstan (KZ-IP0345). ');
$ax += cidrblock($address,'90.143.176.0/20','No access allowed from Kazakhstan (KZ-IP0346). ');
}
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.135.192.0/20','No access allowed from Kazakhstan (KZ-IP0347). ');
$ax += cidrblock($address,'91.147.80.0/20','No access allowed from Kazakhstan (KZ-IP0348). ');
$ax += cidrblock($address,'91.147.96.0/19','No access allowed from Kazakhstan (KZ-IP0349). ');
$ax += cidrblock($address,'91.185.0.0/19','No access allowed from Kazakhstan (KZ-IP0350). ');
$ax += cidrblock($address,'91.195.226.0/23','No access allowed from Kazakhstan (KZ-IP0351). ');
$ax += cidrblock($address,'91.198.63.0/24','No access allowed from Kazakhstan (KZ-IP0352). ');
$ax += cidrblock($address,'91.199.20.0/24','No access allowed from Kazakhstan (KZ-IP0353). ');
$ax += cidrblock($address,'91.201.214.0/23','No access allowed from Kazakhstan (KZ-IP0354). ');
$ax += cidrblock($address,'91.201.216.0/22','No access allowed from Kazakhstan (KZ-IP0355). ');
$ax += cidrblock($address,'91.203.20.0/22','No access allowed from Kazakhstan (KZ-IP0356). ');
$ax += cidrblock($address,'91.203.227.0/24','No access allowed from Kazakhstan (KZ-IP0357). ');
$ax += cidrblock($address,'91.206.88.0/23','No access allowed from Kazakhstan (KZ-IP0358). ');
$ax += cidrblock($address,'91.210.172.0/22','No access allowed from Kazakhstan (KZ-IP0359). ');
$ax += cidrblock($address,'91.214.174.0/24','No access allowed from Kazakhstan (KZ-IP0360). ');
$ax += cidrblock($address,'91.215.96.0/22','No access allowed from Kazakhstan (KZ-IP0361). ');
$ax += cidrblock($address,'91.215.136.0/23','No access allowed from Kazakhstan (KZ-IP0362). ');
$ax += cidrblock($address,'91.215.138.0/28','No access allowed from Kazakhstan (KZ-IP0363). ');
$ax += cidrblock($address,'91.215.138.17/32','No access allowed from Kazakhstan (KZ-IP0364). ');
$ax += cidrblock($address,'91.215.138.18/31','No access allowed from Kazakhstan (KZ-IP0365). ');
$ax += cidrblock($address,'91.215.138.20/30','No access allowed from Kazakhstan (KZ-IP0366). ');
$ax += cidrblock($address,'91.215.138.24/29','No access allowed from Kazakhstan (KZ-IP0367). ');
$ax += cidrblock($address,'91.215.138.32/27','No access allowed from Kazakhstan (KZ-IP0368). ');
$ax += cidrblock($address,'91.215.138.64/26','No access allowed from Kazakhstan (KZ-IP0369). ');
$ax += cidrblock($address,'91.215.138.128/25','No access allowed from Kazakhstan (KZ-IP0370). ');
$ax += cidrblock($address,'91.215.139.0/24','No access allowed from Kazakhstan (KZ-IP0371). ');
$ax += cidrblock($address,'91.216.178.0/24','No access allowed from Kazakhstan (KZ-IP0372). ');
$ax += cidrblock($address,'91.216.189.0/24','No access allowed from Kazakhstan (KZ-IP0373). ');
$ax += cidrblock($address,'91.216.220.0/24','No access allowed from Kazakhstan (KZ-IP0374). ');
$ax += cidrblock($address,'91.220.51.0/24','No access allowed from Kazakhstan (KZ-IP0375). ');
$ax += cidrblock($address,'91.222.88.0/22','No access allowed from Kazakhstan (KZ-IP0376). ');
$ax += cidrblock($address,'91.226.168.0/23','No access allowed from Kazakhstan (KZ-IP0377). ');
$ax += cidrblock($address,'91.227.144.0/22','No access allowed from Kazakhstan (KZ-IP0378). ');
$ax += cidrblock($address,'91.228.39.0/24','No access allowed from Kazakhstan (KZ-IP0379). ');
$ax += cidrblock($address,'91.228.192.0/24','No access allowed from Kazakhstan (KZ-IP0380). ');
$ax += cidrblock($address,'91.229.148.0/22','No access allowed from Kazakhstan (KZ-IP0381). ');
$ax += cidrblock($address,'91.235.176.0/22','No access allowed from Kazakhstan (KZ-IP0382). ');
$ax += cidrblock($address,'91.239.101.0/24','No access allowed from Kazakhstan (KZ-IP0383). ');
$ax += cidrblock($address,'91.239.192.0/24','No access allowed from Kazakhstan (KZ-IP0384). ');
$ax += cidrblock($address,'91.240.8.0/22','No access allowed from Kazakhstan (KZ-IP0385). ');
$ax += cidrblock($address,'91.244.96.0/20','No access allowed from Kazakhstan (KZ-IP0386). ');
$ax += cidrblock($address,'91.245.196.0/22','No access allowed from Kazakhstan (KZ-IP0387). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.46.0.0/15','No access allowed from Kazakhstan (KZ-IP0388). ');
$ax += cidrblock($address,'92.49.192.0/18','No access allowed from Kazakhstan (KZ-IP0389). ');
$ax += cidrblock($address,'92.55.160.0/19','No access allowed from Kazakhstan (KZ-IP0390). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.95.240.0/21','No access allowed from Kazakhstan (KZ-IP0391). ');
$ax += cidrblock($address,'93.170.36.0/22','No access allowed from Kazakhstan (KZ-IP0392). ');
$ax += cidrblock($address,'93.171.153.0/24','No access allowed from Kazakhstan (KZ-IP0393). ');
$ax += cidrblock($address,'93.185.64.0/20','No access allowed from Kazakhstan (KZ-IP0394). ');
$ax += cidrblock($address,'93.191.224.0/21','No access allowed from Kazakhstan (KZ-IP0395). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.103.240.0/20','No access allowed from Kazakhstan (KZ-IP0396). ');
$ax += cidrblock($address,'94.247.64.0/21','No access allowed from Kazakhstan (KZ-IP0397). ');
$ax += cidrblock($address,'94.247.128.0/21','No access allowed from Kazakhstan (KZ-IP0398). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.46.11.0/24','No access allowed from Kazakhstan (KZ-IP0399). ');
$ax += cidrblock($address,'95.46.145.0/24','No access allowed from Kazakhstan (KZ-IP0400). ');
$ax += cidrblock($address,'95.46.232.0/21','No access allowed from Kazakhstan (KZ-IP0401). ');
$ax += cidrblock($address,'95.47.188.0/24','No access allowed from Kazakhstan (KZ-IP0402). ');
$ax += cidrblock($address,'95.56.0.0/14','No access allowed from Kazakhstan (KZ-IP0403). ');
$ax += cidrblock($address,'95.141.128.0/20','No access allowed from Kazakhstan (KZ-IP0404). ');
$ax += cidrblock($address,'95.161.184.0/22','No access allowed from Kazakhstan (KZ-IP0405). ');
$ax += cidrblock($address,'95.161.224.0/26','No access allowed from Kazakhstan (KZ-IP0406). ');
$ax += cidrblock($address,'95.161.224.64/28','No access allowed from Kazakhstan (KZ-IP0407). ');
$ax += cidrblock($address,'95.161.224.80/30','No access allowed from Kazakhstan (KZ-IP0408). ');
$ax += cidrblock($address,'95.161.224.84/31','No access allowed from Kazakhstan (KZ-IP0409). ');
$ax += cidrblock($address,'95.161.224.87/32','No access allowed from Kazakhstan (KZ-IP0410). ');
$ax += cidrblock($address,'95.161.224.88/29','No access allowed from Kazakhstan (KZ-IP0411). ');
$ax += cidrblock($address,'95.161.224.96/27','No access allowed from Kazakhstan (KZ-IP0412). ');
$ax += cidrblock($address,'95.161.224.128/25','No access allowed from Kazakhstan (KZ-IP0413). ');
$ax += cidrblock($address,'95.161.225.0/24','No access allowed from Kazakhstan (KZ-IP0414). ');
$ax += cidrblock($address,'95.161.226.0/23','No access allowed from Kazakhstan (KZ-IP0415). ');
$ax += cidrblock($address,'95.182.0.0/20','No access allowed from Kazakhstan (KZ-IP0416). ');
$ax += cidrblock($address,'95.182.16.0/21','No access allowed from Kazakhstan (KZ-IP0417). ');
}
}
$ax += inmatch($query,'kztestkz','Test function. (KZ). ');
// End of KZ list
