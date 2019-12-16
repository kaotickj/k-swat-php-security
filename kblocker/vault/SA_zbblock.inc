<?php
// *php 5 fix
global $ax;
// Saudi Arabia Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / SA-2018.65.634';
$ax += rmatch($hoster,'.sa','No access allowed from Saudi Arabia (SA-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'103.244.30.0/24','No access allowed from Saudi Arabia (SA-IP0001). ');
$ax += cidrblock($address,'104.167.227.0/24','No access allowed from Saudi Arabia (SA-IP0002). ');
$ax += cidrblock($address,'104.222.210.0/24','No access allowed from Saudi Arabia (SA-IP0003). ');
$ax += cidrblock($address,'109.82.0.0/15','No access allowed from Saudi Arabia (SA-IP0004). ');
$ax += cidrblock($address,'109.166.0.0/19','No access allowed from Saudi Arabia (SA-IP0005). ');
$ax += cidrblock($address,'109.166.88.0/21','No access allowed from Saudi Arabia (SA-IP0006). ');
$ax += cidrblock($address,'109.166.96.0/19','No access allowed from Saudi Arabia (SA-IP0007). ');
$ax += cidrblock($address,'109.171.128.0/17','No access allowed from Saudi Arabia (SA-IP0008). ');
$ax += cidrblock($address,'109.206.64.0/19','No access allowed from Saudi Arabia (SA-IP0009). ');
}
if(lmatch($address,'11','')) {
$ax += cidrblock($address,'119.81.172.96/32','No access allowed from Saudi Arabia (SA-IP0010). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.90.61.0/24','No access allowed from Saudi Arabia (SA-IP0011). ');
$ax += cidrblock($address,'128.127.192.0/18','No access allowed from Saudi Arabia (SA-IP0012). ');
$ax += cidrblock($address,'128.204.240.0/20','No access allowed from Saudi Arabia (SA-IP0013). ');
$ax += cidrblock($address,'128.234.0.0/16','No access allowed from Saudi Arabia (SA-IP0014). ');
$ax += cidrblock($address,'129.208.0.0/16','No access allowed from Saudi Arabia (SA-IP0015). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'130.255.176.0/21','No access allowed from Saudi Arabia (SA-IP0016). ');
$ax += cidrblock($address,'134.239.0.0/16','No access allowed from Saudi Arabia (SA-IP0017). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'142.154.0.0/17','No access allowed from Saudi Arabia (SA-IP0018). ');
$ax += cidrblock($address,'144.178.29.23/32','No access allowed from Saudi Arabia (SA-IP0019). ');
$ax += cidrblock($address,'146.251.0.0/16','No access allowed from Saudi Arabia (SA-IP0020). ');
$ax += cidrblock($address,'147.82.0.0/16','No access allowed from Saudi Arabia (SA-IP0021). ');
$ax += cidrblock($address,'147.108.76.0/23','No access allowed from Saudi Arabia (SA-IP0022). ');
$ax += cidrblock($address,'149.3.160.0/20','No access allowed from Saudi Arabia (SA-IP0023). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'151.173.32.0/19','No access allowed from Saudi Arabia (SA-IP0024). ');
$ax += cidrblock($address,'151.173.64.0/18','No access allowed from Saudi Arabia (SA-IP0025). ');
$ax += cidrblock($address,'151.173.128.0/17','No access allowed from Saudi Arabia (SA-IP0026). ');
$ax += cidrblock($address,'151.254.0.0/15','No access allowed from Saudi Arabia (SA-IP0027). ');
$ax += cidrblock($address,'154.84.172.0/24','No access allowed from Saudi Arabia (SA-IP0028). ');
$ax += cidrblock($address,'157.133.88.0/21','No access allowed from Saudi Arabia (SA-IP0029). ');
$ax += cidrblock($address,'159.0.0.0/16','No access allowed from Saudi Arabia (SA-IP0030). ');
$ax += cidrblock($address,'159.180.30.0/24','No access allowed from Saudi Arabia (SA-IP0031). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'160.115.0.0/16','No access allowed from Saudi Arabia (SA-IP0032). ');
$ax += cidrblock($address,'161.251.0.0/16','No access allowed from Saudi Arabia (SA-IP0033). ');
$ax += cidrblock($address,'166.87.0.0/16','No access allowed from Saudi Arabia (SA-IP0034). ');
$ax += cidrblock($address,'167.88.111.0/24','No access allowed from Saudi Arabia (SA-IP0035). ');
$ax += cidrblock($address,'167.111.0.0/16','No access allowed from Saudi Arabia (SA-IP0036). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'17.69.248.0/21','No access allowed from Saudi Arabia (SA-IP0037). ');
$ax += cidrblock($address,'170.76.179.0/24','No access allowed from Saudi Arabia (SA-IP0038). ');
$ax += cidrblock($address,'172.69.124.0/22','No access allowed from Saudi Arabia (SA-IP0039). ');
$ax += cidrblock($address,'174.142.223.136/29','No access allowed from Saudi Arabia (SA-IP0040). ');
$ax += cidrblock($address,'176.16.0.0/14','No access allowed from Saudi Arabia (SA-IP0041). ');
$ax += cidrblock($address,'176.44.0.0/15','No access allowed from Saudi Arabia (SA-IP0042). ');
$ax += cidrblock($address,'176.47.0.0/16','No access allowed from Saudi Arabia (SA-IP0043). ');
$ax += cidrblock($address,'176.99.16.0/20','No access allowed from Saudi Arabia (SA-IP0044). ');
$ax += cidrblock($address,'176.110.100.0/24','No access allowed from Saudi Arabia (SA-IP0045). ');
$ax += cidrblock($address,'176.224.0.0/15','No access allowed from Saudi Arabia (SA-IP0046). ');
$ax += cidrblock($address,'176.241.184.0/21','No access allowed from Saudi Arabia (SA-IP0047). ');
$ax += cidrblock($address,'178.20.144.0/21','No access allowed from Saudi Arabia (SA-IP0048). ');
$ax += cidrblock($address,'178.73.64.0/18','No access allowed from Saudi Arabia (SA-IP0049). ');
$ax += cidrblock($address,'178.80.0.0/15','No access allowed from Saudi Arabia (SA-IP0050). ');
$ax += cidrblock($address,'178.86.0.0/15','No access allowed from Saudi Arabia (SA-IP0051). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'185.2.232.0/22','No access allowed from Saudi Arabia (SA-IP0052). ');
$ax += cidrblock($address,'185.3.123.0/24','No access allowed from Saudi Arabia (SA-IP0053). ');
$ax += cidrblock($address,'185.5.152.0/22','No access allowed from Saudi Arabia (SA-IP0054). ');
$ax += cidrblock($address,'185.10.112.0/22','No access allowed from Saudi Arabia (SA-IP0055). ');
$ax += cidrblock($address,'185.11.120.0/22','No access allowed from Saudi Arabia (SA-IP0056). ');
$ax += cidrblock($address,'185.12.164.0/22','No access allowed from Saudi Arabia (SA-IP0057). ');
$ax += cidrblock($address,'185.12.172.0/22','No access allowed from Saudi Arabia (SA-IP0058). ');
$ax += cidrblock($address,'185.14.196.0/22','No access allowed from Saudi Arabia (SA-IP0059). ');
$ax += cidrblock($address,'185.20.72.0/22','No access allowed from Saudi Arabia (SA-IP0060). ');
$ax += cidrblock($address,'185.20.152.0/22','No access allowed from Saudi Arabia (SA-IP0061). ');
$ax += cidrblock($address,'185.23.124.0/22','No access allowed from Saudi Arabia (SA-IP0062). ');
$ax += cidrblock($address,'185.26.84.0/22','No access allowed from Saudi Arabia (SA-IP0063). ');
$ax += cidrblock($address,'185.27.220.0/22','No access allowed from Saudi Arabia (SA-IP0064). ');
$ax += cidrblock($address,'185.29.92.0/22','No access allowed from Saudi Arabia (SA-IP0065). ');
$ax += cidrblock($address,'185.30.148.0/22','No access allowed from Saudi Arabia (SA-IP0066). ');
$ax += cidrblock($address,'185.39.36.0/22','No access allowed from Saudi Arabia (SA-IP0067). ');
$ax += cidrblock($address,'185.51.204.0/22','No access allowed from Saudi Arabia (SA-IP0068). ');
$ax += cidrblock($address,'185.53.244.0/22','No access allowed from Saudi Arabia (SA-IP0069). ');
$ax += cidrblock($address,'185.56.196.0/22','No access allowed from Saudi Arabia (SA-IP0070). ');
$ax += cidrblock($address,'185.59.188.0/22','No access allowed from Saudi Arabia (SA-IP0071). ');
$ax += cidrblock($address,'185.62.176.0/22','No access allowed from Saudi Arabia (SA-IP0072). ');
$ax += cidrblock($address,'185.63.232.0/22','No access allowed from Saudi Arabia (SA-IP0073). ');
$ax += cidrblock($address,'185.69.208.0/22','No access allowed from Saudi Arabia (SA-IP0074). ');
$ax += cidrblock($address,'185.75.16.0/22','No access allowed from Saudi Arabia (SA-IP0075). ');
$ax += cidrblock($address,'185.76.136.0/22','No access allowed from Saudi Arabia (SA-IP0076). ');
$ax += cidrblock($address,'185.82.116.0/22','No access allowed from Saudi Arabia (SA-IP0077). ');
$ax += cidrblock($address,'185.84.164.0/22','No access allowed from Saudi Arabia (SA-IP0078). ');
$ax += cidrblock($address,'185.90.16.0/22','No access allowed from Saudi Arabia (SA-IP0079). ');
$ax += cidrblock($address,'185.90.88.0/22','No access allowed from Saudi Arabia (SA-IP0080). ');
$ax += cidrblock($address,'185.95.140.0/22','No access allowed from Saudi Arabia (SA-IP0081). ');
$ax += cidrblock($address,'185.100.152.0/22','No access allowed from Saudi Arabia (SA-IP0082). ');
$ax += cidrblock($address,'185.100.223.0/32','No access allowed from Saudi Arabia (SA-IP0083). ');
$ax += cidrblock($address,'185.108.240.0/22','No access allowed from Saudi Arabia (SA-IP0084). ');
$ax += cidrblock($address,'185.109.176.0/22','No access allowed from Saudi Arabia (SA-IP0085). ');
$ax += cidrblock($address,'185.110.232.0/22','No access allowed from Saudi Arabia (SA-IP0086). ');
$ax += cidrblock($address,'185.114.68.0/22','No access allowed from Saudi Arabia (SA-IP0087). ');
$ax += cidrblock($address,'185.114.224.116/32','No access allowed from Saudi Arabia (SA-IP0088). ');
$ax += cidrblock($address,'185.116.224.0/22','No access allowed from Saudi Arabia (SA-IP0089). ');
$ax += cidrblock($address,'185.117.128.0/22','No access allowed from Saudi Arabia (SA-IP0090). ');
$ax += cidrblock($address,'185.118.120.0/22','No access allowed from Saudi Arabia (SA-IP0091). ');
$ax += cidrblock($address,'185.121.252.0/22','No access allowed from Saudi Arabia (SA-IP0092). ');
$ax += cidrblock($address,'185.122.120.0/22','No access allowed from Saudi Arabia (SA-IP0093). ');
$ax += cidrblock($address,'185.123.20.0/22','No access allowed from Saudi Arabia (SA-IP0094). ');
$ax += cidrblock($address,'185.125.224.34/32','No access allowed from Saudi Arabia (SA-IP0095). ');
$ax += cidrblock($address,'185.125.226.34/32','No access allowed from Saudi Arabia (SA-IP0096). ');
$ax += cidrblock($address,'185.125.226.74/32','No access allowed from Saudi Arabia (SA-IP0097). ');
$ax += cidrblock($address,'185.131.76.0/22','No access allowed from Saudi Arabia (SA-IP0098). ');
$ax += cidrblock($address,'185.131.96.0/22','No access allowed from Saudi Arabia (SA-IP0099). ');
$ax += cidrblock($address,'185.133.84.0/22','No access allowed from Saudi Arabia (SA-IP0100). ');
$ax += cidrblock($address,'185.133.180.0/22','No access allowed from Saudi Arabia (SA-IP0101). ');
$ax += cidrblock($address,'185.137.244.0/22','No access allowed from Saudi Arabia (SA-IP0102). ');
$ax += cidrblock($address,'185.139.8.0/22','No access allowed from Saudi Arabia (SA-IP0103). ');
$ax += cidrblock($address,'185.139.120.0/22','No access allowed from Saudi Arabia (SA-IP0104). ');
$ax += cidrblock($address,'185.143.24.0/22','No access allowed from Saudi Arabia (SA-IP0105). ');
$ax += cidrblock($address,'185.148.148.0/22','No access allowed from Saudi Arabia (SA-IP0106). ');
$ax += cidrblock($address,'185.149.180.0/22','No access allowed from Saudi Arabia (SA-IP0107). ');
$ax += cidrblock($address,'185.149.232.0/22','No access allowed from Saudi Arabia (SA-IP0108). ');
$ax += cidrblock($address,'185.150.104.0/22','No access allowed from Saudi Arabia (SA-IP0109). ');
$ax += cidrblock($address,'185.163.160.0/22','No access allowed from Saudi Arabia (SA-IP0110). ');
$ax += cidrblock($address,'185.164.20.0/22','No access allowed from Saudi Arabia (SA-IP0111). ');
$ax += cidrblock($address,'185.164.24.0/21','No access allowed from Saudi Arabia (SA-IP0112). ');
$ax += cidrblock($address,'185.164.188.0/22','No access allowed from Saudi Arabia (SA-IP0113). ');
$ax += cidrblock($address,'185.164.196.0/22','No access allowed from Saudi Arabia (SA-IP0114). ');
$ax += cidrblock($address,'185.164.236.0/22','No access allowed from Saudi Arabia (SA-IP0115). ');
$ax += cidrblock($address,'185.165.61.0/26','No access allowed from Saudi Arabia (SA-IP0116). ');
$ax += cidrblock($address,'185.167.136.0/22','No access allowed from Saudi Arabia (SA-IP0117). ');
$ax += cidrblock($address,'185.171.152.0/22','No access allowed from Saudi Arabia (SA-IP0118). ');
$ax += cidrblock($address,'185.181.64.0/22','No access allowed from Saudi Arabia (SA-IP0119). ');
$ax += cidrblock($address,'185.191.136.0/22','No access allowed from Saudi Arabia (SA-IP0120). ');
$ax += cidrblock($address,'185.194.132.0/22','No access allowed from Saudi Arabia (SA-IP0121). ');
$ax += cidrblock($address,'185.195.32.0/22','No access allowed from Saudi Arabia (SA-IP0122). ');
$ax += cidrblock($address,'185.202.140.0/22','No access allowed from Saudi Arabia (SA-IP0123). ');
$ax += cidrblock($address,'185.202.228.0/22','No access allowed from Saudi Arabia (SA-IP0124). ');
$ax += cidrblock($address,'185.203.108.0/22','No access allowed from Saudi Arabia (SA-IP0125). ');
$ax += cidrblock($address,'185.205.24.0/22','No access allowed from Saudi Arabia (SA-IP0126). ');
$ax += cidrblock($address,'185.206.28.0/22','No access allowed from Saudi Arabia (SA-IP0127). ');
$ax += cidrblock($address,'185.206.132.0/22','No access allowed from Saudi Arabia (SA-IP0128). ');
$ax += cidrblock($address,'185.207.28.0/22','No access allowed from Saudi Arabia (SA-IP0129). ');
$ax += cidrblock($address,'185.209.48.0/22','No access allowed from Saudi Arabia (SA-IP0130). ');
$ax += cidrblock($address,'185.216.40.0/22','No access allowed from Saudi Arabia (SA-IP0131). ');
$ax += cidrblock($address,'185.217.8.0/22','No access allowed from Saudi Arabia (SA-IP0132). ');
$ax += cidrblock($address,'185.217.100.0/22','No access allowed from Saudi Arabia (SA-IP0133). ');
$ax += cidrblock($address,'185.225.56.0/22','No access allowed from Saudi Arabia (SA-IP0134). ');
$ax += cidrblock($address,'185.229.164.0/22','No access allowed from Saudi Arabia (SA-IP0135). ');
$ax += cidrblock($address,'185.230.208.0/22','No access allowed from Saudi Arabia (SA-IP0136). ');
$ax += cidrblock($address,'185.231.40.0/22','No access allowed from Saudi Arabia (SA-IP0137). ');
$ax += cidrblock($address,'185.235.52.0/22','No access allowed from Saudi Arabia (SA-IP0138). ');
$ax += cidrblock($address,'185.238.68.0/22','No access allowed from Saudi Arabia (SA-IP0139). ');
$ax += cidrblock($address,'188.48.0.0/13','No access allowed from Saudi Arabia (SA-IP0140). ');
$ax += cidrblock($address,'188.95.160.0/21','No access allowed from Saudi Arabia (SA-IP0141). ');
$ax += cidrblock($address,'188.117.64.0/18','No access allowed from Saudi Arabia (SA-IP0142). ');
$ax += cidrblock($address,'188.132.0.0/17','No access allowed from Saudi Arabia (SA-IP0143). ');
$ax += cidrblock($address,'188.139.0.0/17','No access allowed from Saudi Arabia (SA-IP0144). ');
$ax += cidrblock($address,'188.224.128.0/17','No access allowed from Saudi Arabia (SA-IP0145). ');
$ax += cidrblock($address,'188.248.0.0/15','No access allowed from Saudi Arabia (SA-IP0146). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'192.162.72.0/22','No access allowed from Saudi Arabia (SA-IP0147). ');
$ax += cidrblock($address,'192.203.227.0/24','No access allowed from Saudi Arabia (SA-IP0148). ');
$ax += cidrblock($address,'192.251.61.0/24','No access allowed from Saudi Arabia (SA-IP0149). ');
$ax += cidrblock($address,'192.251.62.0/23','No access allowed from Saudi Arabia (SA-IP0150). ');
$ax += cidrblock($address,'192.251.64.0/23','No access allowed from Saudi Arabia (SA-IP0151). ');
$ax += cidrblock($address,'193.8.250.0/24','No access allowed from Saudi Arabia (SA-IP0152). ');
$ax += cidrblock($address,'193.19.90.0/23','No access allowed from Saudi Arabia (SA-IP0153). ');
$ax += cidrblock($address,'193.22.249.0/24','No access allowed from Saudi Arabia (SA-IP0154). ');
$ax += cidrblock($address,'193.23.180.0/24','No access allowed from Saudi Arabia (SA-IP0155). ');
$ax += cidrblock($address,'193.27.7.0/24','No access allowed from Saudi Arabia (SA-IP0156). ');
$ax += cidrblock($address,'193.28.9.0/24','No access allowed from Saudi Arabia (SA-IP0157). ');
$ax += cidrblock($address,'193.28.10.0/24','No access allowed from Saudi Arabia (SA-IP0158). ');
$ax += cidrblock($address,'193.28.94.0/24','No access allowed from Saudi Arabia (SA-IP0159). ');
$ax += cidrblock($address,'193.29.50.0/24','No access allowed from Saudi Arabia (SA-IP0160). ');
$ax += cidrblock($address,'193.37.143.0/24','No access allowed from Saudi Arabia (SA-IP0161). ');
$ax += cidrblock($address,'193.42.220.0/24','No access allowed from Saudi Arabia (SA-IP0162). ');
$ax += cidrblock($address,'193.47.102.0/24','No access allowed from Saudi Arabia (SA-IP0163). ');
$ax += cidrblock($address,'193.104.40.0/24','No access allowed from Saudi Arabia (SA-IP0164). ');
$ax += cidrblock($address,'193.104.204.0/24','No access allowed from Saudi Arabia (SA-IP0165). ');
$ax += cidrblock($address,'193.105.89.0/24','No access allowed from Saudi Arabia (SA-IP0166). ');
$ax += cidrblock($address,'193.105.119.0/24','No access allowed from Saudi Arabia (SA-IP0167). ');
$ax += cidrblock($address,'193.109.218.0/24','No access allowed from Saudi Arabia (SA-IP0168). ');
$ax += cidrblock($address,'193.142.222.0/24','No access allowed from Saudi Arabia (SA-IP0169). ');
$ax += cidrblock($address,'193.169.190.0/23','No access allowed from Saudi Arabia (SA-IP0170). ');
$ax += cidrblock($address,'193.194.122.0/24','No access allowed from Saudi Arabia (SA-IP0171). ');
$ax += cidrblock($address,'193.200.247.0/24','No access allowed from Saudi Arabia (SA-IP0172). ');
$ax += cidrblock($address,'193.227.127.0/24','No access allowed from Saudi Arabia (SA-IP0173). ');
$ax += cidrblock($address,'194.0.15.0/24','No access allowed from Saudi Arabia (SA-IP0174). ');
$ax += cidrblock($address,'194.33.68.0/24','No access allowed from Saudi Arabia (SA-IP0175). ');
$ax += cidrblock($address,'194.33.70.0/23','No access allowed from Saudi Arabia (SA-IP0176). ');
$ax += cidrblock($address,'194.36.164.0/24','No access allowed from Saudi Arabia (SA-IP0177). ');
$ax += cidrblock($address,'194.50.35.0/24','No access allowed from Saudi Arabia (SA-IP0178). ');
$ax += cidrblock($address,'194.126.231.0/24','No access allowed from Saudi Arabia (SA-IP0179). ');
$ax += cidrblock($address,'195.10.197.0/24','No access allowed from Saudi Arabia (SA-IP0180). ');
$ax += cidrblock($address,'195.14.19.0/24','No access allowed from Saudi Arabia (SA-IP0181). ');
$ax += cidrblock($address,'195.34.68.0/23','No access allowed from Saudi Arabia (SA-IP0182). ');
$ax += cidrblock($address,'195.43.137.0/24','No access allowed from Saudi Arabia (SA-IP0183). ');
$ax += cidrblock($address,'195.47.234.0/24','No access allowed from Saudi Arabia (SA-IP0184). ');
$ax += cidrblock($address,'195.66.100.0/24','No access allowed from Saudi Arabia (SA-IP0185). ');
$ax += cidrblock($address,'195.66.128.0/23','No access allowed from Saudi Arabia (SA-IP0186). ');
$ax += cidrblock($address,'195.85.224.0/24','No access allowed from Saudi Arabia (SA-IP0187). ');
$ax += cidrblock($address,'195.88.244.0/23','No access allowed from Saudi Arabia (SA-IP0188). ');
$ax += cidrblock($address,'195.114.106.0/23','No access allowed from Saudi Arabia (SA-IP0189). ');
$ax += cidrblock($address,'195.122.64.0/19','No access allowed from Saudi Arabia (SA-IP0190). ');
$ax += cidrblock($address,'195.128.131.0/24','No access allowed from Saudi Arabia (SA-IP0191). ');
$ax += cidrblock($address,'195.134.184.0/21','No access allowed from Saudi Arabia (SA-IP0192). ');
$ax += cidrblock($address,'195.149.65.0/24','No access allowed from Saudi Arabia (SA-IP0193). ');
$ax += cidrblock($address,'195.149.91.0/24','No access allowed from Saudi Arabia (SA-IP0194). ');
$ax += cidrblock($address,'195.170.180.0/24','No access allowed from Saudi Arabia (SA-IP0195). ');
$ax += cidrblock($address,'195.182.31.0/24','No access allowed from Saudi Arabia (SA-IP0196). ');
$ax += cidrblock($address,'195.189.212.0/23','No access allowed from Saudi Arabia (SA-IP0197). ');
$ax += cidrblock($address,'195.191.6.0/23','No access allowed from Saudi Arabia (SA-IP0198). ');
$ax += cidrblock($address,'195.238.42.0/24','No access allowed from Saudi Arabia (SA-IP0199). ');
$ax += cidrblock($address,'195.238.44.0/24','No access allowed from Saudi Arabia (SA-IP0200). ');
$ax += cidrblock($address,'195.238.50.0/24','No access allowed from Saudi Arabia (SA-IP0201). ');
$ax += cidrblock($address,'195.238.55.0/24','No access allowed from Saudi Arabia (SA-IP0202). ');
$ax += cidrblock($address,'195.238.56.0/24','No access allowed from Saudi Arabia (SA-IP0203). ');
$ax += cidrblock($address,'195.238.58.0/24','No access allowed from Saudi Arabia (SA-IP0204). ');
$ax += cidrblock($address,'195.242.188.0/24','No access allowed from Saudi Arabia (SA-IP0205). ');
$ax += cidrblock($address,'195.242.196.0/22','No access allowed from Saudi Arabia (SA-IP0206). ');
$ax += cidrblock($address,'195.246.104.0/23','No access allowed from Saudi Arabia (SA-IP0207). ');
$ax += cidrblock($address,'196.1.3.0/24','No access allowed from Saudi Arabia (SA-IP0208). ');
$ax += cidrblock($address,'196.1.6.0/24','No access allowed from Saudi Arabia (SA-IP0209). ');
$ax += cidrblock($address,'196.1.64.0/22','No access allowed from Saudi Arabia (SA-IP0210). ');
$ax += cidrblock($address,'196.3.66.0/24','No access allowed from Saudi Arabia (SA-IP0211). ');
$ax += cidrblock($address,'196.15.32.0/19','No access allowed from Saudi Arabia (SA-IP0212). ');
$ax += cidrblock($address,'198.11.0.0/22','No access allowed from Saudi Arabia (SA-IP0213). ');
$ax += cidrblock($address,'198.12.13.8/29','No access allowed from Saudi Arabia (SA-IP0214). ');
$ax += cidrblock($address,'198.12.13.16/29','No access allowed from Saudi Arabia (SA-IP0215). ');
$ax += cidrblock($address,'198.12.14.8/29','No access allowed from Saudi Arabia (SA-IP0216). ');
$ax += cidrblock($address,'198.15.102.0/29','No access allowed from Saudi Arabia (SA-IP0217). ');
$ax += cidrblock($address,'198.36.32.0/21','No access allowed from Saudi Arabia (SA-IP0218). ');
$ax += cidrblock($address,'198.36.40.0/22','No access allowed from Saudi Arabia (SA-IP0219). ');
$ax += cidrblock($address,'198.36.44.0/23','No access allowed from Saudi Arabia (SA-IP0220). ');
$ax += cidrblock($address,'198.36.46.0/24','No access allowed from Saudi Arabia (SA-IP0221). ');
$ax += cidrblock($address,'198.50.98.24/29','No access allowed from Saudi Arabia (SA-IP0222). ');
$ax += cidrblock($address,'198.50.101.56/29','No access allowed from Saudi Arabia (SA-IP0223). ');
$ax += cidrblock($address,'198.50.109.192/29','No access allowed from Saudi Arabia (SA-IP0224). ');
$ax += cidrblock($address,'198.50.117.168/29','No access allowed from Saudi Arabia (SA-IP0225). ');
$ax += cidrblock($address,'198.50.120.56/29','No access allowed from Saudi Arabia (SA-IP0226). ');
$ax += cidrblock($address,'198.50.123.224/29','No access allowed from Saudi Arabia (SA-IP0227). ');
$ax += cidrblock($address,'198.50.141.96/30','No access allowed from Saudi Arabia (SA-IP0228). ');
$ax += cidrblock($address,'198.50.190.48/30','No access allowed from Saudi Arabia (SA-IP0229). ');
$ax += cidrblock($address,'198.51.12.0/24','No access allowed from Saudi Arabia (SA-IP0230). ');
$ax += cidrblock($address,'198.72.97.24/29','No access allowed from Saudi Arabia (SA-IP0231). ');
$ax += cidrblock($address,'199.16.202.72/29','No access allowed from Saudi Arabia (SA-IP0232). ');
$ax += cidrblock($address,'199.16.206.144/29','No access allowed from Saudi Arabia (SA-IP0233). ');
$ax += cidrblock($address,'199.43.199.220/30','No access allowed from Saudi Arabia (SA-IP0234). ');
$ax += cidrblock($address,'199.185.180.24/30','No access allowed from Saudi Arabia (SA-IP0235). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'2.88.0.0/14','No access allowed from Saudi Arabia (SA-IP0236). ');
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'210.5.229.0/24','No access allowed from Saudi Arabia (SA-IP0237). ');
$ax += cidrblock($address,'212.11.160.0/19','No access allowed from Saudi Arabia (SA-IP0238). ');
$ax += cidrblock($address,'212.12.160.0/19','No access allowed from Saudi Arabia (SA-IP0239). ');
$ax += cidrblock($address,'212.24.224.0/19','No access allowed from Saudi Arabia (SA-IP0240). ');
$ax += cidrblock($address,'212.26.0.0/17','No access allowed from Saudi Arabia (SA-IP0241). ');
$ax += cidrblock($address,'212.33.160.0/19','No access allowed from Saudi Arabia (SA-IP0242). ');
$ax += cidrblock($address,'212.46.32.0/19','No access allowed from Saudi Arabia (SA-IP0243). ');
$ax += cidrblock($address,'212.57.192.0/19','No access allowed from Saudi Arabia (SA-IP0244). ');
$ax += cidrblock($address,'212.62.96.0/19','No access allowed from Saudi Arabia (SA-IP0245). ');
$ax += cidrblock($address,'212.70.32.0/19','No access allowed from Saudi Arabia (SA-IP0246). ');
$ax += cidrblock($address,'212.71.32.0/19','No access allowed from Saudi Arabia (SA-IP0247). ');
$ax += cidrblock($address,'212.76.64.0/19','No access allowed from Saudi Arabia (SA-IP0248). ');
$ax += cidrblock($address,'212.93.160.0/19','No access allowed from Saudi Arabia (SA-IP0249). ');
$ax += cidrblock($address,'212.93.192.0/19','No access allowed from Saudi Arabia (SA-IP0250). ');
$ax += cidrblock($address,'212.100.192.0/19','No access allowed from Saudi Arabia (SA-IP0251). ');
$ax += cidrblock($address,'212.102.0.0/19','No access allowed from Saudi Arabia (SA-IP0252). ');
$ax += cidrblock($address,'212.107.96.0/19','No access allowed from Saudi Arabia (SA-IP0253). ');
$ax += cidrblock($address,'212.116.192.0/19','No access allowed from Saudi Arabia (SA-IP0254). ');
$ax += cidrblock($address,'212.118.96.0/19','No access allowed from Saudi Arabia (SA-IP0255). ');
$ax += cidrblock($address,'212.118.128.0/19','No access allowed from Saudi Arabia (SA-IP0256). ');
$ax += cidrblock($address,'212.119.64.0/19','No access allowed from Saudi Arabia (SA-IP0257). ');
$ax += cidrblock($address,'212.138.0.0/16','No access allowed from Saudi Arabia (SA-IP0258). ');
$ax += cidrblock($address,'212.215.128.0/17','No access allowed from Saudi Arabia (SA-IP0259). ');
$ax += cidrblock($address,'213.5.168.0/21','No access allowed from Saudi Arabia (SA-IP0260). ');
$ax += cidrblock($address,'213.136.192.0/19','No access allowed from Saudi Arabia (SA-IP0261). ');
$ax += cidrblock($address,'213.165.32.0/19','No access allowed from Saudi Arabia (SA-IP0262). ');
$ax += cidrblock($address,'213.166.128.0/19','No access allowed from Saudi Arabia (SA-IP0263). ');
$ax += cidrblock($address,'213.181.160.0/19','No access allowed from Saudi Arabia (SA-IP0264). ');
$ax += cidrblock($address,'213.184.160.0/19','No access allowed from Saudi Arabia (SA-IP0265). ');
$ax += cidrblock($address,'213.206.136.215/32','No access allowed from Saudi Arabia (SA-IP0266). ');
$ax += cidrblock($address,'213.210.192.0/18','No access allowed from Saudi Arabia (SA-IP0267). ');
$ax += cidrblock($address,'213.230.0.0/19','No access allowed from Saudi Arabia (SA-IP0268). ');
$ax += cidrblock($address,'213.236.32.0/19','No access allowed from Saudi Arabia (SA-IP0269). ');
$ax += cidrblock($address,'217.8.64.0/20','No access allowed from Saudi Arabia (SA-IP0270). ');
$ax += cidrblock($address,'217.12.224.0/20','No access allowed from Saudi Arabia (SA-IP0271). ');
$ax += cidrblock($address,'217.145.240.0/20','No access allowed from Saudi Arabia (SA-IP0272). ');
$ax += cidrblock($address,'217.173.80.0/20','No access allowed from Saudi Arabia (SA-IP0273). ');
}
if(lmatch($address,'23','')) {
$ax += cidrblock($address,'23.232.248.0/24','No access allowed from Saudi Arabia (SA-IP0274). ');
}
}
if(lmatch($address,'3','')) {
if(lmatch($address,'31','')) {
$ax += cidrblock($address,'31.24.224.0/24','No access allowed from Saudi Arabia (SA-IP0275). ');
$ax += cidrblock($address,'31.24.228.0/23','No access allowed from Saudi Arabia (SA-IP0276). ');
$ax += cidrblock($address,'31.24.230.0/26','No access allowed from Saudi Arabia (SA-IP0277). ');
$ax += cidrblock($address,'31.24.230.64/28','No access allowed from Saudi Arabia (SA-IP0278). ');
$ax += cidrblock($address,'31.24.230.80/30','No access allowed from Saudi Arabia (SA-IP0279). ');
$ax += cidrblock($address,'31.24.230.85/32','No access allowed from Saudi Arabia (SA-IP0280). ');
$ax += cidrblock($address,'31.24.230.86/31','No access allowed from Saudi Arabia (SA-IP0281). ');
$ax += cidrblock($address,'31.24.230.88/29','No access allowed from Saudi Arabia (SA-IP0282). ');
$ax += cidrblock($address,'31.24.230.96/27','No access allowed from Saudi Arabia (SA-IP0283). ');
$ax += cidrblock($address,'31.24.230.128/25','No access allowed from Saudi Arabia (SA-IP0284). ');
$ax += cidrblock($address,'31.24.231.0/25','No access allowed from Saudi Arabia (SA-IP0285). ');
$ax += cidrblock($address,'31.24.231.128/26','No access allowed from Saudi Arabia (SA-IP0286). ');
$ax += cidrblock($address,'31.166.0.0/15','No access allowed from Saudi Arabia (SA-IP0287). ');
$ax += cidrblock($address,'31.187.65.128/26','No access allowed from Saudi Arabia (SA-IP0288). ');
}
if(lmatch($address,'37','')) {
$ax += cidrblock($address,'37.16.32.0/19','No access allowed from Saudi Arabia (SA-IP0289). ');
$ax += cidrblock($address,'37.16.128.0/17','No access allowed from Saudi Arabia (SA-IP0290). ');
$ax += cidrblock($address,'37.37.37.37/32','No access allowed from Saudi Arabia (SA-IP0291). ');
$ax += cidrblock($address,'37.42.0.0/16','No access allowed from Saudi Arabia (SA-IP0292). ');
$ax += cidrblock($address,'37.43.0.0/23','No access allowed from Saudi Arabia (SA-IP0293). ');
$ax += cidrblock($address,'37.43.2.0/24','No access allowed from Saudi Arabia (SA-IP0294). ');
$ax += cidrblock($address,'37.43.4.0/22','No access allowed from Saudi Arabia (SA-IP0295). ');
$ax += cidrblock($address,'37.43.8.0/21','No access allowed from Saudi Arabia (SA-IP0296). ');
$ax += cidrblock($address,'37.43.16.0/20','No access allowed from Saudi Arabia (SA-IP0297). ');
$ax += cidrblock($address,'37.43.32.0/19','No access allowed from Saudi Arabia (SA-IP0298). ');
$ax += cidrblock($address,'37.43.64.0/18','No access allowed from Saudi Arabia (SA-IP0299). ');
$ax += cidrblock($address,'37.43.128.0/17','No access allowed from Saudi Arabia (SA-IP0300). ');
$ax += cidrblock($address,'37.56.0.0/16','No access allowed from Saudi Arabia (SA-IP0301). ');
$ax += cidrblock($address,'37.76.224.0/19','No access allowed from Saudi Arabia (SA-IP0302). ');
$ax += cidrblock($address,'37.99.128.0/18','No access allowed from Saudi Arabia (SA-IP0303). ');
$ax += cidrblock($address,'37.104.0.0/14','No access allowed from Saudi Arabia (SA-IP0304). ');
$ax += cidrblock($address,'37.121.0.0/16','No access allowed from Saudi Arabia (SA-IP0305). ');
$ax += cidrblock($address,'37.124.0.0/15','No access allowed from Saudi Arabia (SA-IP0306). ');
$ax += cidrblock($address,'37.126.0.0/16','No access allowed from Saudi Arabia (SA-IP0307). ');
$ax += cidrblock($address,'37.127.0.0/22','No access allowed from Saudi Arabia (SA-IP0308). ');
$ax += cidrblock($address,'37.127.4.0/23','No access allowed from Saudi Arabia (SA-IP0309). ');
$ax += cidrblock($address,'37.127.6.0/24','No access allowed from Saudi Arabia (SA-IP0310). ');
$ax += cidrblock($address,'37.127.7.0/25','No access allowed from Saudi Arabia (SA-IP0311). ');
$ax += cidrblock($address,'37.127.7.128/26','No access allowed from Saudi Arabia (SA-IP0312). ');
$ax += cidrblock($address,'37.127.7.192/27','No access allowed from Saudi Arabia (SA-IP0313). ');
$ax += cidrblock($address,'37.127.7.224/28','No access allowed from Saudi Arabia (SA-IP0314). ');
$ax += cidrblock($address,'37.127.7.248/29','No access allowed from Saudi Arabia (SA-IP0315). ');
$ax += cidrblock($address,'37.127.8.0/21','No access allowed from Saudi Arabia (SA-IP0316). ');
$ax += cidrblock($address,'37.127.16.0/20','No access allowed from Saudi Arabia (SA-IP0317). ');
$ax += cidrblock($address,'37.127.32.0/19','No access allowed from Saudi Arabia (SA-IP0318). ');
$ax += cidrblock($address,'37.127.64.0/18','No access allowed from Saudi Arabia (SA-IP0319). ');
$ax += cidrblock($address,'37.127.128.0/17','No access allowed from Saudi Arabia (SA-IP0320). ');
$ax += cidrblock($address,'37.141.0.0/16','No access allowed from Saudi Arabia (SA-IP0321). ');
$ax += cidrblock($address,'37.216.0.0/15','No access allowed from Saudi Arabia (SA-IP0322). ');
$ax += cidrblock($address,'37.224.0.0/16','No access allowed from Saudi Arabia (SA-IP0323). ');
$ax += cidrblock($address,'37.240.0.0/14','No access allowed from Saudi Arabia (SA-IP0324). ');
}
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'45.74.1.0/24','No access allowed from Saudi Arabia (SA-IP0325). ');
$ax += cidrblock($address,'46.18.160.0/21','No access allowed from Saudi Arabia (SA-IP0326). ');
$ax += cidrblock($address,'46.29.80.0/21','No access allowed from Saudi Arabia (SA-IP0327). ');
$ax += cidrblock($address,'46.38.64.0/19','No access allowed from Saudi Arabia (SA-IP0328). ');
$ax += cidrblock($address,'46.44.64.0/18','No access allowed from Saudi Arabia (SA-IP0329). ');
$ax += cidrblock($address,'46.49.128.0/17','No access allowed from Saudi Arabia (SA-IP0330). ');
$ax += cidrblock($address,'46.52.0.0/17','No access allowed from Saudi Arabia (SA-IP0331). ');
$ax += cidrblock($address,'46.149.0.0/20','No access allowed from Saudi Arabia (SA-IP0332). ');
$ax += cidrblock($address,'46.151.208.0/21','No access allowed from Saudi Arabia (SA-IP0333). ');
$ax += cidrblock($address,'46.152.0.0/15','No access allowed from Saudi Arabia (SA-IP0334). ');
$ax += cidrblock($address,'46.161.58.0/25','No access allowed from Saudi Arabia (SA-IP0335). ');
$ax += cidrblock($address,'46.184.0.0/17','No access allowed from Saudi Arabia (SA-IP0336). ');
$ax += cidrblock($address,'46.230.0.0/17','No access allowed from Saudi Arabia (SA-IP0337). ');
$ax += cidrblock($address,'46.235.88.0/21','No access allowed from Saudi Arabia (SA-IP0338). ');
$ax += cidrblock($address,'46.240.0.0/17','No access allowed from Saudi Arabia (SA-IP0339). ');
$ax += cidrblock($address,'46.251.128.0/19','No access allowed from Saudi Arabia (SA-IP0340). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.23.20.0/23','No access allowed from Saudi Arabia (SA-IP0341). ');
$ax += cidrblock($address,'5.41.0.0/16','No access allowed from Saudi Arabia (SA-IP0342). ');
$ax += cidrblock($address,'5.42.224.0/19','No access allowed from Saudi Arabia (SA-IP0343). ');
$ax += cidrblock($address,'5.62.61.124/30','No access allowed from Saudi Arabia (SA-IP0344). ');
$ax += cidrblock($address,'5.62.63.105/32','No access allowed from Saudi Arabia (SA-IP0345). ');
$ax += cidrblock($address,'5.62.63.106/31','No access allowed from Saudi Arabia (SA-IP0346). ');
$ax += cidrblock($address,'5.82.0.0/16','No access allowed from Saudi Arabia (SA-IP0347). ');
$ax += cidrblock($address,'5.108.0.0/14','No access allowed from Saudi Arabia (SA-IP0348). ');
$ax += cidrblock($address,'5.132.192.0/18','No access allowed from Saudi Arabia (SA-IP0349). ');
$ax += cidrblock($address,'5.156.0.0/16','No access allowed from Saudi Arabia (SA-IP0350). ');
$ax += cidrblock($address,'5.163.0.0/16','No access allowed from Saudi Arabia (SA-IP0351). ');
$ax += cidrblock($address,'5.244.0.0/14','No access allowed from Saudi Arabia (SA-IP0352). ');
if(lmatch($address,'50','')) {
$ax += cidrblock($address,'50.119.0.0/16','No access allowed from Saudi Arabia (SA-IP0353). ');
}
if(lmatch($address,'51','')) {
$ax += cidrblock($address,'51.36.0.0/18','No access allowed from Saudi Arabia (SA-IP0354). ');
$ax += cidrblock($address,'51.36.64.0/20','No access allowed from Saudi Arabia (SA-IP0355). ');
$ax += cidrblock($address,'51.36.81.128/25','No access allowed from Saudi Arabia (SA-IP0356). ');
$ax += cidrblock($address,'51.36.86.0/24','No access allowed from Saudi Arabia (SA-IP0357). ');
$ax += cidrblock($address,'51.36.88.0/21','No access allowed from Saudi Arabia (SA-IP0358). ');
$ax += cidrblock($address,'51.36.96.0/21','No access allowed from Saudi Arabia (SA-IP0359). ');
$ax += cidrblock($address,'51.36.106.0/23','No access allowed from Saudi Arabia (SA-IP0360). ');
$ax += cidrblock($address,'51.36.108.0/22','No access allowed from Saudi Arabia (SA-IP0361). ');
$ax += cidrblock($address,'51.36.112.0/22','No access allowed from Saudi Arabia (SA-IP0362). ');
$ax += cidrblock($address,'51.36.117.0/24','No access allowed from Saudi Arabia (SA-IP0363). ');
$ax += cidrblock($address,'51.36.118.0/24','No access allowed from Saudi Arabia (SA-IP0364). ');
$ax += cidrblock($address,'51.36.120.0/22','No access allowed from Saudi Arabia (SA-IP0365). ');
$ax += cidrblock($address,'51.36.126.0/23','No access allowed from Saudi Arabia (SA-IP0366). ');
$ax += cidrblock($address,'51.36.128.0/22','No access allowed from Saudi Arabia (SA-IP0367). ');
$ax += cidrblock($address,'51.36.134.128/25','No access allowed from Saudi Arabia (SA-IP0368). ');
$ax += cidrblock($address,'51.36.135.0/24','No access allowed from Saudi Arabia (SA-IP0369). ');
$ax += cidrblock($address,'51.36.136.0/22','No access allowed from Saudi Arabia (SA-IP0370). ');
$ax += cidrblock($address,'51.36.140.0/23','No access allowed from Saudi Arabia (SA-IP0371). ');
$ax += cidrblock($address,'51.36.143.128/26','No access allowed from Saudi Arabia (SA-IP0372). ');
$ax += cidrblock($address,'51.36.144.0/23','No access allowed from Saudi Arabia (SA-IP0373). ');
$ax += cidrblock($address,'51.36.146.0/24','No access allowed from Saudi Arabia (SA-IP0374). ');
$ax += cidrblock($address,'51.36.148.0/22','No access allowed from Saudi Arabia (SA-IP0375). ');
$ax += cidrblock($address,'51.36.152.0/22','No access allowed from Saudi Arabia (SA-IP0376). ');
$ax += cidrblock($address,'51.36.158.0/24','No access allowed from Saudi Arabia (SA-IP0377). ');
$ax += cidrblock($address,'51.36.161.0/24','No access allowed from Saudi Arabia (SA-IP0378). ');
$ax += cidrblock($address,'51.36.164.0/22','No access allowed from Saudi Arabia (SA-IP0379). ');
$ax += cidrblock($address,'51.36.168.0/24','No access allowed from Saudi Arabia (SA-IP0380). ');
$ax += cidrblock($address,'51.36.170.128/25','No access allowed from Saudi Arabia (SA-IP0381). ');
$ax += cidrblock($address,'51.36.171.0/24','No access allowed from Saudi Arabia (SA-IP0382). ');
$ax += cidrblock($address,'51.36.172.0/22','No access allowed from Saudi Arabia (SA-IP0383). ');
$ax += cidrblock($address,'51.36.180.0/22','No access allowed from Saudi Arabia (SA-IP0384). ');
$ax += cidrblock($address,'51.36.184.0/21','No access allowed from Saudi Arabia (SA-IP0385). ');
$ax += cidrblock($address,'51.36.193.0/24','No access allowed from Saudi Arabia (SA-IP0386). ');
$ax += cidrblock($address,'51.36.195.0/26','No access allowed from Saudi Arabia (SA-IP0387). ');
$ax += cidrblock($address,'51.36.196.0/22','No access allowed from Saudi Arabia (SA-IP0388). ');
$ax += cidrblock($address,'51.36.200.0/22','No access allowed from Saudi Arabia (SA-IP0389). ');
$ax += cidrblock($address,'51.36.205.0/24','No access allowed from Saudi Arabia (SA-IP0390). ');
$ax += cidrblock($address,'51.36.206.0/24','No access allowed from Saudi Arabia (SA-IP0391). ');
$ax += cidrblock($address,'51.36.208.0/22','No access allowed from Saudi Arabia (SA-IP0392). ');
$ax += cidrblock($address,'51.36.212.0/23','No access allowed from Saudi Arabia (SA-IP0393). ');
$ax += cidrblock($address,'51.36.214.0/24','No access allowed from Saudi Arabia (SA-IP0394). ');
$ax += cidrblock($address,'51.36.216.0/24','No access allowed from Saudi Arabia (SA-IP0395). ');
$ax += cidrblock($address,'51.36.218.0/23','No access allowed from Saudi Arabia (SA-IP0396). ');
$ax += cidrblock($address,'51.36.222.0/24','No access allowed from Saudi Arabia (SA-IP0397). ');
$ax += cidrblock($address,'51.36.224.0/21','No access allowed from Saudi Arabia (SA-IP0398). ');
$ax += cidrblock($address,'51.36.232.0/22','No access allowed from Saudi Arabia (SA-IP0399). ');
$ax += cidrblock($address,'51.36.239.0/24','No access allowed from Saudi Arabia (SA-IP0400). ');
$ax += cidrblock($address,'51.36.240.0/24','No access allowed from Saudi Arabia (SA-IP0401). ');
$ax += cidrblock($address,'51.36.242.0/23','No access allowed from Saudi Arabia (SA-IP0402). ');
$ax += cidrblock($address,'51.36.244.0/22','No access allowed from Saudi Arabia (SA-IP0403). ');
$ax += cidrblock($address,'51.36.248.0/22','No access allowed from Saudi Arabia (SA-IP0404). ');
$ax += cidrblock($address,'51.36.254.0/23','No access allowed from Saudi Arabia (SA-IP0405). ');
$ax += cidrblock($address,'51.39.0.0/16','No access allowed from Saudi Arabia (SA-IP0406). ');
$ax += cidrblock($address,'51.211.0.0/16','No access allowed from Saudi Arabia (SA-IP0407). ');
$ax += cidrblock($address,'51.218.0.0/16','No access allowed from Saudi Arabia (SA-IP0408). ');
$ax += cidrblock($address,'51.223.0.0/16','No access allowed from Saudi Arabia (SA-IP0409). ');
$ax += cidrblock($address,'51.235.0.0/16','No access allowed from Saudi Arabia (SA-IP0410). ');
$ax += cidrblock($address,'51.252.0.0/15','No access allowed from Saudi Arabia (SA-IP0411). ');
}
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.3.0.0/19','No access allowed from Saudi Arabia (SA-IP0412). ');
$ax += cidrblock($address,'62.3.33.0/24','No access allowed from Saudi Arabia (SA-IP0413). ');
$ax += cidrblock($address,'62.3.34.0/23','No access allowed from Saudi Arabia (SA-IP0414). ');
$ax += cidrblock($address,'62.3.36.0/22','No access allowed from Saudi Arabia (SA-IP0415). ');
$ax += cidrblock($address,'62.3.40.0/21','No access allowed from Saudi Arabia (SA-IP0416). ');
$ax += cidrblock($address,'62.3.48.0/20','No access allowed from Saudi Arabia (SA-IP0417). ');
$ax += cidrblock($address,'62.120.0.0/16','No access allowed from Saudi Arabia (SA-IP0418). ');
$ax += cidrblock($address,'62.149.64.0/18','No access allowed from Saudi Arabia (SA-IP0419). ');
$ax += cidrblock($address,'63.103.137.0/24','No access allowed from Saudi Arabia (SA-IP0420). ');
$ax += cidrblock($address,'63.164.12.48/32','No access allowed from Saudi Arabia (SA-IP0421). ');
$ax += cidrblock($address,'66.178.89.0/24','No access allowed from Saudi Arabia (SA-IP0422). ');
$ax += cidrblock($address,'67.215.12.152/29','No access allowed from Saudi Arabia (SA-IP0423). ');
$ax += cidrblock($address,'68.64.213.0/27','No access allowed from Saudi Arabia (SA-IP0424). ');
$ax += cidrblock($address,'68.64.213.48/28','No access allowed from Saudi Arabia (SA-IP0425). ');
$ax += cidrblock($address,'68.64.213.64/26','No access allowed from Saudi Arabia (SA-IP0426). ');
$ax += cidrblock($address,'68.64.213.128/27','No access allowed from Saudi Arabia (SA-IP0427). ');
$ax += cidrblock($address,'68.64.213.160/28','No access allowed from Saudi Arabia (SA-IP0428). ');
$ax += cidrblock($address,'68.64.213.176/31','No access allowed from Saudi Arabia (SA-IP0429). ');
$ax += cidrblock($address,'68.64.213.180/30','No access allowed from Saudi Arabia (SA-IP0430). ');
$ax += cidrblock($address,'68.64.213.184/29','No access allowed from Saudi Arabia (SA-IP0431). ');
$ax += cidrblock($address,'68.64.213.192/26','No access allowed from Saudi Arabia (SA-IP0432). ');
$ax += cidrblock($address,'69.24.241.12/30','No access allowed from Saudi Arabia (SA-IP0433). ');
$ax += cidrblock($address,'69.24.241.24/30','No access allowed from Saudi Arabia (SA-IP0434). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'77.30.0.0/15','No access allowed from Saudi Arabia (SA-IP0435). ');
$ax += cidrblock($address,'77.64.0.0/17','No access allowed from Saudi Arabia (SA-IP0436). ');
$ax += cidrblock($address,'77.73.192.0/21','No access allowed from Saudi Arabia (SA-IP0437). ');
$ax += cidrblock($address,'77.87.16.0/21','No access allowed from Saudi Arabia (SA-IP0438). ');
$ax += cidrblock($address,'77.95.216.0/21','No access allowed from Saudi Arabia (SA-IP0439). ');
$ax += cidrblock($address,'77.110.112.0/21','No access allowed from Saudi Arabia (SA-IP0440). ');
$ax += cidrblock($address,'77.221.96.0/19','No access allowed from Saudi Arabia (SA-IP0441). ');
$ax += cidrblock($address,'77.232.96.0/19','No access allowed from Saudi Arabia (SA-IP0442). ');
$ax += cidrblock($address,'77.232.176.0/21','No access allowed from Saudi Arabia (SA-IP0443). ');
$ax += cidrblock($address,'77.240.80.0/20','No access allowed from Saudi Arabia (SA-IP0444). ');
$ax += cidrblock($address,'77.240.128.0/20','No access allowed from Saudi Arabia (SA-IP0445). ');
$ax += cidrblock($address,'78.93.0.0/16','No access allowed from Saudi Arabia (SA-IP0446). ');
$ax += cidrblock($address,'78.95.0.0/16','No access allowed from Saudi Arabia (SA-IP0447). ');
$ax += cidrblock($address,'78.110.0.0/20','No access allowed from Saudi Arabia (SA-IP0448). ');
$ax += cidrblock($address,'78.138.192.0/18','No access allowed from Saudi Arabia (SA-IP0449). ');
$ax += cidrblock($address,'79.170.0.0/21','No access allowed from Saudi Arabia (SA-IP0450). ');
$ax += cidrblock($address,'79.170.48.0/21','No access allowed from Saudi Arabia (SA-IP0451). ');
$ax += cidrblock($address,'79.172.128.0/18','No access allowed from Saudi Arabia (SA-IP0452). ');
}
if(lmatch($address,'8','')) {
if(lmatch($address,'80','')) {
$ax += cidrblock($address,'80.74.80.0/20','No access allowed from Saudi Arabia (SA-IP0453). ');
$ax += cidrblock($address,'80.231.212.0/24','No access allowed from Saudi Arabia (SA-IP0454). ');
$ax += cidrblock($address,'80.240.64.0/20','No access allowed from Saudi Arabia (SA-IP0455). ');
}
if(lmatch($address,'81','')) {
$ax += cidrblock($address,'81.21.48.0/20','No access allowed from Saudi Arabia (SA-IP0456). ');
}
if(lmatch($address,'82','')) {
$ax += cidrblock($address,'82.116.140.0/24','No access allowed from Saudi Arabia (SA-IP0457). ');
$ax += cidrblock($address,'82.118.160.0/19','No access allowed from Saudi Arabia (SA-IP0458). ');
$ax += cidrblock($address,'82.147.192.0/19','No access allowed from Saudi Arabia (SA-IP0459). ');
$ax += cidrblock($address,'82.167.0.0/16','No access allowed from Saudi Arabia (SA-IP0460). ');
$ax += cidrblock($address,'82.214.196.0/24','No access allowed from Saudi Arabia (SA-IP0461). ');
}
if(lmatch($address,'83','')) {
$ax += cidrblock($address,'83.101.128.0/17','No access allowed from Saudi Arabia (SA-IP0462). ');
}
if(lmatch($address,'84','')) {
$ax += cidrblock($address,'84.22.224.0/19','No access allowed from Saudi Arabia (SA-IP0463). ');
$ax += cidrblock($address,'84.23.96.0/19','No access allowed from Saudi Arabia (SA-IP0464). ');
$ax += cidrblock($address,'84.235.0.0/17','No access allowed from Saudi Arabia (SA-IP0465). ');
}
if(lmatch($address,'85','')) {
$ax += cidrblock($address,'85.129.128.0/17','No access allowed from Saudi Arabia (SA-IP0466). ');
$ax += cidrblock($address,'85.184.232.0/21','No access allowed from Saudi Arabia (SA-IP0467). ');
$ax += cidrblock($address,'85.194.64.0/18','No access allowed from Saudi Arabia (SA-IP0468). ');
$ax += cidrblock($address,'85.203.35.0/24','No access allowed from Saudi Arabia (SA-IP0469). ');
$ax += cidrblock($address,'85.237.128.0/19','No access allowed from Saudi Arabia (SA-IP0470). ');
}
if(lmatch($address,'86','')) {
$ax += cidrblock($address,'86.51.0.0/16','No access allowed from Saudi Arabia (SA-IP0471). ');
$ax += cidrblock($address,'86.60.0.0/17','No access allowed from Saudi Arabia (SA-IP0472). ');
$ax += cidrblock($address,'86.111.192.0/21','No access allowed from Saudi Arabia (SA-IP0473). ');
}
if(lmatch($address,'87','')) {
$ax += cidrblock($address,'87.101.128.0/17','No access allowed from Saudi Arabia (SA-IP0474). ');
$ax += cidrblock($address,'87.109.0.0/16','No access allowed from Saudi Arabia (SA-IP0475). ');
$ax += cidrblock($address,'87.230.128.0/17','No access allowed from Saudi Arabia (SA-IP0476). ');
}
if(lmatch($address,'88','')) {
$ax += cidrblock($address,'88.81.0.0/19','No access allowed from Saudi Arabia (SA-IP0477). ');
$ax += cidrblock($address,'88.84.96.0/19','No access allowed from Saudi Arabia (SA-IP0478). ');
$ax += cidrblock($address,'88.85.224.0/19','No access allowed from Saudi Arabia (SA-IP0479). ');
$ax += cidrblock($address,'88.209.128.0/18','No access allowed from Saudi Arabia (SA-IP0480). ');
$ax += cidrblock($address,'88.213.0.0/17','No access allowed from Saudi Arabia (SA-IP0481). ');
}
if(lmatch($address,'89','')) {
$ax += cidrblock($address,'89.4.0.0/15','No access allowed from Saudi Arabia (SA-IP0482). ');
$ax += cidrblock($address,'89.108.0.0/18','No access allowed from Saudi Arabia (SA-IP0483). ');
$ax += cidrblock($address,'89.144.64.0/18','No access allowed from Saudi Arabia (SA-IP0484). ');
$ax += cidrblock($address,'89.147.0.0/18','No access allowed from Saudi Arabia (SA-IP0485). ');
$ax += cidrblock($address,'89.189.224.0/19','No access allowed from Saudi Arabia (SA-IP0486). ');
$ax += cidrblock($address,'89.237.128.0/18','No access allowed from Saudi Arabia (SA-IP0487). ');
}
}
if(lmatch($address,'9','')) {
if(lmatch($address,'90','')) {
$ax += cidrblock($address,'90.148.0.0/16','No access allowed from Saudi Arabia (SA-IP0488). ');
}
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.92.176.0/23','No access allowed from Saudi Arabia (SA-IP0489). ');
$ax += cidrblock($address,'91.102.16.0/21','No access allowed from Saudi Arabia (SA-IP0490). ');
$ax += cidrblock($address,'91.147.128.0/18','No access allowed from Saudi Arabia (SA-IP0491). ');
$ax += cidrblock($address,'91.151.160.0/20','No access allowed from Saudi Arabia (SA-IP0492). ');
$ax += cidrblock($address,'91.195.88.0/23','No access allowed from Saudi Arabia (SA-IP0493). ');
$ax += cidrblock($address,'91.198.62.0/24','No access allowed from Saudi Arabia (SA-IP0494). ');
$ax += cidrblock($address,'91.198.102.0/24','No access allowed from Saudi Arabia (SA-IP0495). ');
$ax += cidrblock($address,'91.198.251.0/24','No access allowed from Saudi Arabia (SA-IP0496). ');
$ax += cidrblock($address,'91.199.107.0/24','No access allowed from Saudi Arabia (SA-IP0497). ');
$ax += cidrblock($address,'91.199.187.0/24','No access allowed from Saudi Arabia (SA-IP0498). ');
$ax += cidrblock($address,'91.206.134.0/23','No access allowed from Saudi Arabia (SA-IP0499). ');
$ax += cidrblock($address,'91.208.4.0/24','No access allowed from Saudi Arabia (SA-IP0500). ');
$ax += cidrblock($address,'91.208.156.0/24','No access allowed from Saudi Arabia (SA-IP0501). ');
$ax += cidrblock($address,'91.209.253.0/24','No access allowed from Saudi Arabia (SA-IP0502). ');
$ax += cidrblock($address,'91.212.67.0/24','No access allowed from Saudi Arabia (SA-IP0503). ');
$ax += cidrblock($address,'91.213.18.0/24','No access allowed from Saudi Arabia (SA-IP0504). ');
$ax += cidrblock($address,'91.213.205.0/24','No access allowed from Saudi Arabia (SA-IP0505). ');
$ax += cidrblock($address,'91.213.213.0/24','No access allowed from Saudi Arabia (SA-IP0506). ');
$ax += cidrblock($address,'91.221.22.0/23','No access allowed from Saudi Arabia (SA-IP0507). ');
$ax += cidrblock($address,'91.221.184.0/23','No access allowed from Saudi Arabia (SA-IP0508). ');
$ax += cidrblock($address,'91.221.202.0/23','No access allowed from Saudi Arabia (SA-IP0509). ');
$ax += cidrblock($address,'91.222.200.0/22','No access allowed from Saudi Arabia (SA-IP0510). ');
$ax += cidrblock($address,'91.223.210.0/24','No access allowed from Saudi Arabia (SA-IP0511). ');
$ax += cidrblock($address,'91.227.22.0/24','No access allowed from Saudi Arabia (SA-IP0512). ');
$ax += cidrblock($address,'91.227.24.0/23','No access allowed from Saudi Arabia (SA-IP0513). ');
$ax += cidrblock($address,'91.229.32.0/23','No access allowed from Saudi Arabia (SA-IP0514). ');
$ax += cidrblock($address,'91.229.220.0/24','No access allowed from Saudi Arabia (SA-IP0515). ');
$ax += cidrblock($address,'91.230.124.0/23','No access allowed from Saudi Arabia (SA-IP0516). ');
$ax += cidrblock($address,'91.233.141.0/24','No access allowed from Saudi Arabia (SA-IP0517). ');
$ax += cidrblock($address,'91.233.174.0/24','No access allowed from Saudi Arabia (SA-IP0518). ');
$ax += cidrblock($address,'91.237.21.0/24','No access allowed from Saudi Arabia (SA-IP0519). ');
$ax += cidrblock($address,'91.237.22.0/23','No access allowed from Saudi Arabia (SA-IP0520). ');
$ax += cidrblock($address,'91.237.28.0/22','No access allowed from Saudi Arabia (SA-IP0521). ');
$ax += cidrblock($address,'91.238.113.0/24','No access allowed from Saudi Arabia (SA-IP0522). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.43.168.0/21','No access allowed from Saudi Arabia (SA-IP0523). ');
$ax += cidrblock($address,'92.48.0.0/18','No access allowed from Saudi Arabia (SA-IP0524). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.98.0.0/16','No access allowed from Saudi Arabia (SA-IP0525). ');
$ax += cidrblock($address,'93.112.0.0/16','No access allowed from Saudi Arabia (SA-IP0526). ');
$ax += cidrblock($address,'93.168.0.0/15','No access allowed from Saudi Arabia (SA-IP0527). ');
$ax += cidrblock($address,'93.178.0.0/18','No access allowed from Saudi Arabia (SA-IP0528). ');
$ax += cidrblock($address,'93.189.96.0/21','No access allowed from Saudi Arabia (SA-IP0529). ');
$ax += cidrblock($address,'93.189.192.0/21','No access allowed from Saudi Arabia (SA-IP0530). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.48.0.0/15','No access allowed from Saudi Arabia (SA-IP0531). ');
$ax += cidrblock($address,'94.77.192.0/18','No access allowed from Saudi Arabia (SA-IP0532). ');
$ax += cidrblock($address,'94.96.0.0/14','No access allowed from Saudi Arabia (SA-IP0533). ');
$ax += cidrblock($address,'94.143.224.0/21','No access allowed from Saudi Arabia (SA-IP0534). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.129.8.0/21','No access allowed from Saudi Arabia (SA-IP0535). ');
$ax += cidrblock($address,'95.177.128.0/17','No access allowed from Saudi Arabia (SA-IP0536). ');
$ax += cidrblock($address,'95.184.0.0/14','No access allowed from Saudi Arabia (SA-IP0537). ');
$ax += cidrblock($address,'95.218.0.0/15','No access allowed from Saudi Arabia (SA-IP0538). ');
}
}
$ax += inmatch($query,'satestsa','Test function. (SA). ');
// End of SA list
