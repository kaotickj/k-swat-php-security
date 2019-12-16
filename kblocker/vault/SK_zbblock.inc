<?php
// *php 5 fix
global $ax;
// Slovakia Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / SK-2018.65.634';
$ax += rmatch($hoster,'.sk','No access allowed from Slovakia (SK-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'103.66.67.128/25','No access allowed from Slovakia (SK-IP0001). ');
$ax += cidrblock($address,'103.69.157.0/25','No access allowed from Slovakia (SK-IP0002). ');
$ax += cidrblock($address,'104.132.74.0/24','No access allowed from Slovakia (SK-IP0003). ');
$ax += cidrblock($address,'109.71.64.0/21','No access allowed from Slovakia (SK-IP0004). ');
$ax += cidrblock($address,'109.74.144.0/20','No access allowed from Slovakia (SK-IP0005). ');
$ax += cidrblock($address,'109.205.243.0/24','No access allowed from Slovakia (SK-IP0006). ');
$ax += cidrblock($address,'109.230.0.0/18','No access allowed from Slovakia (SK-IP0007). ');
$ax += cidrblock($address,'109.236.112.0/20','No access allowed from Slovakia (SK-IP0008). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.0.68.0/24','No access allowed from Slovakia (SK-IP0009). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'134.19.136.0/21','No access allowed from Slovakia (SK-IP0010). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'141.8.147.48/28','No access allowed from Slovakia (SK-IP0011). ');
$ax += cidrblock($address,'141.136.48.0/21','No access allowed from Slovakia (SK-IP0012). ');
$ax += cidrblock($address,'144.36.194.0/23','No access allowed from Slovakia (SK-IP0013). ');
$ax += cidrblock($address,'144.36.196.0/24','No access allowed from Slovakia (SK-IP0014). ');
$ax += cidrblock($address,'144.36.200.0/23','No access allowed from Slovakia (SK-IP0015). ');
$ax += cidrblock($address,'144.36.202.0/24','No access allowed from Slovakia (SK-IP0016). ');
$ax += cidrblock($address,'145.255.144.0/20','No access allowed from Slovakia (SK-IP0017). ');
$ax += cidrblock($address,'147.175.0.0/16','No access allowed from Slovakia (SK-IP0018). ');
$ax += cidrblock($address,'147.213.0.0/16','No access allowed from Slovakia (SK-IP0019). ');
$ax += cidrblock($address,'147.232.0.0/16','No access allowed from Slovakia (SK-IP0020). ');
$ax += cidrblock($address,'149.7.225.0/24','No access allowed from Slovakia (SK-IP0021). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'151.236.224.0/20','No access allowed from Slovakia (SK-IP0022). ');
$ax += cidrblock($address,'154.84.173.0/24','No access allowed from Slovakia (SK-IP0023). ');
$ax += cidrblock($address,'155.254.192.0/24','No access allowed from Slovakia (SK-IP0024). ');
$ax += cidrblock($address,'156.67.205.64/26','No access allowed from Slovakia (SK-IP0025). ');
$ax += cidrblock($address,'158.193.0.0/16','No access allowed from Slovakia (SK-IP0026). ');
$ax += cidrblock($address,'158.195.0.0/16','No access allowed from Slovakia (SK-IP0027). ');
$ax += cidrblock($address,'158.197.0.0/16','No access allowed from Slovakia (SK-IP0028). ');
$ax += cidrblock($address,'158.255.24.0/21','No access allowed from Slovakia (SK-IP0029). ');
$ax += cidrblock($address,'158.255.248.0/21','No access allowed from Slovakia (SK-IP0030). ');
$ax += cidrblock($address,'159.180.17.0/24','No access allowed from Slovakia (SK-IP0031). ');
$ax += cidrblock($address,'159.253.104.0/21','No access allowed from Slovakia (SK-IP0032). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'164.40.168.0/21','No access allowed from Slovakia (SK-IP0033). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'176.10.40.0/21','No access allowed from Slovakia (SK-IP0034). ');
$ax += cidrblock($address,'176.61.192.0/18','No access allowed from Slovakia (SK-IP0035). ');
$ax += cidrblock($address,'176.101.176.0/21','No access allowed from Slovakia (SK-IP0036). ');
$ax += cidrblock($address,'176.102.96.0/20','No access allowed from Slovakia (SK-IP0037). ');
$ax += cidrblock($address,'176.102.112.0/21','No access allowed from Slovakia (SK-IP0038). ');
$ax += cidrblock($address,'176.106.184.0/21','No access allowed from Slovakia (SK-IP0039). ');
$ax += cidrblock($address,'176.107.16.0/20','No access allowed from Slovakia (SK-IP0040). ');
$ax += cidrblock($address,'176.109.56.0/21','No access allowed from Slovakia (SK-IP0041). ');
$ax += cidrblock($address,'176.112.176.0/20','No access allowed from Slovakia (SK-IP0042). ');
$ax += cidrblock($address,'176.116.96.0/19','No access allowed from Slovakia (SK-IP0043). ');
$ax += cidrblock($address,'176.118.96.0/20','No access allowed from Slovakia (SK-IP0044). ');
$ax += cidrblock($address,'178.18.64.0/20','No access allowed from Slovakia (SK-IP0045). ');
$ax += cidrblock($address,'178.23.88.0/21','No access allowed from Slovakia (SK-IP0046). ');
$ax += cidrblock($address,'178.40.0.0/15','No access allowed from Slovakia (SK-IP0047). ');
$ax += cidrblock($address,'178.143.0.0/16','No access allowed from Slovakia (SK-IP0048). ');
$ax += cidrblock($address,'178.253.128.0/18','No access allowed from Slovakia (SK-IP0049). ');
$ax += cidrblock($address,'179.61.175.0/28','No access allowed from Slovakia (SK-IP0050). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'185.1.34.0/24','No access allowed from Slovakia (SK-IP0051). ');
$ax += cidrblock($address,'185.2.42.0/24','No access allowed from Slovakia (SK-IP0052). ');
$ax += cidrblock($address,'185.2.43.128/25','No access allowed from Slovakia (SK-IP0053). ');
$ax += cidrblock($address,'185.9.112.0/22','No access allowed from Slovakia (SK-IP0054). ');
$ax += cidrblock($address,'185.14.116.0/22','No access allowed from Slovakia (SK-IP0055). ');
$ax += cidrblock($address,'185.18.64.0/22','No access allowed from Slovakia (SK-IP0056). ');
$ax += cidrblock($address,'185.19.72.0/22','No access allowed from Slovakia (SK-IP0057). ');
$ax += cidrblock($address,'185.22.176.0/22','No access allowed from Slovakia (SK-IP0058). ');
$ax += cidrblock($address,'185.22.212.0/22','No access allowed from Slovakia (SK-IP0059). ');
$ax += cidrblock($address,'185.23.112.0/22','No access allowed from Slovakia (SK-IP0060). ');
$ax += cidrblock($address,'185.24.101.0/24','No access allowed from Slovakia (SK-IP0061). ');
$ax += cidrblock($address,'185.25.248.0/22','No access allowed from Slovakia (SK-IP0062). ');
$ax += cidrblock($address,'185.28.100.0/24','No access allowed from Slovakia (SK-IP0063). ');
$ax += cidrblock($address,'185.28.101.0/27','No access allowed from Slovakia (SK-IP0064). ');
$ax += cidrblock($address,'185.28.101.32/29','No access allowed from Slovakia (SK-IP0065). ');
$ax += cidrblock($address,'185.28.101.40/30','No access allowed from Slovakia (SK-IP0066). ');
$ax += cidrblock($address,'185.28.101.44/32','No access allowed from Slovakia (SK-IP0067). ');
$ax += cidrblock($address,'185.28.101.46/31','No access allowed from Slovakia (SK-IP0068). ');
$ax += cidrblock($address,'185.28.101.48/28','No access allowed from Slovakia (SK-IP0069). ');
$ax += cidrblock($address,'185.28.101.64/26','No access allowed from Slovakia (SK-IP0070). ');
$ax += cidrblock($address,'185.28.101.128/25','No access allowed from Slovakia (SK-IP0071). ');
$ax += cidrblock($address,'185.28.102.0/23','No access allowed from Slovakia (SK-IP0072). ');
$ax += cidrblock($address,'185.28.124.0/22','No access allowed from Slovakia (SK-IP0073). ');
$ax += cidrblock($address,'185.28.144.0/22','No access allowed from Slovakia (SK-IP0074). ');
$ax += cidrblock($address,'185.29.156.0/22','No access allowed from Slovakia (SK-IP0075). ');
$ax += cidrblock($address,'185.30.120.0/22','No access allowed from Slovakia (SK-IP0076). ');
$ax += cidrblock($address,'185.37.240.0/22','No access allowed from Slovakia (SK-IP0077). ');
$ax += cidrblock($address,'185.42.4.0/22','No access allowed from Slovakia (SK-IP0078). ');
$ax += cidrblock($address,'185.43.112.0/22','No access allowed from Slovakia (SK-IP0079). ');
$ax += cidrblock($address,'185.48.248.0/22','No access allowed from Slovakia (SK-IP0080). ');
$ax += cidrblock($address,'185.50.151.0/24','No access allowed from Slovakia (SK-IP0081). ');
$ax += cidrblock($address,'185.50.212.0/22','No access allowed from Slovakia (SK-IP0082). ');
$ax += cidrblock($address,'185.58.100.0/22','No access allowed from Slovakia (SK-IP0083). ');
$ax += cidrblock($address,'185.59.184.0/22','No access allowed from Slovakia (SK-IP0084). ');
$ax += cidrblock($address,'185.61.16.0/22','No access allowed from Slovakia (SK-IP0085). ');
$ax += cidrblock($address,'185.63.156.0/22','No access allowed from Slovakia (SK-IP0086). ');
$ax += cidrblock($address,'185.65.220.0/22','No access allowed from Slovakia (SK-IP0087). ');
$ax += cidrblock($address,'185.66.200.0/22','No access allowed from Slovakia (SK-IP0088). ');
$ax += cidrblock($address,'185.69.48.0/22','No access allowed from Slovakia (SK-IP0089). ');
$ax += cidrblock($address,'185.69.104.0/22','No access allowed from Slovakia (SK-IP0090). ');
$ax += cidrblock($address,'185.70.0.0/22','No access allowed from Slovakia (SK-IP0091). ');
$ax += cidrblock($address,'185.72.71.0/25','No access allowed from Slovakia (SK-IP0092). ');
$ax += cidrblock($address,'185.74.196.0/22','No access allowed from Slovakia (SK-IP0093). ');
$ax += cidrblock($address,'185.76.8.0/24','No access allowed from Slovakia (SK-IP0094). ');
$ax += cidrblock($address,'185.77.144.0/22','No access allowed from Slovakia (SK-IP0095). ');
$ax += cidrblock($address,'185.78.152.0/22','No access allowed from Slovakia (SK-IP0096). ');
$ax += cidrblock($address,'185.85.36.0/22','No access allowed from Slovakia (SK-IP0097). ');
$ax += cidrblock($address,'185.87.12.0/22','No access allowed from Slovakia (SK-IP0098). ');
$ax += cidrblock($address,'185.90.164.0/22','No access allowed from Slovakia (SK-IP0099). ');
$ax += cidrblock($address,'185.91.200.0/22','No access allowed from Slovakia (SK-IP0100). ');
$ax += cidrblock($address,'185.94.156.0/22','No access allowed from Slovakia (SK-IP0101). ');
$ax += cidrblock($address,'185.98.208.0/22','No access allowed from Slovakia (SK-IP0102). ');
$ax += cidrblock($address,'185.101.140.0/22','No access allowed from Slovakia (SK-IP0103). ');
$ax += cidrblock($address,'185.103.144.0/22','No access allowed from Slovakia (SK-IP0104). ');
$ax += cidrblock($address,'185.110.140.0/22','No access allowed from Slovakia (SK-IP0105). ');
$ax += cidrblock($address,'185.110.144.0/22','No access allowed from Slovakia (SK-IP0106). ');
$ax += cidrblock($address,'185.113.44.0/22','No access allowed from Slovakia (SK-IP0107). ');
$ax += cidrblock($address,'185.121.64.0/22','No access allowed from Slovakia (SK-IP0108). ');
$ax += cidrblock($address,'185.122.52.0/22','No access allowed from Slovakia (SK-IP0109). ');
$ax += cidrblock($address,'185.125.224.14/32','No access allowed from Slovakia (SK-IP0110). ');
$ax += cidrblock($address,'185.125.226.14/32','No access allowed from Slovakia (SK-IP0111). ');
$ax += cidrblock($address,'185.125.226.54/32','No access allowed from Slovakia (SK-IP0112). ');
$ax += cidrblock($address,'185.126.196.0/22','No access allowed from Slovakia (SK-IP0113). ');
$ax += cidrblock($address,'185.130.220.0/22','No access allowed from Slovakia (SK-IP0114). ');
$ax += cidrblock($address,'185.133.60.0/22','No access allowed from Slovakia (SK-IP0115). ');
$ax += cidrblock($address,'185.134.188.0/22','No access allowed from Slovakia (SK-IP0116). ');
$ax += cidrblock($address,'185.134.212.0/22','No access allowed from Slovakia (SK-IP0117). ');
$ax += cidrblock($address,'185.139.224.0/22','No access allowed from Slovakia (SK-IP0118). ');
$ax += cidrblock($address,'185.140.28.0/22','No access allowed from Slovakia (SK-IP0119). ');
$ax += cidrblock($address,'185.140.40.0/22','No access allowed from Slovakia (SK-IP0120). ');
$ax += cidrblock($address,'185.142.48.0/22','No access allowed from Slovakia (SK-IP0121). ');
$ax += cidrblock($address,'185.144.96.0/24','No access allowed from Slovakia (SK-IP0122). ');
$ax += cidrblock($address,'185.144.164.0/22','No access allowed from Slovakia (SK-IP0123). ');
$ax += cidrblock($address,'185.147.25.0/24','No access allowed from Slovakia (SK-IP0124). ');
$ax += cidrblock($address,'185.151.0.0/22','No access allowed from Slovakia (SK-IP0125). ');
$ax += cidrblock($address,'185.152.28.0/22','No access allowed from Slovakia (SK-IP0126). ');
$ax += cidrblock($address,'185.152.112.0/22','No access allowed from Slovakia (SK-IP0127). ');
$ax += cidrblock($address,'185.152.196.0/22','No access allowed from Slovakia (SK-IP0128). ');
$ax += cidrblock($address,'185.155.48.0/22','No access allowed from Slovakia (SK-IP0129). ');
$ax += cidrblock($address,'185.156.128.0/22','No access allowed from Slovakia (SK-IP0130). ');
$ax += cidrblock($address,'185.160.108.0/22','No access allowed from Slovakia (SK-IP0131). ');
$ax += cidrblock($address,'185.161.172.0/22','No access allowed from Slovakia (SK-IP0132). ');
$ax += cidrblock($address,'185.162.76.0/22','No access allowed from Slovakia (SK-IP0133). ');
$ax += cidrblock($address,'185.164.37.64/26','No access allowed from Slovakia (SK-IP0134). ');
$ax += cidrblock($address,'185.165.36.0/22','No access allowed from Slovakia (SK-IP0135). ');
$ax += cidrblock($address,'185.165.140.0/22','No access allowed from Slovakia (SK-IP0136). ');
$ax += cidrblock($address,'185.166.52.0/22','No access allowed from Slovakia (SK-IP0137). ');
$ax += cidrblock($address,'185.171.140.0/22','No access allowed from Slovakia (SK-IP0138). ');
$ax += cidrblock($address,'185.172.104.0/22','No access allowed from Slovakia (SK-IP0139). ');
$ax += cidrblock($address,'185.175.132.0/22','No access allowed from Slovakia (SK-IP0140). ');
$ax += cidrblock($address,'185.175.188.0/22','No access allowed from Slovakia (SK-IP0141). ');
$ax += cidrblock($address,'185.176.72.0/22','No access allowed from Slovakia (SK-IP0142). ');
$ax += cidrblock($address,'185.177.4.0/22','No access allowed from Slovakia (SK-IP0143). ');
$ax += cidrblock($address,'185.177.8.0/22','No access allowed from Slovakia (SK-IP0144). ');
$ax += cidrblock($address,'185.180.136.0/21','No access allowed from Slovakia (SK-IP0145). ');
$ax += cidrblock($address,'185.183.232.0/22','No access allowed from Slovakia (SK-IP0146). ');
$ax += cidrblock($address,'185.184.28.0/22','No access allowed from Slovakia (SK-IP0147). ');
$ax += cidrblock($address,'185.188.188.0/22','No access allowed from Slovakia (SK-IP0148). ');
$ax += cidrblock($address,'185.188.236.0/22','No access allowed from Slovakia (SK-IP0149). ');
$ax += cidrblock($address,'185.201.236.0/22','No access allowed from Slovakia (SK-IP0150). ');
$ax += cidrblock($address,'185.211.36.0/22','No access allowed from Slovakia (SK-IP0151). ');
$ax += cidrblock($address,'185.213.144.0/22','No access allowed from Slovakia (SK-IP0152). ');
$ax += cidrblock($address,'185.214.192.0/22','No access allowed from Slovakia (SK-IP0153). ');
$ax += cidrblock($address,'185.216.20.0/22','No access allowed from Slovakia (SK-IP0154). ');
$ax += cidrblock($address,'185.216.164.0/22','No access allowed from Slovakia (SK-IP0155). ');
$ax += cidrblock($address,'185.218.28.0/22','No access allowed from Slovakia (SK-IP0156). ');
$ax += cidrblock($address,'185.220.120.0/22','No access allowed from Slovakia (SK-IP0157). ');
$ax += cidrblock($address,'185.227.168.0/22','No access allowed from Slovakia (SK-IP0158). ');
$ax += cidrblock($address,'185.228.212.0/22','No access allowed from Slovakia (SK-IP0159). ');
$ax += cidrblock($address,'185.231.176.0/22','No access allowed from Slovakia (SK-IP0160). ');
$ax += cidrblock($address,'185.234.248.0/22','No access allowed from Slovakia (SK-IP0161). ');
$ax += cidrblock($address,'185.235.200.0/22','No access allowed from Slovakia (SK-IP0162). ');
$ax += cidrblock($address,'185.242.20.0/24','No access allowed from Slovakia (SK-IP0163). ');
$ax += cidrblock($address,'185.242.56.0/22','No access allowed from Slovakia (SK-IP0164). ');
$ax += cidrblock($address,'185.242.188.0/22','No access allowed from Slovakia (SK-IP0165). ');
$ax += cidrblock($address,'185.245.85.0/24','No access allowed from Slovakia (SK-IP0166). ');
$ax += cidrblock($address,'185.246.60.0/22','No access allowed from Slovakia (SK-IP0167). ');
$ax += cidrblock($address,'188.72.112.0/24','No access allowed from Slovakia (SK-IP0168). ');
$ax += cidrblock($address,'188.112.64.0/18','No access allowed from Slovakia (SK-IP0169). ');
$ax += cidrblock($address,'188.120.0.0/19','No access allowed from Slovakia (SK-IP0170). ');
$ax += cidrblock($address,'188.121.160.0/19','No access allowed from Slovakia (SK-IP0171). ');
$ax += cidrblock($address,'188.123.96.0/20','No access allowed from Slovakia (SK-IP0172). ');
$ax += cidrblock($address,'188.123.112.0/21','No access allowed from Slovakia (SK-IP0173). ');
$ax += cidrblock($address,'188.123.120.0/22','No access allowed from Slovakia (SK-IP0174). ');
$ax += cidrblock($address,'188.123.124.0/24','No access allowed from Slovakia (SK-IP0175). ');
$ax += cidrblock($address,'188.123.126.0/23','No access allowed from Slovakia (SK-IP0176). ');
$ax += cidrblock($address,'188.167.0.0/16','No access allowed from Slovakia (SK-IP0177). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'191.101.100.0/28','No access allowed from Slovakia (SK-IP0178). ');
$ax += cidrblock($address,'192.108.125.0/24','No access allowed from Slovakia (SK-IP0179). ');
$ax += cidrblock($address,'192.108.130.0/23','No access allowed from Slovakia (SK-IP0180). ');
$ax += cidrblock($address,'192.108.132.0/22','No access allowed from Slovakia (SK-IP0181). ');
$ax += cidrblock($address,'192.108.136.0/21','No access allowed from Slovakia (SK-IP0182). ');
$ax += cidrblock($address,'192.108.144.0/20','No access allowed from Slovakia (SK-IP0183). ');
$ax += cidrblock($address,'192.108.160.0/21','No access allowed from Slovakia (SK-IP0184). ');
$ax += cidrblock($address,'192.108.168.0/22','No access allowed from Slovakia (SK-IP0185). ');
$ax += cidrblock($address,'192.108.172.0/23','No access allowed from Slovakia (SK-IP0186). ');
$ax += cidrblock($address,'192.108.174.0/24','No access allowed from Slovakia (SK-IP0187). ');
$ax += cidrblock($address,'193.28.8.0/24','No access allowed from Slovakia (SK-IP0188). ');
$ax += cidrblock($address,'193.58.192.0/22','No access allowed from Slovakia (SK-IP0189). ');
$ax += cidrblock($address,'193.58.196.0/23','No access allowed from Slovakia (SK-IP0190). ');
$ax += cidrblock($address,'193.87.0.0/16','No access allowed from Slovakia (SK-IP0191). ');
$ax += cidrblock($address,'193.93.72.0/22','No access allowed from Slovakia (SK-IP0192). ');
$ax += cidrblock($address,'193.105.142.0/24','No access allowed from Slovakia (SK-IP0193). ');
$ax += cidrblock($address,'193.108.132.0/23','No access allowed from Slovakia (SK-IP0194). ');
$ax += cidrblock($address,'193.109.117.0/24','No access allowed from Slovakia (SK-IP0195). ');
$ax += cidrblock($address,'193.110.186.0/23','No access allowed from Slovakia (SK-IP0196). ');
$ax += cidrblock($address,'193.111.96.0/22','No access allowed from Slovakia (SK-IP0197). ');
$ax += cidrblock($address,'193.148.46.0/24','No access allowed from Slovakia (SK-IP0198). ');
$ax += cidrblock($address,'193.150.72.0/22','No access allowed from Slovakia (SK-IP0199). ');
$ax += cidrblock($address,'193.187.56.0/21','No access allowed from Slovakia (SK-IP0200). ');
$ax += cidrblock($address,'193.193.170.0/24','No access allowed from Slovakia (SK-IP0201). ');
$ax += cidrblock($address,'193.200.9.0/24','No access allowed from Slovakia (SK-IP0202). ');
$ax += cidrblock($address,'193.200.143.0/24','No access allowed from Slovakia (SK-IP0203). ');
$ax += cidrblock($address,'194.0.45.0/24','No access allowed from Slovakia (SK-IP0204). ');
$ax += cidrblock($address,'194.1.0.0/17','No access allowed from Slovakia (SK-IP0205). ');
$ax += cidrblock($address,'194.1.128.0/20','No access allowed from Slovakia (SK-IP0206). ');
$ax += cidrblock($address,'194.1.157.0/24','No access allowed from Slovakia (SK-IP0207). ');
$ax += cidrblock($address,'194.1.172.0/22','No access allowed from Slovakia (SK-IP0208). ');
$ax += cidrblock($address,'194.1.185.0/24','No access allowed from Slovakia (SK-IP0209). ');
$ax += cidrblock($address,'194.1.191.0/24','No access allowed from Slovakia (SK-IP0210). ');
$ax += cidrblock($address,'194.1.215.0/24','No access allowed from Slovakia (SK-IP0211). ');
$ax += cidrblock($address,'194.1.216.0/24','No access allowed from Slovakia (SK-IP0212). ');
$ax += cidrblock($address,'194.1.222.0/23','No access allowed from Slovakia (SK-IP0213). ');
$ax += cidrblock($address,'194.1.224.0/21','No access allowed from Slovakia (SK-IP0214). ');
$ax += cidrblock($address,'194.8.238.0/23','No access allowed from Slovakia (SK-IP0215). ');
$ax += cidrblock($address,'194.30.187.0/24','No access allowed from Slovakia (SK-IP0216). ');
$ax += cidrblock($address,'194.88.194.0/23','No access allowed from Slovakia (SK-IP0217). ');
$ax += cidrblock($address,'194.145.206.0/23','No access allowed from Slovakia (SK-IP0218). ');
$ax += cidrblock($address,'194.154.224.0/19','No access allowed from Slovakia (SK-IP0219). ');
$ax += cidrblock($address,'194.160.0.0/16','No access allowed from Slovakia (SK-IP0220). ');
$ax += cidrblock($address,'195.3.168.0/22','No access allowed from Slovakia (SK-IP0221). ');
$ax += cidrblock($address,'195.5.110.0/24','No access allowed from Slovakia (SK-IP0222). ');
$ax += cidrblock($address,'195.12.128.0/19','No access allowed from Slovakia (SK-IP0223). ');
$ax += cidrblock($address,'195.20.160.0/19','No access allowed from Slovakia (SK-IP0224). ');
$ax += cidrblock($address,'195.28.64.0/18','No access allowed from Slovakia (SK-IP0225). ');
$ax += cidrblock($address,'195.28.128.0/19','No access allowed from Slovakia (SK-IP0226). ');
$ax += cidrblock($address,'195.46.64.0/19','No access allowed from Slovakia (SK-IP0227). ');
$ax += cidrblock($address,'195.49.188.0/22','No access allowed from Slovakia (SK-IP0228). ');
$ax += cidrblock($address,'195.62.16.0/23','No access allowed from Slovakia (SK-IP0229). ');
$ax += cidrblock($address,'195.68.230.0/23','No access allowed from Slovakia (SK-IP0230). ');
$ax += cidrblock($address,'195.68.234.0/23','No access allowed from Slovakia (SK-IP0231). ');
$ax += cidrblock($address,'195.72.0.0/19','No access allowed from Slovakia (SK-IP0232). ');
$ax += cidrblock($address,'195.78.44.0/23','No access allowed from Slovakia (SK-IP0233). ');
$ax += cidrblock($address,'195.80.160.0/19','No access allowed from Slovakia (SK-IP0234). ');
$ax += cidrblock($address,'195.91.0.0/17','No access allowed from Slovakia (SK-IP0235). ');
$ax += cidrblock($address,'195.98.0.0/19','No access allowed from Slovakia (SK-IP0236). ');
$ax += cidrblock($address,'195.98.128.0/19','No access allowed from Slovakia (SK-IP0237). ');
$ax += cidrblock($address,'195.146.0.0/22','No access allowed from Slovakia (SK-IP0238). ');
$ax += cidrblock($address,'195.146.4.0/23','No access allowed from Slovakia (SK-IP0239). ');
$ax += cidrblock($address,'195.146.6.0/24','No access allowed from Slovakia (SK-IP0240). ');
$ax += cidrblock($address,'195.146.8.0/21','No access allowed from Slovakia (SK-IP0241). ');
$ax += cidrblock($address,'195.146.16.0/20','No access allowed from Slovakia (SK-IP0242). ');
$ax += cidrblock($address,'195.146.128.0/19','No access allowed from Slovakia (SK-IP0243). ');
$ax += cidrblock($address,'195.160.182.0/23','No access allowed from Slovakia (SK-IP0244). ');
$ax += cidrblock($address,'195.168.0.0/17','No access allowed from Slovakia (SK-IP0245). ');
$ax += cidrblock($address,'195.168.128.0/18','No access allowed from Slovakia (SK-IP0246). ');
$ax += cidrblock($address,'195.168.192.0/20','No access allowed from Slovakia (SK-IP0247). ');
$ax += cidrblock($address,'195.168.208.0/21','No access allowed from Slovakia (SK-IP0248). ');
$ax += cidrblock($address,'195.168.216.0/24','No access allowed from Slovakia (SK-IP0249). ');
$ax += cidrblock($address,'195.168.217.0/25','No access allowed from Slovakia (SK-IP0250). ');
$ax += cidrblock($address,'195.168.217.128/28','No access allowed from Slovakia (SK-IP0251). ');
$ax += cidrblock($address,'195.168.217.144/29','No access allowed from Slovakia (SK-IP0252). ');
$ax += cidrblock($address,'195.168.217.160/27','No access allowed from Slovakia (SK-IP0253). ');
$ax += cidrblock($address,'195.168.217.192/26','No access allowed from Slovakia (SK-IP0254). ');
$ax += cidrblock($address,'195.168.218.0/23','No access allowed from Slovakia (SK-IP0255). ');
$ax += cidrblock($address,'195.168.220.0/22','No access allowed from Slovakia (SK-IP0256). ');
$ax += cidrblock($address,'195.168.224.0/19','No access allowed from Slovakia (SK-IP0257). ');
$ax += cidrblock($address,'195.181.248.0/22','No access allowed from Slovakia (SK-IP0258). ');
$ax += cidrblock($address,'195.210.28.0/23','No access allowed from Slovakia (SK-IP0259). ');
$ax += cidrblock($address,'195.212.136.0/30','No access allowed from Slovakia (SK-IP0260). ');
$ax += cidrblock($address,'195.242.185.0/24','No access allowed from Slovakia (SK-IP0261). ');
$ax += cidrblock($address,'195.245.78.0/23','No access allowed from Slovakia (SK-IP0262). ');
$ax += cidrblock($address,'195.245.233.0/24','No access allowed from Slovakia (SK-IP0263). ');
$ax += cidrblock($address,'196.245.148.0/22','No access allowed from Slovakia (SK-IP0264). ');
$ax += cidrblock($address,'198.27.113.68/30','No access allowed from Slovakia (SK-IP0265). ');
$ax += cidrblock($address,'199.189.86.247/32','No access allowed from Slovakia (SK-IP0266). ');
}
}
if(lmatch($address,'2','')) {
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'206.49.90.0/24','No access allowed from Slovakia (SK-IP0267). ');
$ax += cidrblock($address,'206.228.175.112/32','No access allowed from Slovakia (SK-IP0268). ');
}
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'212.5.192.0/19','No access allowed from Slovakia (SK-IP0269). ');
$ax += cidrblock($address,'212.22.78.0/24','No access allowed from Slovakia (SK-IP0270). ');
$ax += cidrblock($address,'212.26.160.0/19','No access allowed from Slovakia (SK-IP0271). ');
$ax += cidrblock($address,'212.37.64.0/19','No access allowed from Slovakia (SK-IP0272). ');
$ax += cidrblock($address,'212.55.224.0/19','No access allowed from Slovakia (SK-IP0273). ');
$ax += cidrblock($address,'212.57.32.0/21','No access allowed from Slovakia (SK-IP0274). ');
$ax += cidrblock($address,'212.81.0.0/19','No access allowed from Slovakia (SK-IP0275). ');
$ax += cidrblock($address,'212.89.224.0/19','No access allowed from Slovakia (SK-IP0276). ');
$ax += cidrblock($address,'212.197.0.0/17','No access allowed from Slovakia (SK-IP0277). ');
$ax += cidrblock($address,'212.232.16.0/21','No access allowed from Slovakia (SK-IP0278). ');
$ax += cidrblock($address,'213.41.57.50/32','No access allowed from Slovakia (SK-IP0279). ');
$ax += cidrblock($address,'213.81.128.0/17','No access allowed from Slovakia (SK-IP0280). ');
$ax += cidrblock($address,'213.108.120.0/21','No access allowed from Slovakia (SK-IP0281). ');
$ax += cidrblock($address,'213.151.192.0/18','No access allowed from Slovakia (SK-IP0282). ');
$ax += cidrblock($address,'213.160.160.0/19','No access allowed from Slovakia (SK-IP0283). ');
$ax += cidrblock($address,'213.181.128.0/19','No access allowed from Slovakia (SK-IP0284). ');
$ax += cidrblock($address,'213.184.118.192/26','No access allowed from Slovakia (SK-IP0285). ');
$ax += cidrblock($address,'213.206.136.217/32','No access allowed from Slovakia (SK-IP0286). ');
$ax += cidrblock($address,'213.215.64.0/18','No access allowed from Slovakia (SK-IP0287). ');
$ax += cidrblock($address,'217.12.48.0/20','No access allowed from Slovakia (SK-IP0288). ');
$ax += cidrblock($address,'217.23.240.0/20','No access allowed from Slovakia (SK-IP0289). ');
$ax += cidrblock($address,'217.31.32.0/20','No access allowed from Slovakia (SK-IP0290). ');
$ax += cidrblock($address,'217.66.191.0/24','No access allowed from Slovakia (SK-IP0291). ');
$ax += cidrblock($address,'217.67.16.0/20','No access allowed from Slovakia (SK-IP0292). ');
$ax += cidrblock($address,'217.73.16.0/20','No access allowed from Slovakia (SK-IP0293). ');
$ax += cidrblock($address,'217.75.64.0/19','No access allowed from Slovakia (SK-IP0294). ');
$ax += cidrblock($address,'217.118.96.0/20','No access allowed from Slovakia (SK-IP0295). ');
$ax += cidrblock($address,'217.119.112.0/20','No access allowed from Slovakia (SK-IP0296). ');
$ax += cidrblock($address,'217.144.16.0/20','No access allowed from Slovakia (SK-IP0297). ');
$ax += cidrblock($address,'217.145.192.0/20','No access allowed from Slovakia (SK-IP0298). ');
$ax += cidrblock($address,'217.172.144.0/20','No access allowed from Slovakia (SK-IP0299). ');
}
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.3.32.0/19','No access allowed from Slovakia (SK-IP0300). ');
$ax += cidrblock($address,'31.6.25.0/24','No access allowed from Slovakia (SK-IP0301). ');
$ax += cidrblock($address,'31.24.176.0/21','No access allowed from Slovakia (SK-IP0302). ');
$ax += cidrblock($address,'31.130.160.0/21','No access allowed from Slovakia (SK-IP0303). ');
$ax += cidrblock($address,'31.131.224.0/20','No access allowed from Slovakia (SK-IP0304). ');
$ax += cidrblock($address,'31.134.100.0/22','No access allowed from Slovakia (SK-IP0305). ');
$ax += cidrblock($address,'31.170.64.0/19','No access allowed from Slovakia (SK-IP0306). ');
$ax += cidrblock($address,'31.192.95.226/32','No access allowed from Slovakia (SK-IP0307). ');
$ax += cidrblock($address,'37.9.168.0/21','No access allowed from Slovakia (SK-IP0308). ');
$ax += cidrblock($address,'37.58.0.0/20','No access allowed from Slovakia (SK-IP0309). ');
$ax += cidrblock($address,'37.61.160.0/20','No access allowed from Slovakia (SK-IP0310). ');
$ax += cidrblock($address,'37.152.96.0/19','No access allowed from Slovakia (SK-IP0311). ');
$ax += cidrblock($address,'37.252.246.0/24','No access allowed from Slovakia (SK-IP0312). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'43.113.227.128/25','No access allowed from Slovakia (SK-IP0313). ');
$ax += cidrblock($address,'46.18.144.0/21','No access allowed from Slovakia (SK-IP0314). ');
$ax += cidrblock($address,'46.29.0.0/22','No access allowed from Slovakia (SK-IP0315). ');
$ax += cidrblock($address,'46.34.224.0/19','No access allowed from Slovakia (SK-IP0316). ');
$ax += cidrblock($address,'46.150.192.0/19','No access allowed from Slovakia (SK-IP0317). ');
$ax += cidrblock($address,'46.151.56.0/21','No access allowed from Slovakia (SK-IP0318). ');
$ax += cidrblock($address,'46.175.0.0/21','No access allowed from Slovakia (SK-IP0319). ');
$ax += cidrblock($address,'46.227.176.0/21','No access allowed from Slovakia (SK-IP0320). ');
$ax += cidrblock($address,'46.228.208.0/20','No access allowed from Slovakia (SK-IP0321). ');
$ax += cidrblock($address,'46.229.224.0/20','No access allowed from Slovakia (SK-IP0322). ');
$ax += cidrblock($address,'46.231.96.0/21','No access allowed from Slovakia (SK-IP0323). ');
$ax += cidrblock($address,'46.243.64.0/21','No access allowed from Slovakia (SK-IP0324). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.22.154.0/24','No access allowed from Slovakia (SK-IP0325). ');
$ax += cidrblock($address,'5.59.10.0/24','No access allowed from Slovakia (SK-IP0326). ');
$ax += cidrblock($address,'5.62.61.140/30','No access allowed from Slovakia (SK-IP0327). ');
$ax += cidrblock($address,'5.62.63.121/32','No access allowed from Slovakia (SK-IP0328). ');
$ax += cidrblock($address,'5.62.63.122/31','No access allowed from Slovakia (SK-IP0329). ');
$ax += cidrblock($address,'5.178.48.0/20','No access allowed from Slovakia (SK-IP0330). ');
$ax += cidrblock($address,'57.90.208.0/20','No access allowed from Slovakia (SK-IP0331). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.65.160.0/19','No access allowed from Slovakia (SK-IP0332). ');
$ax += cidrblock($address,'62.152.224.0/19','No access allowed from Slovakia (SK-IP0333). ');
$ax += cidrblock($address,'62.168.64.0/18','No access allowed from Slovakia (SK-IP0334). ');
$ax += cidrblock($address,'62.169.160.0/19','No access allowed from Slovakia (SK-IP0335). ');
$ax += cidrblock($address,'62.176.160.0/19','No access allowed from Slovakia (SK-IP0336). ');
$ax += cidrblock($address,'62.197.192.0/18','No access allowed from Slovakia (SK-IP0337). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.48.130.0/23','No access allowed from Slovakia (SK-IP0338). ');
$ax += cidrblock($address,'77.48.220.0/23','No access allowed from Slovakia (SK-IP0339). ');
$ax += cidrblock($address,'77.234.224.0/19','No access allowed from Slovakia (SK-IP0340). ');
$ax += cidrblock($address,'77.237.225.128/25','No access allowed from Slovakia (SK-IP0341). ');
$ax += cidrblock($address,'77.247.224.0/21','No access allowed from Slovakia (SK-IP0342). ');
$ax += cidrblock($address,'78.41.168.0/21','No access allowed from Slovakia (SK-IP0343). ');
$ax += cidrblock($address,'78.98.0.0/15','No access allowed from Slovakia (SK-IP0344). ');
$ax += cidrblock($address,'78.141.64.0/18','No access allowed from Slovakia (SK-IP0345). ');
}
if(lmatch($address,'8','')) {
if(lmatch($address,'80','')) {
$ax += cidrblock($address,'80.81.224.0/20','No access allowed from Slovakia (SK-IP0346). ');
$ax += cidrblock($address,'80.86.240.0/20','No access allowed from Slovakia (SK-IP0347). ');
$ax += cidrblock($address,'80.87.208.0/20','No access allowed from Slovakia (SK-IP0348). ');
$ax += cidrblock($address,'80.94.48.0/20','No access allowed from Slovakia (SK-IP0349). ');
$ax += cidrblock($address,'80.242.32.0/20','No access allowed from Slovakia (SK-IP0350). ');
$ax += cidrblock($address,'80.250.240.0/20','No access allowed from Slovakia (SK-IP0351). ');
}
if(lmatch($address,'81','')) {
$ax += cidrblock($address,'81.88.128.0/20','No access allowed from Slovakia (SK-IP0352). ');
$ax += cidrblock($address,'81.89.48.0/20','No access allowed from Slovakia (SK-IP0353). ');
$ax += cidrblock($address,'81.92.248.0/21','No access allowed from Slovakia (SK-IP0354). ');
$ax += cidrblock($address,'81.161.60.0/23','No access allowed from Slovakia (SK-IP0355). ');
$ax += cidrblock($address,'81.162.80.0/20','No access allowed from Slovakia (SK-IP0356). ');
}
if(lmatch($address,'82','')) {
$ax += cidrblock($address,'82.119.96.0/19','No access allowed from Slovakia (SK-IP0357). ');
$ax += cidrblock($address,'82.119.224.0/20','No access allowed from Slovakia (SK-IP0358). ');
}
if(lmatch($address,'83','')) {
$ax += cidrblock($address,'83.168.128.0/18','No access allowed from Slovakia (SK-IP0359). ');
}
if(lmatch($address,'84','')) {
$ax += cidrblock($address,'84.16.32.0/19','No access allowed from Slovakia (SK-IP0360). ');
$ax += cidrblock($address,'84.47.0.0/17','No access allowed from Slovakia (SK-IP0361). ');
$ax += cidrblock($address,'84.245.64.0/18','No access allowed from Slovakia (SK-IP0362). ');
}
if(lmatch($address,'85','')) {
$ax += cidrblock($address,'85.135.128.0/17','No access allowed from Slovakia (SK-IP0363). ');
$ax += cidrblock($address,'85.159.104.0/21','No access allowed from Slovakia (SK-IP0364). ');
$ax += cidrblock($address,'85.216.128.0/17','No access allowed from Slovakia (SK-IP0365). ');
$ax += cidrblock($address,'85.237.224.0/19','No access allowed from Slovakia (SK-IP0366). ');
$ax += cidrblock($address,'85.248.0.0/16','No access allowed from Slovakia (SK-IP0367). ');
}
if(lmatch($address,'86','')) {
$ax += cidrblock($address,'86.110.224.0/19','No access allowed from Slovakia (SK-IP0368). ');
}
if(lmatch($address,'87','')) {
$ax += cidrblock($address,'87.197.0.0/16','No access allowed from Slovakia (SK-IP0369). ');
$ax += cidrblock($address,'87.239.56.0/21','No access allowed from Slovakia (SK-IP0370). ');
$ax += cidrblock($address,'87.244.192.0/18','No access allowed from Slovakia (SK-IP0371). ');
}
if(lmatch($address,'88','')) {
$ax += cidrblock($address,'88.80.224.0/19','No access allowed from Slovakia (SK-IP0372). ');
$ax += cidrblock($address,'88.212.0.0/18','No access allowed from Slovakia (SK-IP0373). ');
}
if(lmatch($address,'89','')) {
$ax += cidrblock($address,'89.107.144.0/21','No access allowed from Slovakia (SK-IP0374). ');
$ax += cidrblock($address,'89.173.0.0/16','No access allowed from Slovakia (SK-IP0375). ');
}
}
if(lmatch($address,'9','')) {
if(lmatch($address,'90','')) {
$ax += cidrblock($address,'90.64.0.0/21','No access allowed from Slovakia (SK-IP0376). ');
$ax += cidrblock($address,'90.64.10.0/23','No access allowed from Slovakia (SK-IP0377). ');
$ax += cidrblock($address,'90.64.12.0/22','No access allowed from Slovakia (SK-IP0378). ');
$ax += cidrblock($address,'90.64.22.0/23','No access allowed from Slovakia (SK-IP0379). ');
$ax += cidrblock($address,'90.64.24.0/22','No access allowed from Slovakia (SK-IP0380). ');
$ax += cidrblock($address,'90.64.32.0/19','No access allowed from Slovakia (SK-IP0381). ');
$ax += cidrblock($address,'90.64.68.0/22','No access allowed from Slovakia (SK-IP0382). ');
$ax += cidrblock($address,'90.64.78.0/23','No access allowed from Slovakia (SK-IP0383). ');
$ax += cidrblock($address,'90.64.80.0/21','No access allowed from Slovakia (SK-IP0384). ');
$ax += cidrblock($address,'90.64.95.0/24','No access allowed from Slovakia (SK-IP0385). ');
$ax += cidrblock($address,'90.64.96.0/20','No access allowed from Slovakia (SK-IP0386). ');
$ax += cidrblock($address,'90.64.112.0/21','No access allowed from Slovakia (SK-IP0387). ');
$ax += cidrblock($address,'90.176.0.0/19','No access allowed from Slovakia (SK-IP0388). ');
}
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.127.0.0/16','No access allowed from Slovakia (SK-IP0389). ');
$ax += cidrblock($address,'91.148.0.0/18','No access allowed from Slovakia (SK-IP0390). ');
$ax += cidrblock($address,'91.191.64.0/18','No access allowed from Slovakia (SK-IP0391). ');
$ax += cidrblock($address,'91.199.31.0/24','No access allowed from Slovakia (SK-IP0392). ');
$ax += cidrblock($address,'91.208.41.0/24','No access allowed from Slovakia (SK-IP0393). ');
$ax += cidrblock($address,'91.209.247.0/24','No access allowed from Slovakia (SK-IP0394). ');
$ax += cidrblock($address,'91.210.180.0/22','No access allowed from Slovakia (SK-IP0395). ');
$ax += cidrblock($address,'91.212.112.0/24','No access allowed from Slovakia (SK-IP0396). ');
$ax += cidrblock($address,'91.217.32.0/23','No access allowed from Slovakia (SK-IP0397). ');
$ax += cidrblock($address,'91.219.132.0/22','No access allowed from Slovakia (SK-IP0398). ');
$ax += cidrblock($address,'91.220.237.0/24','No access allowed from Slovakia (SK-IP0399). ');
$ax += cidrblock($address,'91.221.4.0/23','No access allowed from Slovakia (SK-IP0400). ');
$ax += cidrblock($address,'91.221.110.0/23','No access allowed from Slovakia (SK-IP0401). ');
$ax += cidrblock($address,'91.221.112.0/23','No access allowed from Slovakia (SK-IP0402). ');
$ax += cidrblock($address,'91.222.104.0/22','No access allowed from Slovakia (SK-IP0403). ');
$ax += cidrblock($address,'91.223.69.0/24','No access allowed from Slovakia (SK-IP0404). ');
$ax += cidrblock($address,'91.223.173.0/24','No access allowed from Slovakia (SK-IP0405). ');
$ax += cidrblock($address,'91.223.209.0/24','No access allowed from Slovakia (SK-IP0406). ');
$ax += cidrblock($address,'91.224.42.0/23','No access allowed from Slovakia (SK-IP0407). ');
$ax += cidrblock($address,'91.226.112.0/22','No access allowed from Slovakia (SK-IP0408). ');
$ax += cidrblock($address,'91.227.224.0/22','No access allowed from Slovakia (SK-IP0409). ');
$ax += cidrblock($address,'91.228.164.0/22','No access allowed from Slovakia (SK-IP0410). ');
$ax += cidrblock($address,'91.228.244.0/23','No access allowed from Slovakia (SK-IP0411). ');
$ax += cidrblock($address,'91.229.28.0/23','No access allowed from Slovakia (SK-IP0412). ');
$ax += cidrblock($address,'91.229.36.0/22','No access allowed from Slovakia (SK-IP0413). ');
$ax += cidrblock($address,'91.230.44.0/23','No access allowed from Slovakia (SK-IP0414). ');
$ax += cidrblock($address,'91.232.218.0/23','No access allowed from Slovakia (SK-IP0415). ');
$ax += cidrblock($address,'91.232.220.0/22','No access allowed from Slovakia (SK-IP0416). ');
$ax += cidrblock($address,'91.233.248.0/24','No access allowed from Slovakia (SK-IP0417). ');
$ax += cidrblock($address,'91.235.52.0/22','No access allowed from Slovakia (SK-IP0418). ');
$ax += cidrblock($address,'91.236.64.0/21','No access allowed from Slovakia (SK-IP0419). ');
$ax += cidrblock($address,'91.236.82.0/24','No access allowed from Slovakia (SK-IP0420). ');
$ax += cidrblock($address,'91.237.168.0/23','No access allowed from Slovakia (SK-IP0421). ');
$ax += cidrblock($address,'91.237.170.0/24','No access allowed from Slovakia (SK-IP0422). ');
$ax += cidrblock($address,'91.240.245.0/24','No access allowed from Slovakia (SK-IP0423). ');
$ax += cidrblock($address,'91.243.122.0/24','No access allowed from Slovakia (SK-IP0424). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.52.0.0/18','No access allowed from Slovakia (SK-IP0425). ');
$ax += cidrblock($address,'92.60.48.0/20','No access allowed from Slovakia (SK-IP0426). ');
$ax += cidrblock($address,'92.71.92.0/23','No access allowed from Slovakia (SK-IP0427). ');
$ax += cidrblock($address,'92.240.224.0/19','No access allowed from Slovakia (SK-IP0428). ');
$ax += cidrblock($address,'92.245.0.0/19','No access allowed from Slovakia (SK-IP0429). ');
$ax += cidrblock($address,'92.245.192.0/19','No access allowed from Slovakia (SK-IP0430). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.171.155.0/24','No access allowed from Slovakia (SK-IP0431). ');
$ax += cidrblock($address,'93.171.214.0/24','No access allowed from Slovakia (SK-IP0432). ');
$ax += cidrblock($address,'93.174.176.0/21','No access allowed from Slovakia (SK-IP0433). ');
$ax += cidrblock($address,'93.184.64.0/20','No access allowed from Slovakia (SK-IP0434). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.124.144.0/21','No access allowed from Slovakia (SK-IP0435). ');
$ax += cidrblock($address,'94.136.128.0/19','No access allowed from Slovakia (SK-IP0436). ');
$ax += cidrblock($address,'94.228.80.0/20','No access allowed from Slovakia (SK-IP0437). ');
$ax += cidrblock($address,'94.229.32.0/20','No access allowed from Slovakia (SK-IP0438). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.47.178.0/23','No access allowed from Slovakia (SK-IP0439). ');
$ax += cidrblock($address,'95.102.0.0/15','No access allowed from Slovakia (SK-IP0440). ');
$ax += cidrblock($address,'95.105.128.0/17','No access allowed from Slovakia (SK-IP0441). ');
$ax += cidrblock($address,'95.131.128.0/21','No access allowed from Slovakia (SK-IP0442). ');
$ax += cidrblock($address,'95.170.224.0/19','No access allowed from Slovakia (SK-IP0443). ');
$ax += cidrblock($address,'95.210.41.0/24','No access allowed from Slovakia (SK-IP0444). ');
}
}
$ax += inmatch($query,'sktestsk','Test function. (SK). ');
// End of SK list
