<?php
// *php 5 fix
global $ax;
// Moldova Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / MD-2018.65.634';
$ax += rmatch($hoster,'.md','No access allowed from Moldova (MD-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'109.185.0.0/16','No access allowed from Moldova (MD-IP0001). ');
$ax += cidrblock($address,'109.198.32.0/19','No access allowed from Moldova (MD-IP0002). ');
$ax += cidrblock($address,'109.233.192.0/21','No access allowed from Moldova (MD-IP0003). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'141.8.147.112/29','No access allowed from Moldova (MD-IP0004). ');
$ax += cidrblock($address,'149.3.184.0/21','No access allowed from Moldova (MD-IP0005). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'154.56.2.0/24','No access allowed from Moldova (MD-IP0006). ');
$ax += cidrblock($address,'155.254.252.0/24','No access allowed from Moldova (MD-IP0007). ');
$ax += cidrblock($address,'156.67.1.128/26','No access allowed from Moldova (MD-IP0008). ');
$ax += cidrblock($address,'159.180.9.0/24','No access allowed from Moldova (MD-IP0009). ');
$ax += cidrblock($address,'159.253.124.0/22','No access allowed from Moldova (MD-IP0010). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'176.123.0.0/19','No access allowed from Moldova (MD-IP0011). ');
$ax += cidrblock($address,'178.17.160.0/23','No access allowed from Moldova (MD-IP0012). ');
$ax += cidrblock($address,'178.17.162.0/25','No access allowed from Moldova (MD-IP0013). ');
$ax += cidrblock($address,'178.17.162.128/27','No access allowed from Moldova (MD-IP0014). ');
$ax += cidrblock($address,'178.17.162.160/29','No access allowed from Moldova (MD-IP0015). ');
$ax += cidrblock($address,'178.17.162.176/28','No access allowed from Moldova (MD-IP0016). ');
$ax += cidrblock($address,'178.17.162.192/26','No access allowed from Moldova (MD-IP0017). ');
$ax += cidrblock($address,'178.17.163.0/24','No access allowed from Moldova (MD-IP0018). ');
$ax += cidrblock($address,'178.17.164.0/22','No access allowed from Moldova (MD-IP0019). ');
$ax += cidrblock($address,'178.17.168.0/21','No access allowed from Moldova (MD-IP0020). ');
$ax += cidrblock($address,'178.18.32.0/20','No access allowed from Moldova (MD-IP0021). ');
$ax += cidrblock($address,'178.76.64.0/18','No access allowed from Moldova (MD-IP0022). ');
$ax += cidrblock($address,'178.132.112.0/20','No access allowed from Moldova (MD-IP0023). ');
$ax += cidrblock($address,'178.132.128.0/18','No access allowed from Moldova (MD-IP0024). ');
$ax += cidrblock($address,'178.168.0.0/17','No access allowed from Moldova (MD-IP0025). ');
$ax += cidrblock($address,'178.171.40.0/23','No access allowed from Moldova (MD-IP0026). ');
$ax += cidrblock($address,'178.175.128.0/21','No access allowed from Moldova (MD-IP0027). ');
$ax += cidrblock($address,'178.175.136.0/23','No access allowed from Moldova (MD-IP0028). ');
$ax += cidrblock($address,'178.175.138.0/26','No access allowed from Moldova (MD-IP0029). ');
$ax += cidrblock($address,'178.175.138.64/28','No access allowed from Moldova (MD-IP0030). ');
$ax += cidrblock($address,'178.175.138.80/29','No access allowed from Moldova (MD-IP0031). ');
$ax += cidrblock($address,'178.175.138.88/31','No access allowed from Moldova (MD-IP0032). ');
$ax += cidrblock($address,'178.175.138.91/32','No access allowed from Moldova (MD-IP0033). ');
$ax += cidrblock($address,'178.175.138.92/30','No access allowed from Moldova (MD-IP0034). ');
$ax += cidrblock($address,'178.175.138.96/27','No access allowed from Moldova (MD-IP0035). ');
$ax += cidrblock($address,'178.175.138.128/25','No access allowed from Moldova (MD-IP0036). ');
$ax += cidrblock($address,'178.175.139.0/24','No access allowed from Moldova (MD-IP0037). ');
$ax += cidrblock($address,'178.175.140.0/22','No access allowed from Moldova (MD-IP0038). ');
$ax += cidrblock($address,'178.175.144.0/20','No access allowed from Moldova (MD-IP0039). ');
$ax += cidrblock($address,'178.175.160.0/19','No access allowed from Moldova (MD-IP0040). ');
$ax += cidrblock($address,'178.175.192.0/18','No access allowed from Moldova (MD-IP0041). ');
$ax += cidrblock($address,'178.236.188.0/22','No access allowed from Moldova (MD-IP0042). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'185.1.45.0/24','No access allowed from Moldova (MD-IP0043). ');
$ax += cidrblock($address,'185.1.78.0/24','No access allowed from Moldova (MD-IP0044). ');
$ax += cidrblock($address,'185.8.68.0/22','No access allowed from Moldova (MD-IP0045). ');
$ax += cidrblock($address,'185.10.20.0/22','No access allowed from Moldova (MD-IP0046). ');
$ax += cidrblock($address,'185.17.224.0/22','No access allowed from Moldova (MD-IP0047). ');
$ax += cidrblock($address,'185.28.104.0/22','No access allowed from Moldova (MD-IP0048). ');
$ax += cidrblock($address,'185.32.0.0/22','No access allowed from Moldova (MD-IP0049). ');
$ax += cidrblock($address,'185.33.104.0/22','No access allowed from Moldova (MD-IP0050). ');
$ax += cidrblock($address,'185.46.60.0/22','No access allowed from Moldova (MD-IP0051). ');
$ax += cidrblock($address,'185.47.45.64/26','No access allowed from Moldova (MD-IP0052). ');
$ax += cidrblock($address,'185.50.4.0/22','No access allowed from Moldova (MD-IP0053). ');
$ax += cidrblock($address,'185.57.44.0/22','No access allowed from Moldova (MD-IP0054). ');
$ax += cidrblock($address,'185.64.236.0/22','No access allowed from Moldova (MD-IP0055). ');
$ax += cidrblock($address,'185.70.188.0/22','No access allowed from Moldova (MD-IP0056). ');
$ax += cidrblock($address,'185.79.40.0/22','No access allowed from Moldova (MD-IP0057). ');
$ax += cidrblock($address,'185.96.176.0/22','No access allowed from Moldova (MD-IP0058). ');
$ax += cidrblock($address,'185.108.36.0/22','No access allowed from Moldova (MD-IP0059). ');
$ax += cidrblock($address,'185.108.136.0/22','No access allowed from Moldova (MD-IP0060). ');
$ax += cidrblock($address,'185.108.144.0/22','No access allowed from Moldova (MD-IP0061). ');
$ax += cidrblock($address,'185.108.152.0/22','No access allowed from Moldova (MD-IP0062). ');
$ax += cidrblock($address,'185.108.180.0/22','No access allowed from Moldova (MD-IP0063). ');
$ax += cidrblock($address,'185.121.120.0/22','No access allowed from Moldova (MD-IP0064). ');
$ax += cidrblock($address,'185.136.16.0/22','No access allowed from Moldova (MD-IP0065). ');
$ax += cidrblock($address,'185.147.48.0/22','No access allowed from Moldova (MD-IP0066). ');
$ax += cidrblock($address,'185.153.12.0/22','No access allowed from Moldova (MD-IP0067). ');
$ax += cidrblock($address,'185.161.216.0/22','No access allowed from Moldova (MD-IP0068). ');
$ax += cidrblock($address,'185.162.46.192/26','No access allowed from Moldova (MD-IP0069). ');
$ax += cidrblock($address,'185.162.84.0/22','No access allowed from Moldova (MD-IP0070). ');
$ax += cidrblock($address,'185.162.132.0/22','No access allowed from Moldova (MD-IP0071). ');
$ax += cidrblock($address,'185.162.140.0/22','No access allowed from Moldova (MD-IP0072). ');
$ax += cidrblock($address,'185.163.44.0/22','No access allowed from Moldova (MD-IP0073). ');
$ax += cidrblock($address,'185.163.192.0/22','No access allowed from Moldova (MD-IP0074). ');
$ax += cidrblock($address,'185.164.0.0/22','No access allowed from Moldova (MD-IP0075). ');
$ax += cidrblock($address,'185.164.48.0/22','No access allowed from Moldova (MD-IP0076). ');
$ax += cidrblock($address,'185.164.80.0/22','No access allowed from Moldova (MD-IP0077). ');
$ax += cidrblock($address,'185.165.240.0/22','No access allowed from Moldova (MD-IP0078). ');
$ax += cidrblock($address,'185.167.56.0/22','No access allowed from Moldova (MD-IP0079). ');
$ax += cidrblock($address,'185.167.132.0/22','No access allowed from Moldova (MD-IP0080). ');
$ax += cidrblock($address,'185.169.48.0/22','No access allowed from Moldova (MD-IP0081). ');
$ax += cidrblock($address,'185.170.108.0/22','No access allowed from Moldova (MD-IP0082). ');
$ax += cidrblock($address,'185.170.164.0/22','No access allowed from Moldova (MD-IP0083). ');
$ax += cidrblock($address,'185.170.184.0/22','No access allowed from Moldova (MD-IP0084). ');
$ax += cidrblock($address,'185.171.16.0/22','No access allowed from Moldova (MD-IP0085). ');
$ax += cidrblock($address,'185.171.68.0/22','No access allowed from Moldova (MD-IP0086). ');
$ax += cidrblock($address,'185.171.228.0/22','No access allowed from Moldova (MD-IP0087). ');
$ax += cidrblock($address,'185.172.28.0/22','No access allowed from Moldova (MD-IP0088). ');
$ax += cidrblock($address,'185.172.32.0/22','No access allowed from Moldova (MD-IP0089). ');
$ax += cidrblock($address,'185.172.88.0/22','No access allowed from Moldova (MD-IP0090). ');
$ax += cidrblock($address,'185.173.144.0/22','No access allowed from Moldova (MD-IP0091). ');
$ax += cidrblock($address,'185.173.244.0/22','No access allowed from Moldova (MD-IP0092). ');
$ax += cidrblock($address,'185.175.32.0/22','No access allowed from Moldova (MD-IP0093). ');
$ax += cidrblock($address,'185.175.80.0/22','No access allowed from Moldova (MD-IP0094). ');
$ax += cidrblock($address,'185.177.92.0/22','No access allowed from Moldova (MD-IP0095). ');
$ax += cidrblock($address,'185.177.124.0/22','No access allowed from Moldova (MD-IP0096). ');
$ax += cidrblock($address,'185.178.12.0/22','No access allowed from Moldova (MD-IP0097). ');
$ax += cidrblock($address,'185.180.100.0/22','No access allowed from Moldova (MD-IP0098). ');
$ax += cidrblock($address,'185.181.40.0/22','No access allowed from Moldova (MD-IP0099). ');
$ax += cidrblock($address,'185.181.48.0/22','No access allowed from Moldova (MD-IP0100). ');
$ax += cidrblock($address,'185.181.228.0/22','No access allowed from Moldova (MD-IP0101). ');
$ax += cidrblock($address,'185.182.76.0/22','No access allowed from Moldova (MD-IP0102). ');
$ax += cidrblock($address,'185.182.192.0/22','No access allowed from Moldova (MD-IP0103). ');
$ax += cidrblock($address,'185.183.32.0/22','No access allowed from Moldova (MD-IP0104). ');
$ax += cidrblock($address,'185.183.80.0/22','No access allowed from Moldova (MD-IP0105). ');
$ax += cidrblock($address,'185.183.136.0/22','No access allowed from Moldova (MD-IP0106). ');
$ax += cidrblock($address,'185.184.244.0/22','No access allowed from Moldova (MD-IP0107). ');
$ax += cidrblock($address,'185.185.12.0/22','No access allowed from Moldova (MD-IP0108). ');
$ax += cidrblock($address,'185.187.32.0/22','No access allowed from Moldova (MD-IP0109). ');
$ax += cidrblock($address,'185.189.68.0/22','No access allowed from Moldova (MD-IP0110). ');
$ax += cidrblock($address,'185.190.60.0/22','No access allowed from Moldova (MD-IP0111). ');
$ax += cidrblock($address,'185.191.168.0/22','No access allowed from Moldova (MD-IP0112). ');
$ax += cidrblock($address,'185.193.28.0/22','No access allowed from Moldova (MD-IP0113). ');
$ax += cidrblock($address,'185.193.96.0/22','No access allowed from Moldova (MD-IP0114). ');
$ax += cidrblock($address,'185.195.4.0/22','No access allowed from Moldova (MD-IP0115). ');
$ax += cidrblock($address,'185.195.160.0/22','No access allowed from Moldova (MD-IP0116). ');
$ax += cidrblock($address,'185.195.184.0/22','No access allowed from Moldova (MD-IP0117). ');
$ax += cidrblock($address,'185.196.192.0/21','No access allowed from Moldova (MD-IP0118). ');
$ax += cidrblock($address,'185.197.120.0/22','No access allowed from Moldova (MD-IP0119). ');
$ax += cidrblock($address,'185.198.44.0/22','No access allowed from Moldova (MD-IP0120). ');
$ax += cidrblock($address,'185.198.212.0/22','No access allowed from Moldova (MD-IP0121). ');
$ax += cidrblock($address,'185.199.20.0/22','No access allowed from Moldova (MD-IP0122). ');
$ax += cidrblock($address,'185.202.88.0/22','No access allowed from Moldova (MD-IP0123). ');
$ax += cidrblock($address,'185.203.100.0/22','No access allowed from Moldova (MD-IP0124). ');
$ax += cidrblock($address,'185.204.28.0/22','No access allowed from Moldova (MD-IP0125). ');
$ax += cidrblock($address,'185.204.140.0/22','No access allowed from Moldova (MD-IP0126). ');
$ax += cidrblock($address,'185.204.236.0/22','No access allowed from Moldova (MD-IP0127). ');
$ax += cidrblock($address,'185.206.72.0/22','No access allowed from Moldova (MD-IP0128). ');
$ax += cidrblock($address,'185.207.180.0/22','No access allowed from Moldova (MD-IP0129). ');
$ax += cidrblock($address,'185.207.236.0/22','No access allowed from Moldova (MD-IP0130). ');
$ax += cidrblock($address,'185.208.128.0/22','No access allowed from Moldova (MD-IP0131). ');
$ax += cidrblock($address,'185.208.248.0/22','No access allowed from Moldova (MD-IP0132). ');
$ax += cidrblock($address,'185.212.8.0/22','No access allowed from Moldova (MD-IP0133). ');
$ax += cidrblock($address,'185.212.140.0/22','No access allowed from Moldova (MD-IP0134). ');
$ax += cidrblock($address,'185.213.72.0/22','No access allowed from Moldova (MD-IP0135). ');
$ax += cidrblock($address,'185.220.252.0/22','No access allowed from Moldova (MD-IP0136). ');
$ax += cidrblock($address,'185.222.128.0/22','No access allowed from Moldova (MD-IP0137). ');
$ax += cidrblock($address,'185.222.220.0/22','No access allowed from Moldova (MD-IP0138). ');
$ax += cidrblock($address,'185.223.168.0/22','No access allowed from Moldova (MD-IP0139). ');
$ax += cidrblock($address,'185.224.84.0/22','No access allowed from Moldova (MD-IP0140). ');
$ax += cidrblock($address,'185.225.128.0/22','No access allowed from Moldova (MD-IP0141). ');
$ax += cidrblock($address,'185.225.144.0/22','No access allowed from Moldova (MD-IP0142). ');
$ax += cidrblock($address,'185.226.12.0/22','No access allowed from Moldova (MD-IP0143). ');
$ax += cidrblock($address,'185.226.252.0/22','No access allowed from Moldova (MD-IP0144). ');
$ax += cidrblock($address,'185.227.72.0/22','No access allowed from Moldova (MD-IP0145). ');
$ax += cidrblock($address,'185.227.244.0/22','No access allowed from Moldova (MD-IP0146). ');
$ax += cidrblock($address,'185.228.128.0/22','No access allowed from Moldova (MD-IP0147). ');
$ax += cidrblock($address,'185.228.224.0/22','No access allowed from Moldova (MD-IP0148). ');
$ax += cidrblock($address,'185.229.104.0/22','No access allowed from Moldova (MD-IP0149). ');
$ax += cidrblock($address,'185.230.248.0/22','No access allowed from Moldova (MD-IP0150). ');
$ax += cidrblock($address,'185.232.19.0/24','No access allowed from Moldova (MD-IP0151). ');
$ax += cidrblock($address,'185.233.144.0/22','No access allowed from Moldova (MD-IP0152). ');
$ax += cidrblock($address,'185.234.11.0/24','No access allowed from Moldova (MD-IP0153). ');
$ax += cidrblock($address,'185.236.60.0/22','No access allowed from Moldova (MD-IP0154). ');
$ax += cidrblock($address,'185.236.72.0/22','No access allowed from Moldova (MD-IP0155). ');
$ax += cidrblock($address,'185.237.36.0/22','No access allowed from Moldova (MD-IP0156). ');
$ax += cidrblock($address,'185.237.60.0/22','No access allowed from Moldova (MD-IP0157). ');
$ax += cidrblock($address,'185.237.196.0/22','No access allowed from Moldova (MD-IP0158). ');
$ax += cidrblock($address,'185.238.8.0/22','No access allowed from Moldova (MD-IP0159). ');
$ax += cidrblock($address,'185.238.220.0/22','No access allowed from Moldova (MD-IP0160). ');
$ax += cidrblock($address,'185.239.240.0/22','No access allowed from Moldova (MD-IP0161). ');
$ax += cidrblock($address,'185.240.16.0/22','No access allowed from Moldova (MD-IP0162). ');
$ax += cidrblock($address,'185.240.196.0/22','No access allowed from Moldova (MD-IP0163). ');
$ax += cidrblock($address,'185.241.164.0/22','No access allowed from Moldova (MD-IP0164). ');
$ax += cidrblock($address,'185.241.208.0/22','No access allowed from Moldova (MD-IP0165). ');
$ax += cidrblock($address,'185.243.140.0/22','No access allowed from Moldova (MD-IP0166). ');
$ax += cidrblock($address,'185.244.136.0/22','No access allowed from Moldova (MD-IP0167). ');
$ax += cidrblock($address,'185.244.176.0/22','No access allowed from Moldova (MD-IP0168). ');
$ax += cidrblock($address,'185.244.220.0/22','No access allowed from Moldova (MD-IP0169). ');
$ax += cidrblock($address,'185.245.4.0/22','No access allowed from Moldova (MD-IP0170). ');
$ax += cidrblock($address,'185.245.112.0/22','No access allowed from Moldova (MD-IP0171). ');
$ax += cidrblock($address,'185.245.236.0/22','No access allowed from Moldova (MD-IP0172). ');
$ax += cidrblock($address,'185.247.156.0/22','No access allowed from Moldova (MD-IP0173). ');
$ax += cidrblock($address,'188.0.224.0/19','No access allowed from Moldova (MD-IP0174). ');
$ax += cidrblock($address,'188.72.110.0/24','No access allowed from Moldova (MD-IP0175). ');
$ax += cidrblock($address,'188.94.80.0/21','No access allowed from Moldova (MD-IP0176). ');
$ax += cidrblock($address,'188.130.180.0/23','No access allowed from Moldova (MD-IP0177). ');
$ax += cidrblock($address,'188.131.0.0/17','No access allowed from Moldova (MD-IP0178). ');
$ax += cidrblock($address,'188.138.128.0/17','No access allowed from Moldova (MD-IP0179). ');
$ax += cidrblock($address,'188.191.208.0/21','No access allowed from Moldova (MD-IP0180). ');
$ax += cidrblock($address,'188.208.96.0/22','No access allowed from Moldova (MD-IP0181). ');
$ax += cidrblock($address,'188.208.104.0/22','No access allowed from Moldova (MD-IP0182). ');
$ax += cidrblock($address,'188.208.112.0/22','No access allowed from Moldova (MD-IP0183). ');
$ax += cidrblock($address,'188.208.120.0/21','No access allowed from Moldova (MD-IP0184). ');
$ax += cidrblock($address,'188.208.192.0/22','No access allowed from Moldova (MD-IP0185). ');
$ax += cidrblock($address,'188.208.204.0/22','No access allowed from Moldova (MD-IP0186). ');
$ax += cidrblock($address,'188.209.216.0/21','No access allowed from Moldova (MD-IP0187). ');
$ax += cidrblock($address,'188.209.224.0/19','No access allowed from Moldova (MD-IP0188). ');
$ax += cidrblock($address,'188.210.240.0/21','No access allowed from Moldova (MD-IP0189). ');
$ax += cidrblock($address,'188.210.248.0/22','No access allowed from Moldova (MD-IP0190). ');
$ax += cidrblock($address,'188.211.172.0/22','No access allowed from Moldova (MD-IP0191). ');
$ax += cidrblock($address,'188.212.0.0/22','No access allowed from Moldova (MD-IP0192). ');
$ax += cidrblock($address,'188.212.8.0/21','No access allowed from Moldova (MD-IP0193). ');
$ax += cidrblock($address,'188.212.24.0/21','No access allowed from Moldova (MD-IP0194). ');
$ax += cidrblock($address,'188.212.40.0/21','No access allowed from Moldova (MD-IP0195). ');
$ax += cidrblock($address,'188.212.112.0/22','No access allowed from Moldova (MD-IP0196). ');
$ax += cidrblock($address,'188.212.157.0/24','No access allowed from Moldova (MD-IP0197). ');
$ax += cidrblock($address,'188.213.36.0/22','No access allowed from Moldova (MD-IP0198). ');
$ax += cidrblock($address,'188.213.52.0/22','No access allowed from Moldova (MD-IP0199). ');
$ax += cidrblock($address,'188.213.84.0/22','No access allowed from Moldova (MD-IP0200). ');
$ax += cidrblock($address,'188.213.88.0/21','No access allowed from Moldova (MD-IP0201). ');
$ax += cidrblock($address,'188.213.220.0/22','No access allowed from Moldova (MD-IP0202). ');
$ax += cidrblock($address,'188.213.236.0/22','No access allowed from Moldova (MD-IP0203). ');
$ax += cidrblock($address,'188.213.244.0/22','No access allowed from Moldova (MD-IP0204). ');
$ax += cidrblock($address,'188.214.60.0/22','No access allowed from Moldova (MD-IP0205). ');
$ax += cidrblock($address,'188.214.136.0/22','No access allowed from Moldova (MD-IP0206). ');
$ax += cidrblock($address,'188.214.144.0/22','No access allowed from Moldova (MD-IP0207). ');
$ax += cidrblock($address,'188.214.200.0/21','No access allowed from Moldova (MD-IP0208). ');
$ax += cidrblock($address,'188.214.228.0/22','No access allowed from Moldova (MD-IP0209). ');
$ax += cidrblock($address,'188.215.236.0/22','No access allowed from Moldova (MD-IP0210). ');
$ax += cidrblock($address,'188.215.252.0/22','No access allowed from Moldova (MD-IP0211). ');
$ax += cidrblock($address,'188.237.0.0/16','No access allowed from Moldova (MD-IP0212). ');
$ax += cidrblock($address,'188.240.70.0/24','No access allowed from Moldova (MD-IP0213). ');
$ax += cidrblock($address,'188.240.96.0/19','No access allowed from Moldova (MD-IP0214). ');
$ax += cidrblock($address,'188.244.16.0/20','No access allowed from Moldova (MD-IP0215). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'191.96.60.0/23','No access allowed from Moldova (MD-IP0216). ');
$ax += cidrblock($address,'191.96.113.0/24','No access allowed from Moldova (MD-IP0217). ');
$ax += cidrblock($address,'193.16.111.0/24','No access allowed from Moldova (MD-IP0218). ');
$ax += cidrblock($address,'193.17.78.0/24','No access allowed from Moldova (MD-IP0219). ');
$ax += cidrblock($address,'193.33.92.0/23','No access allowed from Moldova (MD-IP0220). ');
$ax += cidrblock($address,'193.84.183.0/24','No access allowed from Moldova (MD-IP0221). ');
$ax += cidrblock($address,'193.105.83.0/24','No access allowed from Moldova (MD-IP0222). ');
$ax += cidrblock($address,'193.107.96.0/22','No access allowed from Moldova (MD-IP0223). ');
$ax += cidrblock($address,'193.230.248.0/24','No access allowed from Moldova (MD-IP0224). ');
$ax += cidrblock($address,'193.239.182.0/23','No access allowed from Moldova (MD-IP0225). ');
$ax += cidrblock($address,'193.242.144.0/24','No access allowed from Moldova (MD-IP0226). ');
$ax += cidrblock($address,'193.243.132.0/23','No access allowed from Moldova (MD-IP0227). ');
$ax += cidrblock($address,'194.28.76.0/22','No access allowed from Moldova (MD-IP0228). ');
$ax += cidrblock($address,'194.31.42.0/24','No access allowed from Moldova (MD-IP0229). ');
$ax += cidrblock($address,'194.114.144.0/24','No access allowed from Moldova (MD-IP0230). ');
$ax += cidrblock($address,'194.143.128.0/23','No access allowed from Moldova (MD-IP0231). ');
$ax += cidrblock($address,'194.165.39.0/24','No access allowed from Moldova (MD-IP0232). ');
$ax += cidrblock($address,'194.247.52.0/24','No access allowed from Moldova (MD-IP0233). ');
$ax += cidrblock($address,'194.247.164.0/23','No access allowed from Moldova (MD-IP0234). ');
$ax += cidrblock($address,'195.22.224.0/19','No access allowed from Moldova (MD-IP0235). ');
$ax += cidrblock($address,'195.93.218.0/23','No access allowed from Moldova (MD-IP0236). ');
$ax += cidrblock($address,'195.138.96.0/19','No access allowed from Moldova (MD-IP0237). ');
$ax += cidrblock($address,'195.178.106.0/24','No access allowed from Moldova (MD-IP0238). ');
$ax += cidrblock($address,'195.226.210.0/24','No access allowed from Moldova (MD-IP0239). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'212.0.192.0/19','No access allowed from Moldova (MD-IP0240). ');
$ax += cidrblock($address,'212.28.64.0/19','No access allowed from Moldova (MD-IP0241). ');
$ax += cidrblock($address,'212.56.192.0/19','No access allowed from Moldova (MD-IP0242). ');
$ax += cidrblock($address,'213.5.20.0/22','No access allowed from Moldova (MD-IP0243). ');
$ax += cidrblock($address,'217.12.112.0/20','No access allowed from Moldova (MD-IP0244). ');
$ax += cidrblock($address,'217.19.208.0/21','No access allowed from Moldova (MD-IP0245). ');
$ax += cidrblock($address,'217.19.216.0/23','No access allowed from Moldova (MD-IP0246). ');
$ax += cidrblock($address,'217.19.218.0/24','No access allowed from Moldova (MD-IP0247). ');
$ax += cidrblock($address,'217.19.220.0/23','No access allowed from Moldova (MD-IP0248). ');
$ax += cidrblock($address,'217.19.223.0/24','No access allowed from Moldova (MD-IP0249). ');
$ax += cidrblock($address,'217.26.144.0/20','No access allowed from Moldova (MD-IP0250). ');
$ax += cidrblock($address,'217.26.160.0/20','No access allowed from Moldova (MD-IP0251). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.14.180.0/22','No access allowed from Moldova (MD-IP0252). ');
$ax += cidrblock($address,'31.31.0.0/19','No access allowed from Moldova (MD-IP0253). ');
$ax += cidrblock($address,'31.131.0.0/21','No access allowed from Moldova (MD-IP0254). ');
$ax += cidrblock($address,'31.148.132.0/23','No access allowed from Moldova (MD-IP0255). ');
$ax += cidrblock($address,'37.26.128.0/20','No access allowed from Moldova (MD-IP0256). ');
$ax += cidrblock($address,'37.34.96.0/19','No access allowed from Moldova (MD-IP0257). ');
$ax += cidrblock($address,'37.75.16.0/20','No access allowed from Moldova (MD-IP0258). ');
$ax += cidrblock($address,'37.75.64.0/18','No access allowed from Moldova (MD-IP0259). ');
$ax += cidrblock($address,'37.156.69.0/24','No access allowed from Moldova (MD-IP0260). ');
$ax += cidrblock($address,'37.156.70.0/24','No access allowed from Moldova (MD-IP0261). ');
$ax += cidrblock($address,'37.233.0.0/18','No access allowed from Moldova (MD-IP0262). ');
$ax += cidrblock($address,'37.246.0.0/16','No access allowed from Moldova (MD-IP0263). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'46.55.0.0/17','No access allowed from Moldova (MD-IP0264). ');
$ax += cidrblock($address,'46.161.63.0/25','No access allowed from Moldova (MD-IP0265). ');
$ax += cidrblock($address,'46.166.0.0/18','No access allowed from Moldova (MD-IP0266). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.32.168.0/21','No access allowed from Moldova (MD-IP0267). ');
$ax += cidrblock($address,'5.56.64.0/18','No access allowed from Moldova (MD-IP0268). ');
$ax += cidrblock($address,'5.62.61.20/30','No access allowed from Moldova (MD-IP0269). ');
$ax += cidrblock($address,'5.62.63.13/32','No access allowed from Moldova (MD-IP0270). ');
$ax += cidrblock($address,'5.62.63.14/31','No access allowed from Moldova (MD-IP0271). ');
$ax += cidrblock($address,'5.154.190.0/23','No access allowed from Moldova (MD-IP0272). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.221.64.0/18','No access allowed from Moldova (MD-IP0273). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.89.192.0/18','No access allowed from Moldova (MD-IP0274). ');
$ax += cidrblock($address,'77.235.96.0/19','No access allowed from Moldova (MD-IP0275). ');
$ax += cidrblock($address,'78.24.48.0/21','No access allowed from Moldova (MD-IP0276). ');
$ax += cidrblock($address,'79.140.160.0/20','No access allowed from Moldova (MD-IP0277). ');
$ax += cidrblock($address,'79.170.224.0/21','No access allowed from Moldova (MD-IP0278). ');
}
if(lmatch($address,'8','')) {
if(lmatch($address,'80','')) {
$ax += cidrblock($address,'80.94.240.0/20','No access allowed from Moldova (MD-IP0279). ');
$ax += cidrblock($address,'80.245.80.0/20','No access allowed from Moldova (MD-IP0280). ');
}
if(lmatch($address,'81','')) {
$ax += cidrblock($address,'81.162.128.0/18','No access allowed from Moldova (MD-IP0281). ');
$ax += cidrblock($address,'81.180.66.0/24','No access allowed from Moldova (MD-IP0282). ');
$ax += cidrblock($address,'81.180.84.0/23','No access allowed from Moldova (MD-IP0283). ');
}
if(lmatch($address,'83','')) {
$ax += cidrblock($address,'83.143.68.0/22','No access allowed from Moldova (MD-IP0284). ');
$ax += cidrblock($address,'83.166.232.0/22','No access allowed from Moldova (MD-IP0285). ');
$ax += cidrblock($address,'83.166.236.0/24','No access allowed from Moldova (MD-IP0286). ');
$ax += cidrblock($address,'83.218.192.0/19','No access allowed from Moldova (MD-IP0287). ');
}
if(lmatch($address,'84','')) {
$ax += cidrblock($address,'84.234.48.0/20','No access allowed from Moldova (MD-IP0288). ');
$ax += cidrblock($address,'84.247.44.0/23','No access allowed from Moldova (MD-IP0289). ');
}
if(lmatch($address,'85','')) {
$ax += cidrblock($address,'85.204.109.0/24','No access allowed from Moldova (MD-IP0290). ');
$ax += cidrblock($address,'85.204.176.0/21','No access allowed from Moldova (MD-IP0291). ');
}
if(lmatch($address,'86','')) {
$ax += cidrblock($address,'86.104.196.0/22','No access allowed from Moldova (MD-IP0292). ');
$ax += cidrblock($address,'86.105.24.0/24','No access allowed from Moldova (MD-IP0293). ');
$ax += cidrblock($address,'86.105.56.0/21','No access allowed from Moldova (MD-IP0294). ');
$ax += cidrblock($address,'86.105.80.0/21','No access allowed from Moldova (MD-IP0295). ');
$ax += cidrblock($address,'86.105.172.0/22','No access allowed from Moldova (MD-IP0296). ');
$ax += cidrblock($address,'86.105.208.0/22','No access allowed from Moldova (MD-IP0297). ');
$ax += cidrblock($address,'86.105.232.0/24','No access allowed from Moldova (MD-IP0298). ');
$ax += cidrblock($address,'86.106.144.0/21','No access allowed from Moldova (MD-IP0299). ');
$ax += cidrblock($address,'86.106.208.0/20','No access allowed from Moldova (MD-IP0300). ');
$ax += cidrblock($address,'86.106.224.0/19','No access allowed from Moldova (MD-IP0301). ');
$ax += cidrblock($address,'86.107.64.0/22','No access allowed from Moldova (MD-IP0302). ');
$ax += cidrblock($address,'86.107.160.0/21','No access allowed from Moldova (MD-IP0303). ');
$ax += cidrblock($address,'86.107.186.0/23','No access allowed from Moldova (MD-IP0304). ');
}
if(lmatch($address,'87','')) {
$ax += cidrblock($address,'87.248.160.0/19','No access allowed from Moldova (MD-IP0305). ');
$ax += cidrblock($address,'87.255.64.0/19','No access allowed from Moldova (MD-IP0306). ');
}
if(lmatch($address,'89','')) {
$ax += cidrblock($address,'89.28.0.0/17','No access allowed from Moldova (MD-IP0307). ');
$ax += cidrblock($address,'89.32.56.0/21','No access allowed from Moldova (MD-IP0308). ');
$ax += cidrblock($address,'89.32.136.0/21','No access allowed from Moldova (MD-IP0309). ');
$ax += cidrblock($address,'89.32.171.0/24','No access allowed from Moldova (MD-IP0310). ');
$ax += cidrblock($address,'89.32.172.0/22','No access allowed from Moldova (MD-IP0311). ');
$ax += cidrblock($address,'89.32.224.0/20','No access allowed from Moldova (MD-IP0312). ');
$ax += cidrblock($address,'89.32.240.0/21','No access allowed from Moldova (MD-IP0313). ');
$ax += cidrblock($address,'89.32.252.0/22','No access allowed from Moldova (MD-IP0314). ');
$ax += cidrblock($address,'89.33.17.0/24','No access allowed from Moldova (MD-IP0315). ');
$ax += cidrblock($address,'89.33.30.0/24','No access allowed from Moldova (MD-IP0316). ');
$ax += cidrblock($address,'89.33.65.0/24','No access allowed from Moldova (MD-IP0317). ');
$ax += cidrblock($address,'89.34.64.0/21','No access allowed from Moldova (MD-IP0318). ');
$ax += cidrblock($address,'89.34.112.0/21','No access allowed from Moldova (MD-IP0319). ');
$ax += cidrblock($address,'89.34.192.0/21','No access allowed from Moldova (MD-IP0320). ');
$ax += cidrblock($address,'89.34.204.0/22','No access allowed from Moldova (MD-IP0321). ');
$ax += cidrblock($address,'89.34.232.0/22','No access allowed from Moldova (MD-IP0322). ');
$ax += cidrblock($address,'89.35.8.0/21','No access allowed from Moldova (MD-IP0323). ');
$ax += cidrblock($address,'89.35.34.0/24','No access allowed from Moldova (MD-IP0324). ');
$ax += cidrblock($address,'89.35.40.0/21','No access allowed from Moldova (MD-IP0325). ');
$ax += cidrblock($address,'89.35.76.0/24','No access allowed from Moldova (MD-IP0326). ');
$ax += cidrblock($address,'89.35.84.0/22','No access allowed from Moldova (MD-IP0327). ');
$ax += cidrblock($address,'89.35.88.0/24','No access allowed from Moldova (MD-IP0328). ');
$ax += cidrblock($address,'89.35.91.0/24','No access allowed from Moldova (MD-IP0329). ');
$ax += cidrblock($address,'89.35.163.0/24','No access allowed from Moldova (MD-IP0330). ');
$ax += cidrblock($address,'89.35.200.0/22','No access allowed from Moldova (MD-IP0331). ');
$ax += cidrblock($address,'89.35.248.0/24','No access allowed from Moldova (MD-IP0332). ');
$ax += cidrblock($address,'89.36.156.0/22','No access allowed from Moldova (MD-IP0333). ');
$ax += cidrblock($address,'89.36.255.0/24','No access allowed from Moldova (MD-IP0334). ');
$ax += cidrblock($address,'89.37.40.0/24','No access allowed from Moldova (MD-IP0335). ');
$ax += cidrblock($address,'89.37.44.0/22','No access allowed from Moldova (MD-IP0336). ');
$ax += cidrblock($address,'89.37.104.0/24','No access allowed from Moldova (MD-IP0337). ');
$ax += cidrblock($address,'89.38.32.0/22','No access allowed from Moldova (MD-IP0338). ');
$ax += cidrblock($address,'89.38.64.0/22','No access allowed from Moldova (MD-IP0339). ');
$ax += cidrblock($address,'89.38.76.0/22','No access allowed from Moldova (MD-IP0340). ');
$ax += cidrblock($address,'89.39.76.0/22','No access allowed from Moldova (MD-IP0341). ');
$ax += cidrblock($address,'89.39.84.0/22','No access allowed from Moldova (MD-IP0342). ');
$ax += cidrblock($address,'89.39.96.0/21','No access allowed from Moldova (MD-IP0343). ');
$ax += cidrblock($address,'89.39.112.0/21','No access allowed from Moldova (MD-IP0344). ');
$ax += cidrblock($address,'89.39.242.0/24','No access allowed from Moldova (MD-IP0345). ');
$ax += cidrblock($address,'89.40.228.0/22','No access allowed from Moldova (MD-IP0346). ');
$ax += cidrblock($address,'89.41.64.0/18','No access allowed from Moldova (MD-IP0347). ');
$ax += cidrblock($address,'89.42.64.0/22','No access allowed from Moldova (MD-IP0348). ');
$ax += cidrblock($address,'89.42.72.0/21','No access allowed from Moldova (MD-IP0349). ');
$ax += cidrblock($address,'89.42.104.0/22','No access allowed from Moldova (MD-IP0350). ');
$ax += cidrblock($address,'89.42.128.0/22','No access allowed from Moldova (MD-IP0351). ');
$ax += cidrblock($address,'89.42.180.0/22','No access allowed from Moldova (MD-IP0352). ');
$ax += cidrblock($address,'89.42.224.0/22','No access allowed from Moldova (MD-IP0353). ');
$ax += cidrblock($address,'89.43.128.0/22','No access allowed from Moldova (MD-IP0354). ');
$ax += cidrblock($address,'89.43.168.0/22','No access allowed from Moldova (MD-IP0355). ');
$ax += cidrblock($address,'89.44.152.0/22','No access allowed from Moldova (MD-IP0356). ');
$ax += cidrblock($address,'89.45.0.0/22','No access allowed from Moldova (MD-IP0357). ');
$ax += cidrblock($address,'89.45.40.0/22','No access allowed from Moldova (MD-IP0358). ');
$ax += cidrblock($address,'89.46.40.0/23','No access allowed from Moldova (MD-IP0359). ');
$ax += cidrblock($address,'89.46.164.0/22','No access allowed from Moldova (MD-IP0360). ');
$ax += cidrblock($address,'89.46.241.0/24','No access allowed from Moldova (MD-IP0361). ');
$ax += cidrblock($address,'89.47.176.0/24','No access allowed from Moldova (MD-IP0362). ');
$ax += cidrblock($address,'89.47.178.0/24','No access allowed from Moldova (MD-IP0363). ');
$ax += cidrblock($address,'89.47.181.0/24','No access allowed from Moldova (MD-IP0364). ');
$ax += cidrblock($address,'89.47.182.0/24','No access allowed from Moldova (MD-IP0365). ');
$ax += cidrblock($address,'89.149.64.0/18','No access allowed from Moldova (MD-IP0366). ');
$ax += cidrblock($address,'89.187.32.0/19','No access allowed from Moldova (MD-IP0367). ');
}
}
if(lmatch($address,'9','')) {
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.107.88.0/21','No access allowed from Moldova (MD-IP0368). ');
$ax += cidrblock($address,'91.198.236.0/24','No access allowed from Moldova (MD-IP0369). ');
$ax += cidrblock($address,'91.200.164.0/22','No access allowed from Moldova (MD-IP0370). ');
$ax += cidrblock($address,'91.206.208.0/23','No access allowed from Moldova (MD-IP0371). ');
$ax += cidrblock($address,'91.209.66.0/24','No access allowed from Moldova (MD-IP0372). ');
$ax += cidrblock($address,'91.211.48.0/22','No access allowed from Moldova (MD-IP0373). ');
$ax += cidrblock($address,'91.211.200.0/22','No access allowed from Moldova (MD-IP0374). ');
$ax += cidrblock($address,'91.213.86.0/24','No access allowed from Moldova (MD-IP0375). ');
$ax += cidrblock($address,'91.213.181.0/24','No access allowed from Moldova (MD-IP0376). ');
$ax += cidrblock($address,'91.214.200.0/22','No access allowed from Moldova (MD-IP0377). ');
$ax += cidrblock($address,'91.216.21.0/24','No access allowed from Moldova (MD-IP0378). ');
$ax += cidrblock($address,'91.216.47.0/24','No access allowed from Moldova (MD-IP0379). ');
$ax += cidrblock($address,'91.216.97.0/24','No access allowed from Moldova (MD-IP0380). ');
$ax += cidrblock($address,'91.216.166.0/24','No access allowed from Moldova (MD-IP0381). ');
$ax += cidrblock($address,'91.220.94.0/24','No access allowed from Moldova (MD-IP0382). ');
$ax += cidrblock($address,'91.220.144.0/24','No access allowed from Moldova (MD-IP0383). ');
$ax += cidrblock($address,'91.220.207.0/24','No access allowed from Moldova (MD-IP0384). ');
$ax += cidrblock($address,'91.227.121.0/24','No access allowed from Moldova (MD-IP0385). ');
$ax += cidrblock($address,'91.227.185.0/24','No access allowed from Moldova (MD-IP0386). ');
$ax += cidrblock($address,'91.228.108.0/22','No access allowed from Moldova (MD-IP0387). ');
$ax += cidrblock($address,'91.230.80.0/24','No access allowed from Moldova (MD-IP0388). ');
$ax += cidrblock($address,'91.230.214.0/24','No access allowed from Moldova (MD-IP0389). ');
$ax += cidrblock($address,'91.238.12.0/22','No access allowed from Moldova (MD-IP0390). ');
$ax += cidrblock($address,'91.238.94.0/23','No access allowed from Moldova (MD-IP0391). ');
$ax += cidrblock($address,'91.239.8.0/22','No access allowed from Moldova (MD-IP0392). ');
$ax += cidrblock($address,'91.242.64.0/18','No access allowed from Moldova (MD-IP0393). ');
$ax += cidrblock($address,'91.250.245.0/24','No access allowed from Moldova (MD-IP0394). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.38.16.0/22','No access allowed from Moldova (MD-IP0395). ');
$ax += cidrblock($address,'92.39.48.0/20','No access allowed from Moldova (MD-IP0396). ');
$ax += cidrblock($address,'92.43.164.0/23','No access allowed from Moldova (MD-IP0397). ');
$ax += cidrblock($address,'92.51.56.0/21','No access allowed from Moldova (MD-IP0398). ');
$ax += cidrblock($address,'92.114.128.0/17','No access allowed from Moldova (MD-IP0399). ');
$ax += cidrblock($address,'92.115.0.0/16','No access allowed from Moldova (MD-IP0400). ');
$ax += cidrblock($address,'92.181.8.254/32','No access allowed from Moldova (MD-IP0401). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.113.64.0/21','No access allowed from Moldova (MD-IP0402). ');
$ax += cidrblock($address,'93.113.80.0/21','No access allowed from Moldova (MD-IP0403). ');
$ax += cidrblock($address,'93.113.92.0/22','No access allowed from Moldova (MD-IP0404). ');
$ax += cidrblock($address,'93.113.112.0/21','No access allowed from Moldova (MD-IP0405). ');
$ax += cidrblock($address,'93.113.244.0/22','No access allowed from Moldova (MD-IP0406). ');
$ax += cidrblock($address,'93.115.136.0/21','No access allowed from Moldova (MD-IP0407). ');
$ax += cidrblock($address,'93.116.0.0/16','No access allowed from Moldova (MD-IP0408). ');
$ax += cidrblock($address,'93.117.48.0/20','No access allowed from Moldova (MD-IP0409). ');
$ax += cidrblock($address,'93.117.68.0/22','No access allowed from Moldova (MD-IP0410). ');
$ax += cidrblock($address,'93.117.72.0/21','No access allowed from Moldova (MD-IP0411). ');
$ax += cidrblock($address,'93.117.128.0/21','No access allowed from Moldova (MD-IP0412). ');
$ax += cidrblock($address,'93.117.140.0/22','No access allowed from Moldova (MD-IP0413). ');
$ax += cidrblock($address,'93.117.144.0/21','No access allowed from Moldova (MD-IP0414). ');
$ax += cidrblock($address,'93.117.156.0/22','No access allowed from Moldova (MD-IP0415). ');
$ax += cidrblock($address,'93.117.160.0/21','No access allowed from Moldova (MD-IP0416). ');
$ax += cidrblock($address,'93.117.168.0/22','No access allowed from Moldova (MD-IP0417). ');
$ax += cidrblock($address,'93.118.176.0/22','No access allowed from Moldova (MD-IP0418). ');
$ax += cidrblock($address,'93.118.188.0/22','No access allowed from Moldova (MD-IP0419). ');
$ax += cidrblock($address,'93.119.96.0/21','No access allowed from Moldova (MD-IP0420). ');
$ax += cidrblock($address,'93.119.108.0/22','No access allowed from Moldova (MD-IP0421). ');
$ax += cidrblock($address,'93.119.128.0/21','No access allowed from Moldova (MD-IP0422). ');
$ax += cidrblock($address,'93.119.140.0/22','No access allowed from Moldova (MD-IP0423). ');
$ax += cidrblock($address,'93.119.144.0/21','No access allowed from Moldova (MD-IP0424). ');
$ax += cidrblock($address,'93.119.160.0/21','No access allowed from Moldova (MD-IP0425). ');
$ax += cidrblock($address,'93.119.196.0/22','No access allowed from Moldova (MD-IP0426). ');
$ax += cidrblock($address,'93.119.200.0/21','No access allowed from Moldova (MD-IP0427). ');
$ax += cidrblock($address,'93.119.228.0/22','No access allowed from Moldova (MD-IP0428). ');
$ax += cidrblock($address,'93.119.232.0/21','No access allowed from Moldova (MD-IP0429). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.103.0.0/22','No access allowed from Moldova (MD-IP0430). ');
$ax += cidrblock($address,'94.103.4.0/24','No access allowed from Moldova (MD-IP0431). ');
$ax += cidrblock($address,'94.103.10.0/23','No access allowed from Moldova (MD-IP0432). ');
$ax += cidrblock($address,'94.103.13.0/24','No access allowed from Moldova (MD-IP0433). ');
$ax += cidrblock($address,'94.103.14.0/23','No access allowed from Moldova (MD-IP0434). ');
$ax += cidrblock($address,'94.139.128.0/19','No access allowed from Moldova (MD-IP0435). ');
$ax += cidrblock($address,'94.176.64.0/20','No access allowed from Moldova (MD-IP0436). ');
$ax += cidrblock($address,'94.232.30.0/24','No access allowed from Moldova (MD-IP0437). ');
$ax += cidrblock($address,'94.243.64.0/18','No access allowed from Moldova (MD-IP0438). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.65.0.0/17','No access allowed from Moldova (MD-IP0439). ');
$ax += cidrblock($address,'95.153.64.0/18','No access allowed from Moldova (MD-IP0440). ');
}
}
$ax += inmatch($query,'mdtestmd','Test function. (MD). ');
// End of MD list
