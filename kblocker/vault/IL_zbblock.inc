<?php
// *php 5 fix
global $ax;
// Israel Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / IL-2018.65.634';
$ax += rmatch($hoster,'.il','No access allowed from Israel (IL-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.132.9.0/24','No access allowed from Israel (IL-IP0001). ');
$ax += cidrblock($address,'104.132.36.0/24','No access allowed from Israel (IL-IP0002). ');
$ax += cidrblock($address,'104.132.52.0/24','No access allowed from Israel (IL-IP0003). ');
$ax += cidrblock($address,'108.163.171.232/29','No access allowed from Israel (IL-IP0004). ');
$ax += cidrblock($address,'109.64.0.0/14','No access allowed from Israel (IL-IP0005). ');
$ax += cidrblock($address,'109.95.128.0/21','No access allowed from Israel (IL-IP0006). ');
$ax += cidrblock($address,'109.160.128.0/17','No access allowed from Israel (IL-IP0007). ');
$ax += cidrblock($address,'109.186.0.0/16','No access allowed from Israel (IL-IP0008). ');
$ax += cidrblock($address,'109.226.0.0/18','No access allowed from Israel (IL-IP0009). ');
$ax += cidrblock($address,'109.234.16.0/21','No access allowed from Israel (IL-IP0010). ');
$ax += cidrblock($address,'109.253.0.0/16','No access allowed from Israel (IL-IP0011). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.90.59.0/24','No access allowed from Israel (IL-IP0012). ');
$ax += cidrblock($address,'128.139.0.0/16','No access allowed from Israel (IL-IP0013). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'132.64.0.0/13','No access allowed from Israel (IL-IP0014). ');
$ax += cidrblock($address,'132.72.0.0/14','No access allowed from Israel (IL-IP0015). ');
$ax += cidrblock($address,'132.76.0.0/15','No access allowed from Israel (IL-IP0016). ');
$ax += cidrblock($address,'132.78.0.0/16','No access allowed from Israel (IL-IP0017). ');
$ax += cidrblock($address,'134.191.232.0/24','No access allowed from Israel (IL-IP0018). ');
$ax += cidrblock($address,'134.191.254.0/24','No access allowed from Israel (IL-IP0019). ');
$ax += cidrblock($address,'138.134.0.0/16','No access allowed from Israel (IL-IP0020). ');
$ax += cidrblock($address,'139.181.116.0/22','No access allowed from Israel (IL-IP0021). ');
$ax += cidrblock($address,'139.181.156.0/22','No access allowed from Israel (IL-IP0022). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'141.226.0.0/18','No access allowed from Israel (IL-IP0023). ');
$ax += cidrblock($address,'141.226.64.0/19','No access allowed from Israel (IL-IP0024). ');
$ax += cidrblock($address,'141.226.96.0/20','No access allowed from Israel (IL-IP0025). ');
$ax += cidrblock($address,'141.226.118.0/23','No access allowed from Israel (IL-IP0026). ');
$ax += cidrblock($address,'141.226.120.0/22','No access allowed from Israel (IL-IP0027). ');
$ax += cidrblock($address,'141.226.124.0/23','No access allowed from Israel (IL-IP0028). ');
$ax += cidrblock($address,'141.226.127.0/24','No access allowed from Israel (IL-IP0029). ');
$ax += cidrblock($address,'141.226.128.0/24','No access allowed from Israel (IL-IP0030). ');
$ax += cidrblock($address,'141.226.132.0/22','No access allowed from Israel (IL-IP0031). ');
$ax += cidrblock($address,'141.226.139.0/24','No access allowed from Israel (IL-IP0032). ');
$ax += cidrblock($address,'141.226.144.0/20','No access allowed from Israel (IL-IP0033). ');
$ax += cidrblock($address,'141.226.160.0/19','No access allowed from Israel (IL-IP0034). ');
$ax += cidrblock($address,'141.226.192.0/19','No access allowed from Israel (IL-IP0035). ');
$ax += cidrblock($address,'141.226.226.0/23','No access allowed from Israel (IL-IP0036). ');
$ax += cidrblock($address,'141.226.232.0/21','No access allowed from Israel (IL-IP0037). ');
$ax += cidrblock($address,'141.226.240.0/20','No access allowed from Israel (IL-IP0038). ');
$ax += cidrblock($address,'144.178.29.80/28','No access allowed from Israel (IL-IP0039). ');
$ax += cidrblock($address,'146.185.56.0/21','No access allowed from Israel (IL-IP0040). ');
$ax += cidrblock($address,'147.161.0.0/16','No access allowed from Israel (IL-IP0041). ');
$ax += cidrblock($address,'147.233.0.0/16','No access allowed from Israel (IL-IP0042). ');
$ax += cidrblock($address,'147.234.0.0/15','No access allowed from Israel (IL-IP0043). ');
$ax += cidrblock($address,'147.236.0.0/15','No access allowed from Israel (IL-IP0044). ');
$ax += cidrblock($address,'148.76.224.0/19','No access allowed from Israel (IL-IP0045). ');
$ax += cidrblock($address,'149.49.0.0/16','No access allowed from Israel (IL-IP0046). ');
$ax += cidrblock($address,'149.50.0.0/16','No access allowed from Israel (IL-IP0047). ');
$ax += cidrblock($address,'149.78.6.115/32','No access allowed from Israel (IL-IP0048). ');
$ax += cidrblock($address,'149.78.10.119/32','No access allowed from Israel (IL-IP0049). ');
$ax += cidrblock($address,'149.78.94.238/32','No access allowed from Israel (IL-IP0050). ');
$ax += cidrblock($address,'149.78.111.25/32','No access allowed from Israel (IL-IP0051). ');
$ax += cidrblock($address,'149.78.128.0/17','No access allowed from Israel (IL-IP0052). ');
$ax += cidrblock($address,'149.88.0.0/16','No access allowed from Israel (IL-IP0053). ');
$ax += cidrblock($address,'149.126.73.0/27','No access allowed from Israel (IL-IP0054). ');
$ax += cidrblock($address,'149.126.73.32/30','No access allowed from Israel (IL-IP0055). ');
$ax += cidrblock($address,'149.126.73.36/31','No access allowed from Israel (IL-IP0056). ');
$ax += cidrblock($address,'149.126.73.39/32','No access allowed from Israel (IL-IP0057). ');
$ax += cidrblock($address,'149.126.73.40/29','No access allowed from Israel (IL-IP0058). ');
$ax += cidrblock($address,'149.126.73.48/28','No access allowed from Israel (IL-IP0059). ');
$ax += cidrblock($address,'149.126.73.64/26','No access allowed from Israel (IL-IP0060). ');
$ax += cidrblock($address,'149.126.73.128/25','No access allowed from Israel (IL-IP0061). ');
$ax += cidrblock($address,'149.126.75.1/32','No access allowed from Israel (IL-IP0062). ');
$ax += cidrblock($address,'149.126.75.2/31','No access allowed from Israel (IL-IP0063). ');
$ax += cidrblock($address,'149.126.75.4/30','No access allowed from Israel (IL-IP0064). ');
$ax += cidrblock($address,'149.126.75.8/29','No access allowed from Israel (IL-IP0065). ');
$ax += cidrblock($address,'149.126.75.16/28','No access allowed from Israel (IL-IP0066). ');
$ax += cidrblock($address,'149.126.75.32/27','No access allowed from Israel (IL-IP0067). ');
$ax += cidrblock($address,'149.126.75.64/26','No access allowed from Israel (IL-IP0068). ');
$ax += cidrblock($address,'149.126.75.128/25','No access allowed from Israel (IL-IP0069). ');
$ax += cidrblock($address,'149.126.78.128/25','No access allowed from Israel (IL-IP0070). ');
$ax += cidrblock($address,'149.126.79.0/24','No access allowed from Israel (IL-IP0071). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'150.130.112.0/22','No access allowed from Israel (IL-IP0072). ');
$ax += cidrblock($address,'151.101.108.0/22','No access allowed from Israel (IL-IP0073). ');
$ax += cidrblock($address,'154.16.112.0/23','No access allowed from Israel (IL-IP0074). ');
$ax += cidrblock($address,'154.16.116.0/22','No access allowed from Israel (IL-IP0075). ');
$ax += cidrblock($address,'154.42.144.0/20','No access allowed from Israel (IL-IP0076). ');
$ax += cidrblock($address,'155.254.207.0/24','No access allowed from Israel (IL-IP0077). ');
$ax += cidrblock($address,'158.46.181.0/24','No access allowed from Israel (IL-IP0078). ');
$ax += cidrblock($address,'159.180.20.0/24','No access allowed from Israel (IL-IP0079). ');
$ax += cidrblock($address,'159.253.248.0/21','No access allowed from Israel (IL-IP0080). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'164.138.112.0/20','No access allowed from Israel (IL-IP0081). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'17.78.64.0/18','No access allowed from Israel (IL-IP0082). ');
$ax += cidrblock($address,'17.78.128.0/18','No access allowed from Israel (IL-IP0083). ');
$ax += cidrblock($address,'17.79.0.0/20','No access allowed from Israel (IL-IP0084). ');
$ax += cidrblock($address,'17.235.240.0/20','No access allowed from Israel (IL-IP0085). ');
$ax += cidrblock($address,'172.69.128.0/22','No access allowed from Israel (IL-IP0086). ');
$ax += cidrblock($address,'174.143.78.224/29','No access allowed from Israel (IL-IP0087). ');
$ax += cidrblock($address,'175.41.13.0/24','No access allowed from Israel (IL-IP0088). ');
$ax += cidrblock($address,'176.12.128.0/17','No access allowed from Israel (IL-IP0089). ');
$ax += cidrblock($address,'176.13.0.0/16','No access allowed from Israel (IL-IP0090). ');
$ax += cidrblock($address,'176.106.224.0/21','No access allowed from Israel (IL-IP0091). ');
$ax += cidrblock($address,'176.228.0.0/14','No access allowed from Israel (IL-IP0092). ');
$ax += cidrblock($address,'176.241.112.0/21','No access allowed from Israel (IL-IP0093). ');
$ax += cidrblock($address,'178.171.102.0/24','No access allowed from Israel (IL-IP0094). ');
$ax += cidrblock($address,'178.249.104.0/21','No access allowed from Israel (IL-IP0095). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'182.54.236.0/24','No access allowed from Israel (IL-IP0096). ');
$ax += cidrblock($address,'184.169.82.0/24','No access allowed from Israel (IL-IP0097). ');
$ax += cidrblock($address,'185.3.144.0/22','No access allowed from Israel (IL-IP0098). ');
$ax += cidrblock($address,'185.6.64.0/22','No access allowed from Israel (IL-IP0099). ');
$ax += cidrblock($address,'185.10.4.0/22','No access allowed from Israel (IL-IP0100). ');
$ax += cidrblock($address,'185.10.64.0/22','No access allowed from Israel (IL-IP0101). ');
$ax += cidrblock($address,'185.11.44.0/22','No access allowed from Israel (IL-IP0102). ');
$ax += cidrblock($address,'185.11.124.0/22','No access allowed from Israel (IL-IP0103). ');
$ax += cidrblock($address,'185.13.192.0/22','No access allowed from Israel (IL-IP0104). ');
$ax += cidrblock($address,'185.16.88.0/22','No access allowed from Israel (IL-IP0105). ');
$ax += cidrblock($address,'185.18.204.0/22','No access allowed from Israel (IL-IP0106). ');
$ax += cidrblock($address,'185.21.8.0/22','No access allowed from Israel (IL-IP0107). ');
$ax += cidrblock($address,'185.23.172.0/22','No access allowed from Israel (IL-IP0108). ');
$ax += cidrblock($address,'185.24.76.0/22','No access allowed from Israel (IL-IP0109). ');
$ax += cidrblock($address,'185.24.204.0/22','No access allowed from Israel (IL-IP0110). ');
$ax += cidrblock($address,'185.25.3.0/24','No access allowed from Israel (IL-IP0111). ');
$ax += cidrblock($address,'185.27.104.0/22','No access allowed from Israel (IL-IP0112). ');
$ax += cidrblock($address,'185.28.152.0/22','No access allowed from Israel (IL-IP0113). ');
$ax += cidrblock($address,'185.32.112.0/22','No access allowed from Israel (IL-IP0114). ');
$ax += cidrblock($address,'185.32.176.0/22','No access allowed from Israel (IL-IP0115). ');
$ax += cidrblock($address,'185.36.22.0/24','No access allowed from Israel (IL-IP0116). ');
$ax += cidrblock($address,'185.37.148.0/22','No access allowed from Israel (IL-IP0117). ');
$ax += cidrblock($address,'185.46.76.0/22','No access allowed from Israel (IL-IP0118). ');
$ax += cidrblock($address,'185.47.172.0/22','No access allowed from Israel (IL-IP0119). ');
$ax += cidrblock($address,'185.49.100.0/22','No access allowed from Israel (IL-IP0120). ');
$ax += cidrblock($address,'185.53.208.0/24','No access allowed from Israel (IL-IP0121). ');
$ax += cidrblock($address,'185.56.72.0/22','No access allowed from Israel (IL-IP0122). ');
$ax += cidrblock($address,'185.56.163.96/28','No access allowed from Israel (IL-IP0123). ');
$ax += cidrblock($address,'185.60.168.0/22','No access allowed from Israel (IL-IP0124). ');
$ax += cidrblock($address,'185.62.120.0/22','No access allowed from Israel (IL-IP0125). ');
$ax += cidrblock($address,'185.64.8.0/23','No access allowed from Israel (IL-IP0126). ');
$ax += cidrblock($address,'185.64.11.0/24','No access allowed from Israel (IL-IP0127). ');
$ax += cidrblock($address,'185.70.248.0/22','No access allowed from Israel (IL-IP0128). ');
$ax += cidrblock($address,'185.77.248.0/24','No access allowed from Israel (IL-IP0129). ');
$ax += cidrblock($address,'185.80.108.0/22','No access allowed from Israel (IL-IP0130). ');
$ax += cidrblock($address,'185.80.200.0/24','No access allowed from Israel (IL-IP0131). ');
$ax += cidrblock($address,'185.82.52.0/23','No access allowed from Israel (IL-IP0132). ');
$ax += cidrblock($address,'185.82.54.0/24','No access allowed from Israel (IL-IP0133). ');
$ax += cidrblock($address,'185.82.68.0/22','No access allowed from Israel (IL-IP0134). ');
$ax += cidrblock($address,'185.83.220.0/22','No access allowed from Israel (IL-IP0135). ');
$ax += cidrblock($address,'185.86.40.0/23','No access allowed from Israel (IL-IP0136). ');
$ax += cidrblock($address,'185.86.204.0/22','No access allowed from Israel (IL-IP0137). ');
$ax += cidrblock($address,'185.87.160.0/22','No access allowed from Israel (IL-IP0138). ');
$ax += cidrblock($address,'185.97.124.0/24','No access allowed from Israel (IL-IP0139). ');
$ax += cidrblock($address,'185.97.126.0/23','No access allowed from Israel (IL-IP0140). ');
$ax += cidrblock($address,'185.99.96.0/23','No access allowed from Israel (IL-IP0141). ');
$ax += cidrblock($address,'185.102.0.0/22','No access allowed from Israel (IL-IP0142). ');
$ax += cidrblock($address,'185.105.176.0/22','No access allowed from Israel (IL-IP0143). ');
$ax += cidrblock($address,'185.106.32.0/22','No access allowed from Israel (IL-IP0144). ');
$ax += cidrblock($address,'185.106.128.0/22','No access allowed from Israel (IL-IP0145). ');
$ax += cidrblock($address,'185.108.80.0/22','No access allowed from Israel (IL-IP0146). ');
$ax += cidrblock($address,'185.109.148.0/22','No access allowed from Israel (IL-IP0147). ');
$ax += cidrblock($address,'185.110.108.0/22','No access allowed from Israel (IL-IP0148). ');
$ax += cidrblock($address,'185.114.120.0/24','No access allowed from Israel (IL-IP0149). ');
$ax += cidrblock($address,'185.115.212.0/22','No access allowed from Israel (IL-IP0150). ');
$ax += cidrblock($address,'185.115.224.0/22','No access allowed from Israel (IL-IP0151). ');
$ax += cidrblock($address,'185.116.100.0/22','No access allowed from Israel (IL-IP0152). ');
$ax += cidrblock($address,'185.118.252.0/22','No access allowed from Israel (IL-IP0153). ');
$ax += cidrblock($address,'185.120.124.0/22','No access allowed from Israel (IL-IP0154). ');
$ax += cidrblock($address,'185.122.8.0/22','No access allowed from Israel (IL-IP0155). ');
$ax += cidrblock($address,'185.125.12.0/22','No access allowed from Israel (IL-IP0156). ');
$ax += cidrblock($address,'185.125.224.32/32','No access allowed from Israel (IL-IP0157). ');
$ax += cidrblock($address,'185.125.226.32/32','No access allowed from Israel (IL-IP0158). ');
$ax += cidrblock($address,'185.125.226.72/32','No access allowed from Israel (IL-IP0159). ');
$ax += cidrblock($address,'185.127.8.0/22','No access allowed from Israel (IL-IP0160). ');
$ax += cidrblock($address,'185.130.84.0/22','No access allowed from Israel (IL-IP0161). ');
$ax += cidrblock($address,'185.131.144.0/22','No access allowed from Israel (IL-IP0162). ');
$ax += cidrblock($address,'185.131.176.0/22','No access allowed from Israel (IL-IP0163). ');
$ax += cidrblock($address,'185.132.156.0/22','No access allowed from Israel (IL-IP0164). ');
$ax += cidrblock($address,'185.136.44.0/22','No access allowed from Israel (IL-IP0165). ');
$ax += cidrblock($address,'185.138.168.0/22','No access allowed from Israel (IL-IP0166). ');
$ax += cidrblock($address,'185.139.228.0/22','No access allowed from Israel (IL-IP0167). ');
$ax += cidrblock($address,'185.139.240.0/22','No access allowed from Israel (IL-IP0168). ');
$ax += cidrblock($address,'185.144.168.0/22','No access allowed from Israel (IL-IP0169). ');
$ax += cidrblock($address,'185.145.28.0/22','No access allowed from Israel (IL-IP0170). ');
$ax += cidrblock($address,'185.145.212.0/22','No access allowed from Israel (IL-IP0171). ');
$ax += cidrblock($address,'185.149.252.0/22','No access allowed from Israel (IL-IP0172). ');
$ax += cidrblock($address,'185.151.196.0/22','No access allowed from Israel (IL-IP0173). ');
$ax += cidrblock($address,'185.153.148.0/23','No access allowed from Israel (IL-IP0174). ');
$ax += cidrblock($address,'185.153.151.0/24','No access allowed from Israel (IL-IP0175). ');
$ax += cidrblock($address,'185.162.124.0/22','No access allowed from Israel (IL-IP0176). ');
$ax += cidrblock($address,'185.162.148.0/22','No access allowed from Israel (IL-IP0177). ');
$ax += cidrblock($address,'185.163.148.0/22','No access allowed from Israel (IL-IP0178). ');
$ax += cidrblock($address,'185.164.16.0/22','No access allowed from Israel (IL-IP0179). ');
$ax += cidrblock($address,'185.164.192.0/22','No access allowed from Israel (IL-IP0180). ');
$ax += cidrblock($address,'185.167.152.0/22','No access allowed from Israel (IL-IP0181). ');
$ax += cidrblock($address,'185.168.68.0/22','No access allowed from Israel (IL-IP0182). ');
$ax += cidrblock($address,'185.169.148.0/22','No access allowed from Israel (IL-IP0183). ');
$ax += cidrblock($address,'185.170.56.0/22','No access allowed from Israel (IL-IP0184). ');
$ax += cidrblock($address,'185.172.80.0/22','No access allowed from Israel (IL-IP0185). ');
$ax += cidrblock($address,'185.174.158.0/23','No access allowed from Israel (IL-IP0186). ');
$ax += cidrblock($address,'185.175.108.0/22','No access allowed from Israel (IL-IP0187). ');
$ax += cidrblock($address,'185.179.240.0/22','No access allowed from Israel (IL-IP0188). ');
$ax += cidrblock($address,'185.183.132.0/22','No access allowed from Israel (IL-IP0189). ');
$ax += cidrblock($address,'185.184.16.0/22','No access allowed from Israel (IL-IP0190). ');
$ax += cidrblock($address,'185.185.132.0/22','No access allowed from Israel (IL-IP0191). ');
$ax += cidrblock($address,'185.187.36.0/22','No access allowed from Israel (IL-IP0192). ');
$ax += cidrblock($address,'185.187.160.0/22','No access allowed from Israel (IL-IP0193). ');
$ax += cidrblock($address,'185.191.204.0/22','No access allowed from Israel (IL-IP0194). ');
$ax += cidrblock($address,'185.194.240.0/22','No access allowed from Israel (IL-IP0195). ');
$ax += cidrblock($address,'185.197.204.0/22','No access allowed from Israel (IL-IP0196). ');
$ax += cidrblock($address,'185.206.252.0/22','No access allowed from Israel (IL-IP0197). ');
$ax += cidrblock($address,'185.208.196.0/22','No access allowed from Israel (IL-IP0198). ');
$ax += cidrblock($address,'185.213.252.0/22','No access allowed from Israel (IL-IP0199). ');
$ax += cidrblock($address,'185.217.96.0/22','No access allowed from Israel (IL-IP0200). ');
$ax += cidrblock($address,'185.220.204.0/22','No access allowed from Israel (IL-IP0201). ');
$ax += cidrblock($address,'185.223.0.0/22','No access allowed from Israel (IL-IP0202). ');
$ax += cidrblock($address,'185.225.172.0/22','No access allowed from Israel (IL-IP0203). ');
$ax += cidrblock($address,'185.229.224.0/22','No access allowed from Israel (IL-IP0204). ');
$ax += cidrblock($address,'185.230.60.0/22','No access allowed from Israel (IL-IP0205). ');
$ax += cidrblock($address,'185.239.28.0/22','No access allowed from Israel (IL-IP0206). ');
$ax += cidrblock($address,'185.241.4.0/22','No access allowed from Israel (IL-IP0207). ');
$ax += cidrblock($address,'185.241.24.0/22','No access allowed from Israel (IL-IP0208). ');
$ax += cidrblock($address,'188.64.96.0/21','No access allowed from Israel (IL-IP0209). ');
$ax += cidrblock($address,'188.64.200.0/21','No access allowed from Israel (IL-IP0210). ');
$ax += cidrblock($address,'188.120.128.0/19','No access allowed from Israel (IL-IP0211). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'191.96.216.0/22','No access allowed from Israel (IL-IP0212). ');
$ax += cidrblock($address,'192.54.204.0/24','No access allowed from Israel (IL-IP0213). ');
$ax += cidrblock($address,'192.86.25.0/24','No access allowed from Israel (IL-IP0214). ');
$ax += cidrblock($address,'192.86.89.0/24','No access allowed from Israel (IL-IP0215). ');
$ax += cidrblock($address,'192.114.0.0/18','No access allowed from Israel (IL-IP0216). ');
$ax += cidrblock($address,'192.114.64.0/22','No access allowed from Israel (IL-IP0217). ');
$ax += cidrblock($address,'192.114.68.0/23','No access allowed from Israel (IL-IP0218). ');
$ax += cidrblock($address,'192.114.70.0/24','No access allowed from Israel (IL-IP0219). ');
$ax += cidrblock($address,'192.114.71.0/29','No access allowed from Israel (IL-IP0220). ');
$ax += cidrblock($address,'192.114.71.8/30','No access allowed from Israel (IL-IP0221). ');
$ax += cidrblock($address,'192.114.71.12/32','No access allowed from Israel (IL-IP0222). ');
$ax += cidrblock($address,'192.114.71.14/31','No access allowed from Israel (IL-IP0223). ');
$ax += cidrblock($address,'192.114.71.16/28','No access allowed from Israel (IL-IP0224). ');
$ax += cidrblock($address,'192.114.71.32/27','No access allowed from Israel (IL-IP0225). ');
$ax += cidrblock($address,'192.114.71.64/26','No access allowed from Israel (IL-IP0226). ');
$ax += cidrblock($address,'192.114.71.128/25','No access allowed from Israel (IL-IP0227). ');
$ax += cidrblock($address,'192.114.72.0/21','No access allowed from Israel (IL-IP0228). ');
$ax += cidrblock($address,'192.114.80.0/20','No access allowed from Israel (IL-IP0229). ');
$ax += cidrblock($address,'192.114.96.0/19','No access allowed from Israel (IL-IP0230). ');
$ax += cidrblock($address,'192.114.128.0/17','No access allowed from Israel (IL-IP0231). ');
$ax += cidrblock($address,'192.115.0.0/16','No access allowed from Israel (IL-IP0232). ');
$ax += cidrblock($address,'192.116.0.0/20','No access allowed from Israel (IL-IP0233). ');
$ax += cidrblock($address,'192.116.24.0/21','No access allowed from Israel (IL-IP0234). ');
$ax += cidrblock($address,'192.116.32.0/19','No access allowed from Israel (IL-IP0235). ');
$ax += cidrblock($address,'192.116.64.0/18','No access allowed from Israel (IL-IP0236). ');
$ax += cidrblock($address,'192.116.128.0/17','No access allowed from Israel (IL-IP0237). ');
$ax += cidrblock($address,'192.117.0.0/16','No access allowed from Israel (IL-IP0238). ');
$ax += cidrblock($address,'192.118.0.0/16','No access allowed from Israel (IL-IP0239). ');
$ax += cidrblock($address,'192.132.244.0/24','No access allowed from Israel (IL-IP0240). ');
$ax += cidrblock($address,'192.133.36.0/24','No access allowed from Israel (IL-IP0241). ');
$ax += cidrblock($address,'192.189.70.0/24','No access allowed from Israel (IL-IP0242). ');
$ax += cidrblock($address,'192.206.86.0/24','No access allowed from Israel (IL-IP0243). ');
$ax += cidrblock($address,'192.206.222.0/23','No access allowed from Israel (IL-IP0244). ');
$ax += cidrblock($address,'192.206.224.0/23','No access allowed from Israel (IL-IP0245). ');
$ax += cidrblock($address,'192.206.226.0/24','No access allowed from Israel (IL-IP0246). ');
$ax += cidrblock($address,'193.16.147.0/24','No access allowed from Israel (IL-IP0247). ');
$ax += cidrblock($address,'193.16.238.0/24','No access allowed from Israel (IL-IP0248). ');
$ax += cidrblock($address,'193.17.42.0/24','No access allowed from Israel (IL-IP0249). ');
$ax += cidrblock($address,'193.17.68.0/24','No access allowed from Israel (IL-IP0250). ');
$ax += cidrblock($address,'193.17.74.0/24','No access allowed from Israel (IL-IP0251). ');
$ax += cidrblock($address,'193.27.92.0/23','No access allowed from Israel (IL-IP0252). ');
$ax += cidrblock($address,'193.28.155.0/24','No access allowed from Israel (IL-IP0253). ');
$ax += cidrblock($address,'193.30.161.0/24','No access allowed from Israel (IL-IP0254). ');
$ax += cidrblock($address,'193.33.16.0/23','No access allowed from Israel (IL-IP0255). ');
$ax += cidrblock($address,'193.33.234.0/23','No access allowed from Israel (IL-IP0256). ');
$ax += cidrblock($address,'193.34.56.0/22','No access allowed from Israel (IL-IP0257). ');
$ax += cidrblock($address,'193.36.176.0/24','No access allowed from Israel (IL-IP0258). ');
$ax += cidrblock($address,'193.37.128.0/23','No access allowed from Israel (IL-IP0259). ');
$ax += cidrblock($address,'193.37.130.0/24','No access allowed from Israel (IL-IP0260). ');
$ax += cidrblock($address,'193.39.79.0/24','No access allowed from Israel (IL-IP0261). ');
$ax += cidrblock($address,'193.41.202.0/24','No access allowed from Israel (IL-IP0262). ');
$ax += cidrblock($address,'193.41.208.0/23','No access allowed from Israel (IL-IP0263). ');
$ax += cidrblock($address,'193.43.244.0/22','No access allowed from Israel (IL-IP0264). ');
$ax += cidrblock($address,'193.46.64.0/24','No access allowed from Israel (IL-IP0265). ');
$ax += cidrblock($address,'193.47.165.0/24','No access allowed from Israel (IL-IP0266). ');
$ax += cidrblock($address,'193.47.248.0/24','No access allowed from Israel (IL-IP0267). ');
$ax += cidrblock($address,'193.104.44.0/24','No access allowed from Israel (IL-IP0268). ');
$ax += cidrblock($address,'193.104.62.0/24','No access allowed from Israel (IL-IP0269). ');
$ax += cidrblock($address,'193.104.77.0/24','No access allowed from Israel (IL-IP0270). ');
$ax += cidrblock($address,'193.104.115.0/24','No access allowed from Israel (IL-IP0271). ');
$ax += cidrblock($address,'193.104.117.0/24','No access allowed from Israel (IL-IP0272). ');
$ax += cidrblock($address,'193.104.119.0/24','No access allowed from Israel (IL-IP0273). ');
$ax += cidrblock($address,'193.104.147.0/24','No access allowed from Israel (IL-IP0274). ');
$ax += cidrblock($address,'193.105.99.0/24','No access allowed from Israel (IL-IP0275). ');
$ax += cidrblock($address,'193.105.199.0/24','No access allowed from Israel (IL-IP0276). ');
$ax += cidrblock($address,'193.105.203.0/24','No access allowed from Israel (IL-IP0277). ');
$ax += cidrblock($address,'193.106.52.0/22','No access allowed from Israel (IL-IP0278). ');
$ax += cidrblock($address,'193.106.204.0/22','No access allowed from Israel (IL-IP0279). ');
$ax += cidrblock($address,'193.108.195.0/24','No access allowed from Israel (IL-IP0280). ');
$ax += cidrblock($address,'193.109.82.0/24','No access allowed from Israel (IL-IP0281). ');
$ax += cidrblock($address,'193.138.92.0/24','No access allowed from Israel (IL-IP0282). ');
$ax += cidrblock($address,'193.142.151.0/24','No access allowed from Israel (IL-IP0283). ');
$ax += cidrblock($address,'193.150.127.0/24','No access allowed from Israel (IL-IP0284). ');
$ax += cidrblock($address,'193.160.33.0/24','No access allowed from Israel (IL-IP0285). ');
$ax += cidrblock($address,'193.169.70.0/23','No access allowed from Israel (IL-IP0286). ');
$ax += cidrblock($address,'193.169.88.0/23','No access allowed from Israel (IL-IP0287). ');
$ax += cidrblock($address,'193.169.104.0/23','No access allowed from Israel (IL-IP0288). ');
$ax += cidrblock($address,'193.169.246.0/23','No access allowed from Israel (IL-IP0289). ');
$ax += cidrblock($address,'193.182.144.25/32','No access allowed from Israel (IL-IP0290). ');
$ax += cidrblock($address,'193.186.2.0/24','No access allowed from Israel (IL-IP0291). ');
$ax += cidrblock($address,'193.200.30.0/24','No access allowed from Israel (IL-IP0292). ');
$ax += cidrblock($address,'193.201.155.128/25','No access allowed from Israel (IL-IP0293). ');
$ax += cidrblock($address,'193.218.207.128/25','No access allowed from Israel (IL-IP0294). ');
$ax += cidrblock($address,'193.222.129.0/24','No access allowed from Israel (IL-IP0295). ');
$ax += cidrblock($address,'193.238.188.0/23','No access allowed from Israel (IL-IP0296). ');
$ax += cidrblock($address,'193.238.208.0/22','No access allowed from Israel (IL-IP0297). ');
$ax += cidrblock($address,'193.239.108.0/22','No access allowed from Israel (IL-IP0298). ');
$ax += cidrblock($address,'193.242.220.0/22','No access allowed from Israel (IL-IP0299). ');
$ax += cidrblock($address,'193.254.206.0/23','No access allowed from Israel (IL-IP0300). ');
$ax += cidrblock($address,'194.1.145.0/24','No access allowed from Israel (IL-IP0301). ');
$ax += cidrblock($address,'194.8.76.0/23','No access allowed from Israel (IL-IP0302). ');
$ax += cidrblock($address,'194.8.88.0/23','No access allowed from Israel (IL-IP0303). ');
$ax += cidrblock($address,'194.29.32.0/20','No access allowed from Israel (IL-IP0304). ');
$ax += cidrblock($address,'194.31.58.0/24','No access allowed from Israel (IL-IP0305). ');
$ax += cidrblock($address,'194.50.71.0/24','No access allowed from Israel (IL-IP0306). ');
$ax += cidrblock($address,'194.50.175.0/24','No access allowed from Israel (IL-IP0307). ');
$ax += cidrblock($address,'194.54.168.0/22','No access allowed from Israel (IL-IP0308). ');
$ax += cidrblock($address,'194.56.215.0/24','No access allowed from Israel (IL-IP0309). ');
$ax += cidrblock($address,'194.88.108.0/22','No access allowed from Israel (IL-IP0310). ');
$ax += cidrblock($address,'194.88.136.0/23','No access allowed from Israel (IL-IP0311). ');
$ax += cidrblock($address,'194.90.0.0/16','No access allowed from Israel (IL-IP0312). ');
$ax += cidrblock($address,'194.110.194.0/24','No access allowed from Israel (IL-IP0313). ');
$ax += cidrblock($address,'194.110.249.0/24','No access allowed from Israel (IL-IP0314). ');
$ax += cidrblock($address,'194.114.146.0/23','No access allowed from Israel (IL-IP0315). ');
$ax += cidrblock($address,'194.116.226.0/23','No access allowed from Israel (IL-IP0316). ');
$ax += cidrblock($address,'194.116.230.0/23','No access allowed from Israel (IL-IP0317). ');
$ax += cidrblock($address,'194.150.218.0/23','No access allowed from Israel (IL-IP0318). ');
$ax += cidrblock($address,'194.153.101.0/24','No access allowed from Israel (IL-IP0319). ');
$ax += cidrblock($address,'194.177.16.0/22','No access allowed from Israel (IL-IP0320). ');
$ax += cidrblock($address,'194.187.84.0/22','No access allowed from Israel (IL-IP0321). ');
$ax += cidrblock($address,'194.213.4.0/24','No access allowed from Israel (IL-IP0322). ');
$ax += cidrblock($address,'194.213.108.0/23','No access allowed from Israel (IL-IP0323). ');
$ax += cidrblock($address,'194.242.24.0/23','No access allowed from Israel (IL-IP0324). ');
$ax += cidrblock($address,'194.242.160.0/20','No access allowed from Israel (IL-IP0325). ');
$ax += cidrblock($address,'194.247.166.0/23','No access allowed from Israel (IL-IP0326). ');
$ax += cidrblock($address,'195.10.194.0/24','No access allowed from Israel (IL-IP0327). ');
$ax += cidrblock($address,'195.10.220.0/24','No access allowed from Israel (IL-IP0328). ');
$ax += cidrblock($address,'195.18.8.0/22','No access allowed from Israel (IL-IP0329). ');
$ax += cidrblock($address,'195.28.166.0/23','No access allowed from Israel (IL-IP0330). ');
$ax += cidrblock($address,'195.28.180.0/23','No access allowed from Israel (IL-IP0331). ');
$ax += cidrblock($address,'195.47.252.0/24','No access allowed from Israel (IL-IP0332). ');
$ax += cidrblock($address,'195.60.232.0/22','No access allowed from Israel (IL-IP0333). ');
$ax += cidrblock($address,'195.62.18.0/23','No access allowed from Israel (IL-IP0334). ');
$ax += cidrblock($address,'195.62.30.0/23','No access allowed from Israel (IL-IP0335). ');
$ax += cidrblock($address,'195.66.118.0/24','No access allowed from Israel (IL-IP0336). ');
$ax += cidrblock($address,'195.72.116.0/23','No access allowed from Israel (IL-IP0337). ');
$ax += cidrblock($address,'195.82.110.0/24','No access allowed from Israel (IL-IP0338). ');
$ax += cidrblock($address,'195.82.128.0/23','No access allowed from Israel (IL-IP0339). ');
$ax += cidrblock($address,'195.93.234.0/23','No access allowed from Israel (IL-IP0340). ');
$ax += cidrblock($address,'195.95.183.0/24','No access allowed from Israel (IL-IP0341). ');
$ax += cidrblock($address,'195.110.40.0/23','No access allowed from Israel (IL-IP0342). ');
$ax += cidrblock($address,'195.128.145.0/24','No access allowed from Israel (IL-IP0343). ');
$ax += cidrblock($address,'195.128.176.0/23','No access allowed from Israel (IL-IP0344). ');
$ax += cidrblock($address,'195.160.240.0/22','No access allowed from Israel (IL-IP0345). ');
$ax += cidrblock($address,'195.162.66.0/23','No access allowed from Israel (IL-IP0346). ');
$ax += cidrblock($address,'195.182.33.0/24','No access allowed from Israel (IL-IP0347). ');
$ax += cidrblock($address,'195.189.140.0/23','No access allowed from Israel (IL-IP0348). ');
$ax += cidrblock($address,'195.189.192.0/23','No access allowed from Israel (IL-IP0349). ');
$ax += cidrblock($address,'195.190.19.0/24','No access allowed from Israel (IL-IP0350). ');
$ax += cidrblock($address,'195.190.23.0/24','No access allowed from Israel (IL-IP0351). ');
$ax += cidrblock($address,'195.190.84.8/29','No access allowed from Israel (IL-IP0352). ');
$ax += cidrblock($address,'195.191.52.0/23','No access allowed from Israel (IL-IP0353). ');
$ax += cidrblock($address,'195.192.224.0/21','No access allowed from Israel (IL-IP0354). ');
$ax += cidrblock($address,'195.200.92.0/23','No access allowed from Israel (IL-IP0355). ');
$ax += cidrblock($address,'195.200.205.0/24','No access allowed from Israel (IL-IP0356). ');
$ax += cidrblock($address,'195.211.68.0/22','No access allowed from Israel (IL-IP0357). ');
$ax += cidrblock($address,'195.216.252.0/24','No access allowed from Israel (IL-IP0358). ');
$ax += cidrblock($address,'195.225.46.0/23','No access allowed from Israel (IL-IP0359). ');
$ax += cidrblock($address,'195.234.158.0/24','No access allowed from Israel (IL-IP0360). ');
$ax += cidrblock($address,'195.244.22.0/23','No access allowed from Israel (IL-IP0361). ');
$ax += cidrblock($address,'195.250.33.0/24','No access allowed from Israel (IL-IP0362). ');
$ax += cidrblock($address,'198.5.134.224/27','No access allowed from Israel (IL-IP0363). ');
$ax += cidrblock($address,'198.5.136.72/29','No access allowed from Israel (IL-IP0364). ');
$ax += cidrblock($address,'198.12.90.64/26','No access allowed from Israel (IL-IP0365). ');
$ax += cidrblock($address,'198.27.100.32/27','No access allowed from Israel (IL-IP0366). ');
$ax += cidrblock($address,'198.44.132.40/29','No access allowed from Israel (IL-IP0367). ');
$ax += cidrblock($address,'198.44.134.224/28','No access allowed from Israel (IL-IP0368). ');
$ax += cidrblock($address,'198.44.150.128/29','No access allowed from Israel (IL-IP0369). ');
$ax += cidrblock($address,'198.44.154.136/29','No access allowed from Israel (IL-IP0370). ');
$ax += cidrblock($address,'198.46.140.192/26','No access allowed from Israel (IL-IP0371). ');
$ax += cidrblock($address,'198.50.102.192/29','No access allowed from Israel (IL-IP0372). ');
$ax += cidrblock($address,'198.50.103.200/29','No access allowed from Israel (IL-IP0373). ');
$ax += cidrblock($address,'198.50.104.152/29','No access allowed from Israel (IL-IP0374). ');
$ax += cidrblock($address,'198.50.106.216/29','No access allowed from Israel (IL-IP0375). ');
$ax += cidrblock($address,'198.50.110.40/29','No access allowed from Israel (IL-IP0376). ');
$ax += cidrblock($address,'198.50.111.32/29','No access allowed from Israel (IL-IP0377). ');
$ax += cidrblock($address,'198.50.113.184/29','No access allowed from Israel (IL-IP0378). ');
$ax += cidrblock($address,'198.50.116.48/29','No access allowed from Israel (IL-IP0379). ');
$ax += cidrblock($address,'198.50.119.112/28','No access allowed from Israel (IL-IP0380). ');
$ax += cidrblock($address,'198.50.121.192/29','No access allowed from Israel (IL-IP0381). ');
$ax += cidrblock($address,'198.50.129.104/29','No access allowed from Israel (IL-IP0382). ');
$ax += cidrblock($address,'198.50.135.196/30','No access allowed from Israel (IL-IP0383). ');
$ax += cidrblock($address,'198.50.222.248/30','No access allowed from Israel (IL-IP0384). ');
$ax += cidrblock($address,'198.50.231.168/30','No access allowed from Israel (IL-IP0385). ');
$ax += cidrblock($address,'198.143.36.0/32','No access allowed from Israel (IL-IP0386). ');
$ax += cidrblock($address,'198.143.40.0/32','No access allowed from Israel (IL-IP0387). ');
$ax += cidrblock($address,'198.143.51.0/32','No access allowed from Israel (IL-IP0388). ');
$ax += cidrblock($address,'199.16.204.136/29','No access allowed from Israel (IL-IP0389). ');
$ax += cidrblock($address,'199.16.206.56/29','No access allowed from Israel (IL-IP0390). ');
$ax += cidrblock($address,'199.34.127.240/29','No access allowed from Israel (IL-IP0391). ');
$ax += cidrblock($address,'199.58.87.107/32','No access allowed from Israel (IL-IP0392). ');
$ax += cidrblock($address,'199.58.87.108/30','No access allowed from Israel (IL-IP0393). ');
$ax += cidrblock($address,'199.58.87.112/29','No access allowed from Israel (IL-IP0394). ');
$ax += cidrblock($address,'199.58.87.142/31','No access allowed from Israel (IL-IP0395). ');
$ax += cidrblock($address,'199.58.87.144/29','No access allowed from Israel (IL-IP0396). ');
$ax += cidrblock($address,'199.58.87.152/30','No access allowed from Israel (IL-IP0397). ');
$ax += cidrblock($address,'199.58.87.156/31','No access allowed from Israel (IL-IP0398). ');
$ax += cidrblock($address,'199.191.192.0/24','No access allowed from Israel (IL-IP0399). ');
$ax += cidrblock($address,'199.203.0.0/24','No access allowed from Israel (IL-IP0400). ');
$ax += cidrblock($address,'199.203.4.0/22','No access allowed from Israel (IL-IP0401). ');
$ax += cidrblock($address,'199.203.8.0/21','No access allowed from Israel (IL-IP0402). ');
$ax += cidrblock($address,'199.203.16.0/20','No access allowed from Israel (IL-IP0403). ');
$ax += cidrblock($address,'199.203.32.0/19','No access allowed from Israel (IL-IP0404). ');
$ax += cidrblock($address,'199.203.64.0/22','No access allowed from Israel (IL-IP0405). ');
$ax += cidrblock($address,'199.203.69.0/24','No access allowed from Israel (IL-IP0406). ');
$ax += cidrblock($address,'199.203.70.0/23','No access allowed from Israel (IL-IP0407). ');
$ax += cidrblock($address,'199.203.72.0/21','No access allowed from Israel (IL-IP0408). ');
$ax += cidrblock($address,'199.203.80.0/20','No access allowed from Israel (IL-IP0409). ');
$ax += cidrblock($address,'199.203.96.0/21','No access allowed from Israel (IL-IP0410). ');
$ax += cidrblock($address,'199.203.104.0/24','No access allowed from Israel (IL-IP0411). ');
$ax += cidrblock($address,'199.203.107.0/24','No access allowed from Israel (IL-IP0412). ');
$ax += cidrblock($address,'199.203.108.0/22','No access allowed from Israel (IL-IP0413). ');
$ax += cidrblock($address,'199.203.112.0/20','No access allowed from Israel (IL-IP0414). ');
$ax += cidrblock($address,'199.203.128.0/20','No access allowed from Israel (IL-IP0415). ');
$ax += cidrblock($address,'199.203.144.0/24','No access allowed from Israel (IL-IP0416). ');
$ax += cidrblock($address,'199.203.146.0/23','No access allowed from Israel (IL-IP0417). ');
$ax += cidrblock($address,'199.203.148.0/22','No access allowed from Israel (IL-IP0418). ');
$ax += cidrblock($address,'199.203.152.0/21','No access allowed from Israel (IL-IP0419). ');
$ax += cidrblock($address,'199.203.160.0/19','No access allowed from Israel (IL-IP0420). ');
$ax += cidrblock($address,'199.203.192.0/18','No access allowed from Israel (IL-IP0421). ');
$ax += cidrblock($address,'199.229.226.192/27','No access allowed from Israel (IL-IP0422). ');
$ax += cidrblock($address,'199.229.226.224/28','No access allowed from Israel (IL-IP0423). ');
$ax += cidrblock($address,'199.255.157.216/29','No access allowed from Israel (IL-IP0424). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'2.52.0.0/14','No access allowed from Israel (IL-IP0425). ');
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'203.11.132.0/24','No access allowed from Israel (IL-IP0426). ');
$ax += cidrblock($address,'204.52.208.0/24','No access allowed from Israel (IL-IP0427). ');
$ax += cidrblock($address,'206.49.94.0/24','No access allowed from Israel (IL-IP0428). ');
$ax += cidrblock($address,'206.82.140.0/24','No access allowed from Israel (IL-IP0429). ');
$ax += cidrblock($address,'206.182.92.0/24','No access allowed from Israel (IL-IP0430). ');
$ax += cidrblock($address,'206.221.222.48/28','No access allowed from Israel (IL-IP0431). ');
$ax += cidrblock($address,'207.117.93.0/24','No access allowed from Israel (IL-IP0432). ');
$ax += cidrblock($address,'207.117.208.0/24','No access allowed from Israel (IL-IP0433). ');
$ax += cidrblock($address,'207.209.178.0/24','No access allowed from Israel (IL-IP0434). ');
$ax += cidrblock($address,'207.209.215.0/24','No access allowed from Israel (IL-IP0435). ');
$ax += cidrblock($address,'207.232.0.0/18','No access allowed from Israel (IL-IP0436). ');
$ax += cidrblock($address,'208.112.76.0/24','No access allowed from Israel (IL-IP0437). ');
$ax += cidrblock($address,'209.28.179.0/24','No access allowed from Israel (IL-IP0438). ');
$ax += cidrblock($address,'209.28.180.0/24','No access allowed from Israel (IL-IP0439). ');
$ax += cidrblock($address,'209.28.217.0/24','No access allowed from Israel (IL-IP0440). ');
$ax += cidrblock($address,'209.28.218.0/23','No access allowed from Israel (IL-IP0441). ');
$ax += cidrblock($address,'209.61.137.16/29','No access allowed from Israel (IL-IP0442). ');
$ax += cidrblock($address,'209.88.155.0/24','No access allowed from Israel (IL-IP0443). ');
$ax += cidrblock($address,'209.88.156.0/23','No access allowed from Israel (IL-IP0444). ');
$ax += cidrblock($address,'209.88.158.0/24','No access allowed from Israel (IL-IP0445). ');
$ax += cidrblock($address,'209.88.172.0/22','No access allowed from Israel (IL-IP0446). ');
$ax += cidrblock($address,'209.88.176.0/20','No access allowed from Israel (IL-IP0447). ');
$ax += cidrblock($address,'209.88.192.0/21','No access allowed from Israel (IL-IP0448). ');
$ax += cidrblock($address,'209.206.1.0/24','No access allowed from Israel (IL-IP0449). ');
$ax += cidrblock($address,'209.206.2.0/23','No access allowed from Israel (IL-IP0450). ');
$ax += cidrblock($address,'209.206.4.0/23','No access allowed from Israel (IL-IP0451). ');
$ax += cidrblock($address,'209.206.7.0/24','No access allowed from Israel (IL-IP0452). ');
$ax += cidrblock($address,'209.206.9.0/24','No access allowed from Israel (IL-IP0453). ');
$ax += cidrblock($address,'209.206.10.0/24','No access allowed from Israel (IL-IP0454). ');
$ax += cidrblock($address,'209.206.12.0/24','No access allowed from Israel (IL-IP0455). ');
$ax += cidrblock($address,'209.206.14.0/23','No access allowed from Israel (IL-IP0456). ');
$ax += cidrblock($address,'209.206.16.0/23','No access allowed from Israel (IL-IP0457). ');
$ax += cidrblock($address,'209.206.19.0/24','No access allowed from Israel (IL-IP0458). ');
$ax += cidrblock($address,'209.206.20.0/22','No access allowed from Israel (IL-IP0459). ');
$ax += cidrblock($address,'209.206.24.0/21','No access allowed from Israel (IL-IP0460). ');
$ax += cidrblock($address,'209.209.241.0/25','No access allowed from Israel (IL-IP0461). ');
}
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'212.25.64.0/18','No access allowed from Israel (IL-IP0462). ');
$ax += cidrblock($address,'212.29.192.0/18','No access allowed from Israel (IL-IP0463). ');
$ax += cidrblock($address,'212.55.184.0/21','No access allowed from Israel (IL-IP0464). ');
$ax += cidrblock($address,'212.68.128.0/19','No access allowed from Israel (IL-IP0465). ');
$ax += cidrblock($address,'212.76.96.0/19','No access allowed from Israel (IL-IP0466). ');
$ax += cidrblock($address,'212.116.160.0/19','No access allowed from Israel (IL-IP0467). ');
$ax += cidrblock($address,'212.117.128.0/19','No access allowed from Israel (IL-IP0468). ');
$ax += cidrblock($address,'212.143.0.0/16','No access allowed from Israel (IL-IP0469). ');
$ax += cidrblock($address,'212.150.0.0/20','No access allowed from Israel (IL-IP0470). ');
$ax += cidrblock($address,'212.150.16.0/21','No access allowed from Israel (IL-IP0471). ');
$ax += cidrblock($address,'212.150.24.0/22','No access allowed from Israel (IL-IP0472). ');
$ax += cidrblock($address,'212.150.29.0/24','No access allowed from Israel (IL-IP0473). ');
$ax += cidrblock($address,'212.150.30.0/23','No access allowed from Israel (IL-IP0474). ');
$ax += cidrblock($address,'212.150.32.0/19','No access allowed from Israel (IL-IP0475). ');
$ax += cidrblock($address,'212.150.64.0/18','No access allowed from Israel (IL-IP0476). ');
$ax += cidrblock($address,'212.150.128.0/17','No access allowed from Israel (IL-IP0477). ');
$ax += cidrblock($address,'212.179.0.0/16','No access allowed from Israel (IL-IP0478). ');
$ax += cidrblock($address,'212.199.0.0/16','No access allowed from Israel (IL-IP0479). ');
$ax += cidrblock($address,'212.235.0.0/17','No access allowed from Israel (IL-IP0480). ');
$ax += cidrblock($address,'213.8.0.0/16','No access allowed from Israel (IL-IP0481). ');
$ax += cidrblock($address,'213.57.0.0/16','No access allowed from Israel (IL-IP0482). ');
$ax += cidrblock($address,'213.137.64.0/19','No access allowed from Israel (IL-IP0483). ');
$ax += cidrblock($address,'213.151.32.0/19','No access allowed from Israel (IL-IP0484). ');
$ax += cidrblock($address,'213.184.96.0/21','No access allowed from Israel (IL-IP0485). ');
$ax += cidrblock($address,'213.184.105.128/25','No access allowed from Israel (IL-IP0486). ');
$ax += cidrblock($address,'213.184.111.0/24','No access allowed from Israel (IL-IP0487). ');
$ax += cidrblock($address,'213.184.113.0/25','No access allowed from Israel (IL-IP0488). ');
$ax += cidrblock($address,'213.184.115.128/25','No access allowed from Israel (IL-IP0489). ');
$ax += cidrblock($address,'213.184.117.128/25','No access allowed from Israel (IL-IP0490). ');
$ax += cidrblock($address,'213.184.119.0/24','No access allowed from Israel (IL-IP0491). ');
$ax += cidrblock($address,'213.184.120.0/22','No access allowed from Israel (IL-IP0492). ');
$ax += cidrblock($address,'213.184.124.128/25','No access allowed from Israel (IL-IP0493). ');
$ax += cidrblock($address,'213.184.125.0/24','No access allowed from Israel (IL-IP0494). ');
$ax += cidrblock($address,'213.184.126.0/23','No access allowed from Israel (IL-IP0495). ');
$ax += cidrblock($address,'216.72.32.0/21','No access allowed from Israel (IL-IP0496). ');
$ax += cidrblock($address,'216.72.40.0/22','No access allowed from Israel (IL-IP0497). ');
$ax += cidrblock($address,'216.72.70.0/23','No access allowed from Israel (IL-IP0498). ');
$ax += cidrblock($address,'216.72.117.0/24','No access allowed from Israel (IL-IP0499). ');
$ax += cidrblock($address,'217.22.112.0/20','No access allowed from Israel (IL-IP0500). ');
$ax += cidrblock($address,'217.65.32.0/22','No access allowed from Israel (IL-IP0501). ');
$ax += cidrblock($address,'217.65.37.0/24','No access allowed from Israel (IL-IP0502). ');
$ax += cidrblock($address,'217.65.39.0/24','No access allowed from Israel (IL-IP0503). ');
$ax += cidrblock($address,'217.65.40.0/23','No access allowed from Israel (IL-IP0504). ');
$ax += cidrblock($address,'217.65.43.0/24','No access allowed from Israel (IL-IP0505). ');
$ax += cidrblock($address,'217.65.44.0/22','No access allowed from Israel (IL-IP0506). ');
$ax += cidrblock($address,'217.132.0.0/16','No access allowed from Israel (IL-IP0507). ');
$ax += cidrblock($address,'217.156.163.174/32','No access allowed from Israel (IL-IP0508). ');
$ax += cidrblock($address,'217.194.192.0/20','No access allowed from Israel (IL-IP0509). ');
}
if(lmatch($address,'23','')) {
$ax += cidrblock($address,'23.79.224.0/24','No access allowed from Israel (IL-IP0510). ');
}
}
if(lmatch($address,'3','')) {
if(lmatch($address,'31','')) {
$ax += cidrblock($address,'31.25.112.0/21','No access allowed from Israel (IL-IP0511). ');
$ax += cidrblock($address,'31.44.104.0/24','No access allowed from Israel (IL-IP0512). ');
$ax += cidrblock($address,'31.44.128.0/20','No access allowed from Israel (IL-IP0513). ');
$ax += cidrblock($address,'31.154.0.0/16','No access allowed from Israel (IL-IP0514). ');
$ax += cidrblock($address,'31.168.0.0/16','No access allowed from Israel (IL-IP0515). ');
$ax += cidrblock($address,'31.210.176.0/20','No access allowed from Israel (IL-IP0516). ');
}
if(lmatch($address,'37','')) {
$ax += cidrblock($address,'37.19.112.0/20','No access allowed from Israel (IL-IP0517). ');
$ax += cidrblock($address,'37.26.112.0/20','No access allowed from Israel (IL-IP0518). ');
$ax += cidrblock($address,'37.26.144.0/21','No access allowed from Israel (IL-IP0519). ');
$ax += cidrblock($address,'37.46.32.0/20','No access allowed from Israel (IL-IP0520). ');
$ax += cidrblock($address,'37.60.40.0/21','No access allowed from Israel (IL-IP0521). ');
$ax += cidrblock($address,'37.61.224.0/21','No access allowed from Israel (IL-IP0522). ');
$ax += cidrblock($address,'37.122.152.0/21','No access allowed from Israel (IL-IP0523). ');
$ax += cidrblock($address,'37.142.0.0/19','No access allowed from Israel (IL-IP0524). ');
$ax += cidrblock($address,'37.142.32.0/21','No access allowed from Israel (IL-IP0525). ');
$ax += cidrblock($address,'37.142.40.0/25','No access allowed from Israel (IL-IP0526). ');
$ax += cidrblock($address,'37.142.40.128/29','No access allowed from Israel (IL-IP0527). ');
$ax += cidrblock($address,'37.142.40.144/28','No access allowed from Israel (IL-IP0528). ');
$ax += cidrblock($address,'37.142.40.160/27','No access allowed from Israel (IL-IP0529). ');
$ax += cidrblock($address,'37.142.40.192/26','No access allowed from Israel (IL-IP0530). ');
$ax += cidrblock($address,'37.142.41.0/24','No access allowed from Israel (IL-IP0531). ');
$ax += cidrblock($address,'37.142.42.0/23','No access allowed from Israel (IL-IP0532). ');
$ax += cidrblock($address,'37.142.44.0/22','No access allowed from Israel (IL-IP0533). ');
$ax += cidrblock($address,'37.142.48.0/20','No access allowed from Israel (IL-IP0534). ');
$ax += cidrblock($address,'37.142.64.0/18','No access allowed from Israel (IL-IP0535). ');
$ax += cidrblock($address,'37.142.128.0/17','No access allowed from Israel (IL-IP0536). ');
}
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'46.19.80.0/21','No access allowed from Israel (IL-IP0537). ');
$ax += cidrblock($address,'46.31.96.0/21','No access allowed from Israel (IL-IP0538). ');
$ax += cidrblock($address,'46.116.0.0/15','No access allowed from Israel (IL-IP0539). ');
$ax += cidrblock($address,'46.120.0.0/15','No access allowed from Israel (IL-IP0540). ');
$ax += cidrblock($address,'46.161.58.128/25','No access allowed from Israel (IL-IP0541). ');
$ax += cidrblock($address,'46.183.88.0/21','No access allowed from Israel (IL-IP0542). ');
$ax += cidrblock($address,'46.210.0.0/16','No access allowed from Israel (IL-IP0543). ');
$ax += cidrblock($address,'46.228.144.0/20','No access allowed from Israel (IL-IP0544). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.22.128.0/21','No access allowed from Israel (IL-IP0545). ');
$ax += cidrblock($address,'5.28.128.0/18','No access allowed from Israel (IL-IP0546). ');
$ax += cidrblock($address,'5.29.0.0/16','No access allowed from Israel (IL-IP0547). ');
$ax += cidrblock($address,'5.34.168.0/21','No access allowed from Israel (IL-IP0548). ');
$ax += cidrblock($address,'5.62.61.233/32','No access allowed from Israel (IL-IP0549). ');
$ax += cidrblock($address,'5.62.61.234/31','No access allowed from Israel (IL-IP0550). ');
$ax += cidrblock($address,'5.100.248.0/21','No access allowed from Israel (IL-IP0551). ');
$ax += cidrblock($address,'5.102.192.0/18','No access allowed from Israel (IL-IP0552). ');
$ax += cidrblock($address,'5.104.240.0/24','No access allowed from Israel (IL-IP0553). ');
$ax += cidrblock($address,'5.104.242.0/23','No access allowed from Israel (IL-IP0554). ');
$ax += cidrblock($address,'5.104.246.0/23','No access allowed from Israel (IL-IP0555). ');
$ax += cidrblock($address,'5.144.48.0/20','No access allowed from Israel (IL-IP0556). ');
$ax += cidrblock($address,'5.157.32.174/32','No access allowed from Israel (IL-IP0557). ');
$ax += cidrblock($address,'57.88.112.0/20','No access allowed from Israel (IL-IP0558). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.0.0.0/16','No access allowed from Israel (IL-IP0559). ');
$ax += cidrblock($address,'62.56.252.0/22','No access allowed from Israel (IL-IP0560). ');
$ax += cidrblock($address,'62.90.0.0/16','No access allowed from Israel (IL-IP0561). ');
$ax += cidrblock($address,'62.128.32.0/19','No access allowed from Israel (IL-IP0562). ');
$ax += cidrblock($address,'62.219.0.0/16','No access allowed from Israel (IL-IP0563). ');
$ax += cidrblock($address,'63.141.34.0/23','No access allowed from Israel (IL-IP0564). ');
$ax += cidrblock($address,'63.141.36.0/23','No access allowed from Israel (IL-IP0565). ');
$ax += cidrblock($address,'63.161.134.37/32','No access allowed from Israel (IL-IP0566). ');
$ax += cidrblock($address,'64.35.56.0/24','No access allowed from Israel (IL-IP0567). ');
$ax += cidrblock($address,'66.175.100.0/24','No access allowed from Israel (IL-IP0568). ');
$ax += cidrblock($address,'68.171.236.0/25','No access allowed from Israel (IL-IP0569). ');
$ax += cidrblock($address,'68.171.236.128/26','No access allowed from Israel (IL-IP0570). ');
$ax += cidrblock($address,'68.171.236.192/32','No access allowed from Israel (IL-IP0571). ');
$ax += cidrblock($address,'68.171.236.194/31','No access allowed from Israel (IL-IP0572). ');
$ax += cidrblock($address,'68.171.236.196/30','No access allowed from Israel (IL-IP0573). ');
$ax += cidrblock($address,'68.171.236.200/29','No access allowed from Israel (IL-IP0574). ');
$ax += cidrblock($address,'68.171.236.208/28','No access allowed from Israel (IL-IP0575). ');
$ax += cidrblock($address,'68.171.236.224/27','No access allowed from Israel (IL-IP0576). ');
}
if(lmatch($address,'7','')) {
if(lmatch($address,'70','')) {
$ax += cidrblock($address,'70.38.87.144/29','No access allowed from Israel (IL-IP0577). ');
}
if(lmatch($address,'74','')) {
$ax += cidrblock($address,'74.125.61.226/31','No access allowed from Israel (IL-IP0578). ');
$ax += cidrblock($address,'74.217.222.0/24','No access allowed from Israel (IL-IP0579). ');
}
if(lmatch($address,'77','')) {
$ax += cidrblock($address,'77.124.0.0/14','No access allowed from Israel (IL-IP0580). ');
$ax += cidrblock($address,'77.138.0.0/22','No access allowed from Israel (IL-IP0581). ');
$ax += cidrblock($address,'77.138.4.0/23','No access allowed from Israel (IL-IP0582). ');
$ax += cidrblock($address,'77.138.8.0/21','No access allowed from Israel (IL-IP0583). ');
$ax += cidrblock($address,'77.138.16.0/21','No access allowed from Israel (IL-IP0584). ');
$ax += cidrblock($address,'77.138.27.0/24','No access allowed from Israel (IL-IP0585). ');
$ax += cidrblock($address,'77.138.28.0/22','No access allowed from Israel (IL-IP0586). ');
$ax += cidrblock($address,'77.138.32.0/23','No access allowed from Israel (IL-IP0587). ');
$ax += cidrblock($address,'77.138.44.0/22','No access allowed from Israel (IL-IP0588). ');
$ax += cidrblock($address,'77.138.48.0/21','No access allowed from Israel (IL-IP0589). ');
$ax += cidrblock($address,'77.138.64.0/22','No access allowed from Israel (IL-IP0590). ');
$ax += cidrblock($address,'77.138.72.0/23','No access allowed from Israel (IL-IP0591). ');
$ax += cidrblock($address,'77.138.75.0/24','No access allowed from Israel (IL-IP0592). ');
$ax += cidrblock($address,'77.138.76.0/22','No access allowed from Israel (IL-IP0593). ');
$ax += cidrblock($address,'77.138.80.0/21','No access allowed from Israel (IL-IP0594). ');
$ax += cidrblock($address,'77.138.88.0/22','No access allowed from Israel (IL-IP0595). ');
$ax += cidrblock($address,'77.138.92.0/24','No access allowed from Israel (IL-IP0596). ');
$ax += cidrblock($address,'77.138.94.0/23','No access allowed from Israel (IL-IP0597). ');
$ax += cidrblock($address,'77.138.102.0/24','No access allowed from Israel (IL-IP0598). ');
$ax += cidrblock($address,'77.138.104.0/22','No access allowed from Israel (IL-IP0599). ');
$ax += cidrblock($address,'77.138.115.0/24','No access allowed from Israel (IL-IP0600). ');
$ax += cidrblock($address,'77.138.116.0/22','No access allowed from Israel (IL-IP0601). ');
$ax += cidrblock($address,'77.138.122.0/23','No access allowed from Israel (IL-IP0602). ');
$ax += cidrblock($address,'77.138.124.0/23','No access allowed from Israel (IL-IP0603). ');
$ax += cidrblock($address,'77.138.128.0/22','No access allowed from Israel (IL-IP0604). ');
$ax += cidrblock($address,'77.138.132.0/23','No access allowed from Israel (IL-IP0605). ');
$ax += cidrblock($address,'77.138.134.0/24','No access allowed from Israel (IL-IP0606). ');
$ax += cidrblock($address,'77.138.136.0/21','No access allowed from Israel (IL-IP0607). ');
$ax += cidrblock($address,'77.138.147.0/24','No access allowed from Israel (IL-IP0608). ');
$ax += cidrblock($address,'77.138.148.0/22','No access allowed from Israel (IL-IP0609). ');
$ax += cidrblock($address,'77.138.152.0/23','No access allowed from Israel (IL-IP0610). ');
$ax += cidrblock($address,'77.138.155.0/24','No access allowed from Israel (IL-IP0611). ');
$ax += cidrblock($address,'77.138.156.0/22','No access allowed from Israel (IL-IP0612). ');
$ax += cidrblock($address,'77.138.160.0/20','No access allowed from Israel (IL-IP0613). ');
$ax += cidrblock($address,'77.138.176.0/21','No access allowed from Israel (IL-IP0614). ');
$ax += cidrblock($address,'77.138.192.0/23','No access allowed from Israel (IL-IP0615). ');
$ax += cidrblock($address,'77.138.195.0/24','No access allowed from Israel (IL-IP0616). ');
$ax += cidrblock($address,'77.138.196.0/22','No access allowed from Israel (IL-IP0617). ');
$ax += cidrblock($address,'77.138.204.0/23','No access allowed from Israel (IL-IP0618). ');
$ax += cidrblock($address,'77.138.206.0/24','No access allowed from Israel (IL-IP0619). ');
$ax += cidrblock($address,'77.138.208.0/21','No access allowed from Israel (IL-IP0620). ');
$ax += cidrblock($address,'77.138.217.0/24','No access allowed from Israel (IL-IP0621). ');
$ax += cidrblock($address,'77.138.220.0/24','No access allowed from Israel (IL-IP0622). ');
$ax += cidrblock($address,'77.138.224.0/24','No access allowed from Israel (IL-IP0623). ');
$ax += cidrblock($address,'77.138.230.0/23','No access allowed from Israel (IL-IP0624). ');
$ax += cidrblock($address,'77.138.232.0/24','No access allowed from Israel (IL-IP0625). ');
$ax += cidrblock($address,'77.138.234.0/23','No access allowed from Israel (IL-IP0626). ');
$ax += cidrblock($address,'77.138.236.0/22','No access allowed from Israel (IL-IP0627). ');
$ax += cidrblock($address,'77.138.240.0/21','No access allowed from Israel (IL-IP0628). ');
$ax += cidrblock($address,'77.138.249.0/24','No access allowed from Israel (IL-IP0629). ');
$ax += cidrblock($address,'77.138.250.0/24','No access allowed from Israel (IL-IP0630). ');
$ax += cidrblock($address,'77.138.252.0/22','No access allowed from Israel (IL-IP0631). ');
$ax += cidrblock($address,'77.139.0.0/23','No access allowed from Israel (IL-IP0632). ');
$ax += cidrblock($address,'77.139.5.0/24','No access allowed from Israel (IL-IP0633). ');
$ax += cidrblock($address,'77.139.8.0/23','No access allowed from Israel (IL-IP0634). ');
$ax += cidrblock($address,'77.139.12.0/22','No access allowed from Israel (IL-IP0635). ');
$ax += cidrblock($address,'77.139.16.0/21','No access allowed from Israel (IL-IP0636). ');
$ax += cidrblock($address,'77.139.25.0/24','No access allowed from Israel (IL-IP0637). ');
$ax += cidrblock($address,'77.139.27.0/24','No access allowed from Israel (IL-IP0638). ');
$ax += cidrblock($address,'77.139.28.0/22','No access allowed from Israel (IL-IP0639). ');
$ax += cidrblock($address,'77.139.34.0/23','No access allowed from Israel (IL-IP0640). ');
$ax += cidrblock($address,'77.139.36.0/22','No access allowed from Israel (IL-IP0641). ');
$ax += cidrblock($address,'77.139.40.0/21','No access allowed from Israel (IL-IP0642). ');
$ax += cidrblock($address,'77.139.60.0/23','No access allowed from Israel (IL-IP0643). ');
$ax += cidrblock($address,'77.139.64.0/22','No access allowed from Israel (IL-IP0644). ');
$ax += cidrblock($address,'77.139.70.0/23','No access allowed from Israel (IL-IP0645). ');
$ax += cidrblock($address,'77.139.72.0/22','No access allowed from Israel (IL-IP0646). ');
$ax += cidrblock($address,'77.139.78.0/23','No access allowed from Israel (IL-IP0647). ');
$ax += cidrblock($address,'77.139.96.0/22','No access allowed from Israel (IL-IP0648). ');
$ax += cidrblock($address,'77.139.104.0/21','No access allowed from Israel (IL-IP0649). ');
$ax += cidrblock($address,'77.139.113.0/24','No access allowed from Israel (IL-IP0650). ');
$ax += cidrblock($address,'77.139.120.0/23','No access allowed from Israel (IL-IP0651). ');
$ax += cidrblock($address,'77.139.132.0/23','No access allowed from Israel (IL-IP0652). ');
$ax += cidrblock($address,'77.139.135.0/24','No access allowed from Israel (IL-IP0653). ');
$ax += cidrblock($address,'77.139.139.0/24','No access allowed from Israel (IL-IP0654). ');
$ax += cidrblock($address,'77.139.141.0/24','No access allowed from Israel (IL-IP0655). ');
$ax += cidrblock($address,'77.139.142.0/23','No access allowed from Israel (IL-IP0656). ');
$ax += cidrblock($address,'77.139.146.0/24','No access allowed from Israel (IL-IP0657). ');
$ax += cidrblock($address,'77.139.154.0/23','No access allowed from Israel (IL-IP0658). ');
$ax += cidrblock($address,'77.139.156.0/24','No access allowed from Israel (IL-IP0659). ');
$ax += cidrblock($address,'77.139.164.0/22','No access allowed from Israel (IL-IP0660). ');
$ax += cidrblock($address,'77.139.168.0/21','No access allowed from Israel (IL-IP0661). ');
$ax += cidrblock($address,'77.139.176.0/23','No access allowed from Israel (IL-IP0662). ');
$ax += cidrblock($address,'77.139.183.0/24','No access allowed from Israel (IL-IP0663). ');
$ax += cidrblock($address,'77.139.184.0/23','No access allowed from Israel (IL-IP0664). ');
$ax += cidrblock($address,'77.139.187.0/24','No access allowed from Israel (IL-IP0665). ');
$ax += cidrblock($address,'77.139.188.0/23','No access allowed from Israel (IL-IP0666). ');
$ax += cidrblock($address,'77.139.190.0/24','No access allowed from Israel (IL-IP0667). ');
$ax += cidrblock($address,'77.139.194.0/23','No access allowed from Israel (IL-IP0668). ');
$ax += cidrblock($address,'77.139.196.0/24','No access allowed from Israel (IL-IP0669). ');
$ax += cidrblock($address,'77.139.198.0/25','No access allowed from Israel (IL-IP0670). ');
$ax += cidrblock($address,'77.139.199.0/24','No access allowed from Israel (IL-IP0671). ');
$ax += cidrblock($address,'77.139.202.0/23','No access allowed from Israel (IL-IP0672). ');
$ax += cidrblock($address,'77.139.206.0/23','No access allowed from Israel (IL-IP0673). ');
$ax += cidrblock($address,'77.139.208.0/21','No access allowed from Israel (IL-IP0674). ');
$ax += cidrblock($address,'77.139.216.0/22','No access allowed from Israel (IL-IP0675). ');
$ax += cidrblock($address,'77.139.221.0/24','No access allowed from Israel (IL-IP0676). ');
$ax += cidrblock($address,'77.139.232.0/23','No access allowed from Israel (IL-IP0677). ');
$ax += cidrblock($address,'77.139.236.0/22','No access allowed from Israel (IL-IP0678). ');
$ax += cidrblock($address,'77.139.245.151/32','No access allowed from Israel (IL-IP0679). ');
$ax += cidrblock($address,'77.139.250.0/23','No access allowed from Israel (IL-IP0680). ');
$ax += cidrblock($address,'77.139.252.0/22','No access allowed from Israel (IL-IP0681). ');
}
if(lmatch($address,'79','')) {
$ax += cidrblock($address,'79.176.0.0/14','No access allowed from Israel (IL-IP0682). ');
$ax += cidrblock($address,'79.180.0.0/17','No access allowed from Israel (IL-IP0683). ');
$ax += cidrblock($address,'79.180.128.0/19','No access allowed from Israel (IL-IP0684). ');
$ax += cidrblock($address,'79.180.160.0/21','No access allowed from Israel (IL-IP0685). ');
$ax += cidrblock($address,'79.180.168.0/22','No access allowed from Israel (IL-IP0686). ');
$ax += cidrblock($address,'79.180.172.0/23','No access allowed from Israel (IL-IP0687). ');
$ax += cidrblock($address,'79.180.174.0/24','No access allowed from Israel (IL-IP0688). ');
$ax += cidrblock($address,'79.180.175.0/25','No access allowed from Israel (IL-IP0689). ');
$ax += cidrblock($address,'79.180.175.128/26','No access allowed from Israel (IL-IP0690). ');
$ax += cidrblock($address,'79.180.175.192/28','No access allowed from Israel (IL-IP0691). ');
$ax += cidrblock($address,'79.180.175.208/29','No access allowed from Israel (IL-IP0692). ');
$ax += cidrblock($address,'79.180.175.216/31','No access allowed from Israel (IL-IP0693). ');
$ax += cidrblock($address,'79.180.175.218/32','No access allowed from Israel (IL-IP0694). ');
$ax += cidrblock($address,'79.180.175.220/30','No access allowed from Israel (IL-IP0695). ');
$ax += cidrblock($address,'79.180.175.224/27','No access allowed from Israel (IL-IP0696). ');
$ax += cidrblock($address,'79.180.176.0/20','No access allowed from Israel (IL-IP0697). ');
$ax += cidrblock($address,'79.180.192.0/18','No access allowed from Israel (IL-IP0698). ');
$ax += cidrblock($address,'79.181.0.0/16','No access allowed from Israel (IL-IP0699). ');
$ax += cidrblock($address,'79.182.0.0/15','No access allowed from Israel (IL-IP0700). ');
}
}
if(lmatch($address,'8','')) {
if(lmatch($address,'80','')) {
$ax += cidrblock($address,'80.70.128.0/20','No access allowed from Israel (IL-IP0701). ');
$ax += cidrblock($address,'80.74.96.0/19','No access allowed from Israel (IL-IP0702). ');
$ax += cidrblock($address,'80.178.0.0/15','No access allowed from Israel (IL-IP0703). ');
$ax += cidrblock($address,'80.230.0.0/16','No access allowed from Israel (IL-IP0704). ');
$ax += cidrblock($address,'80.244.160.0/20','No access allowed from Israel (IL-IP0705). ');
$ax += cidrblock($address,'80.246.128.0/20','No access allowed from Israel (IL-IP0706). ');
$ax += cidrblock($address,'80.250.144.0/20','No access allowed from Israel (IL-IP0707). ');
}
if(lmatch($address,'81','')) {
$ax += cidrblock($address,'81.5.0.0/18','No access allowed from Israel (IL-IP0708). ');
$ax += cidrblock($address,'81.173.8.0/22','No access allowed from Israel (IL-IP0709). ');
$ax += cidrblock($address,'81.199.120.0/22','No access allowed from Israel (IL-IP0710). ');
$ax += cidrblock($address,'81.218.0.0/16','No access allowed from Israel (IL-IP0711). ');
}
if(lmatch($address,'82','')) {
$ax += cidrblock($address,'82.80.0.0/15','No access allowed from Israel (IL-IP0712). ');
$ax += cidrblock($address,'82.102.128.0/18','No access allowed from Israel (IL-IP0713). ');
$ax += cidrblock($address,'82.163.49.0/24','No access allowed from Israel (IL-IP0714). ');
$ax += cidrblock($address,'82.163.50.0/23','No access allowed from Israel (IL-IP0715). ');
$ax += cidrblock($address,'82.163.136.0/24','No access allowed from Israel (IL-IP0716). ');
$ax += cidrblock($address,'82.163.249.0/24','No access allowed from Israel (IL-IP0717). ');
$ax += cidrblock($address,'82.163.251.0/24','No access allowed from Israel (IL-IP0718). ');
$ax += cidrblock($address,'82.166.0.0/16','No access allowed from Israel (IL-IP0719). ');
$ax += cidrblock($address,'82.195.168.225/32','No access allowed from Israel (IL-IP0720). ');
}
if(lmatch($address,'83','')) {
$ax += cidrblock($address,'83.130.0.0/16','No access allowed from Israel (IL-IP0721). ');
}
if(lmatch($address,'84','')) {
$ax += cidrblock($address,'84.94.0.0/15','No access allowed from Israel (IL-IP0722). ');
$ax += cidrblock($address,'84.108.0.0/14','No access allowed from Israel (IL-IP0723). ');
$ax += cidrblock($address,'84.228.0.0/15','No access allowed from Israel (IL-IP0724). ');
}
if(lmatch($address,'85','')) {
$ax += cidrblock($address,'85.64.0.0/15','No access allowed from Israel (IL-IP0725). ');
$ax += cidrblock($address,'85.130.128.0/17','No access allowed from Israel (IL-IP0726). ');
$ax += cidrblock($address,'85.159.160.0/21','No access allowed from Israel (IL-IP0727). ');
$ax += cidrblock($address,'85.250.0.0/16','No access allowed from Israel (IL-IP0728). ');
}
if(lmatch($address,'87','')) {
$ax += cidrblock($address,'87.68.0.0/14','No access allowed from Israel (IL-IP0729). ');
$ax += cidrblock($address,'87.120.11.0/24','No access allowed from Israel (IL-IP0730). ');
$ax += cidrblock($address,'87.239.255.0/24','No access allowed from Israel (IL-IP0731). ');
}
if(lmatch($address,'88','')) {
$ax += cidrblock($address,'88.202.216.0/24','No access allowed from Israel (IL-IP0732). ');
$ax += cidrblock($address,'88.202.218.0/24','No access allowed from Israel (IL-IP0733). ');
$ax += cidrblock($address,'88.202.220.0/24','No access allowed from Israel (IL-IP0734). ');
$ax += cidrblock($address,'88.202.223.0/24','No access allowed from Israel (IL-IP0735). ');
}
if(lmatch($address,'89','')) {
$ax += cidrblock($address,'89.38.28.0/22','No access allowed from Israel (IL-IP0736). ');
$ax += cidrblock($address,'89.138.0.0/15','No access allowed from Israel (IL-IP0737). ');
$ax += cidrblock($address,'89.237.64.0/22','No access allowed from Israel (IL-IP0738). ');
$ax += cidrblock($address,'89.237.68.0/24','No access allowed from Israel (IL-IP0739). ');
$ax += cidrblock($address,'89.237.72.0/22','No access allowed from Israel (IL-IP0740). ');
$ax += cidrblock($address,'89.237.78.0/24','No access allowed from Israel (IL-IP0741). ');
$ax += cidrblock($address,'89.237.86.0/23','No access allowed from Israel (IL-IP0742). ');
$ax += cidrblock($address,'89.237.88.0/21','No access allowed from Israel (IL-IP0743). ');
$ax += cidrblock($address,'89.237.96.145/32','No access allowed from Israel (IL-IP0744). ');
$ax += cidrblock($address,'89.237.99.0/24','No access allowed from Israel (IL-IP0745). ');
$ax += cidrblock($address,'89.237.100.0/22','No access allowed from Israel (IL-IP0746). ');
$ax += cidrblock($address,'89.237.104.0/24','No access allowed from Israel (IL-IP0747). ');
$ax += cidrblock($address,'89.237.107.0/25','No access allowed from Israel (IL-IP0748). ');
$ax += cidrblock($address,'89.237.110.0/23','No access allowed from Israel (IL-IP0749). ');
$ax += cidrblock($address,'89.237.112.0/22','No access allowed from Israel (IL-IP0750). ');
$ax += cidrblock($address,'89.237.118.0/24','No access allowed from Israel (IL-IP0751). ');
$ax += cidrblock($address,'89.237.121.0/24','No access allowed from Israel (IL-IP0752). ');
$ax += cidrblock($address,'89.237.122.0/23','No access allowed from Israel (IL-IP0753). ');
}
}
if(lmatch($address,'9','')) {
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.90.128.0/20','No access allowed from Israel (IL-IP0754). ');
$ax += cidrblock($address,'91.135.96.0/20','No access allowed from Israel (IL-IP0755). ');
$ax += cidrblock($address,'91.143.224.0/20','No access allowed from Israel (IL-IP0756). ');
$ax += cidrblock($address,'91.193.48.0/22','No access allowed from Israel (IL-IP0757). ');
$ax += cidrblock($address,'91.194.4.0/23','No access allowed from Israel (IL-IP0758). ');
$ax += cidrblock($address,'91.194.114.0/23','No access allowed from Israel (IL-IP0759). ');
$ax += cidrblock($address,'91.195.162.0/23','No access allowed from Israel (IL-IP0760). ');
$ax += cidrblock($address,'91.197.60.0/22','No access allowed from Israel (IL-IP0761). ');
$ax += cidrblock($address,'91.197.100.0/22','No access allowed from Israel (IL-IP0762). ');
$ax += cidrblock($address,'91.198.5.0/24','No access allowed from Israel (IL-IP0763). ');
$ax += cidrblock($address,'91.198.70.0/24','No access allowed from Israel (IL-IP0764). ');
$ax += cidrblock($address,'91.198.129.0/24','No access allowed from Israel (IL-IP0765). ');
$ax += cidrblock($address,'91.198.205.0/24','No access allowed from Israel (IL-IP0766). ');
$ax += cidrblock($address,'91.199.53.0/24','No access allowed from Israel (IL-IP0767). ');
$ax += cidrblock($address,'91.199.69.0/24','No access allowed from Israel (IL-IP0768). ');
$ax += cidrblock($address,'91.199.94.0/24','No access allowed from Israel (IL-IP0769). ');
$ax += cidrblock($address,'91.199.99.0/24','No access allowed from Israel (IL-IP0770). ');
$ax += cidrblock($address,'91.199.100.0/24','No access allowed from Israel (IL-IP0771). ');
$ax += cidrblock($address,'91.199.119.0/24','No access allowed from Israel (IL-IP0772). ');
$ax += cidrblock($address,'91.199.202.0/24','No access allowed from Israel (IL-IP0773). ');
$ax += cidrblock($address,'91.200.144.0/22','No access allowed from Israel (IL-IP0774). ');
$ax += cidrblock($address,'91.202.168.0/22','No access allowed from Israel (IL-IP0775). ');
$ax += cidrblock($address,'91.205.152.0/22','No access allowed from Israel (IL-IP0776). ');
$ax += cidrblock($address,'91.206.170.0/23','No access allowed from Israel (IL-IP0777). ');
$ax += cidrblock($address,'91.207.34.0/23','No access allowed from Israel (IL-IP0778). ');
$ax += cidrblock($address,'91.207.90.0/23','No access allowed from Israel (IL-IP0779). ');
$ax += cidrblock($address,'91.207.206.0/23','No access allowed from Israel (IL-IP0780). ');
$ax += cidrblock($address,'91.207.240.0/23','No access allowed from Israel (IL-IP0781). ');
$ax += cidrblock($address,'91.208.86.0/24','No access allowed from Israel (IL-IP0782). ');
$ax += cidrblock($address,'91.208.118.0/24','No access allowed from Israel (IL-IP0783). ');
$ax += cidrblock($address,'91.208.129.0/24','No access allowed from Israel (IL-IP0784). ');
$ax += cidrblock($address,'91.208.139.0/24','No access allowed from Israel (IL-IP0785). ');
$ax += cidrblock($address,'91.208.140.0/24','No access allowed from Israel (IL-IP0786). ');
$ax += cidrblock($address,'91.208.147.0/24','No access allowed from Israel (IL-IP0787). ');
$ax += cidrblock($address,'91.208.218.0/24','No access allowed from Israel (IL-IP0788). ');
$ax += cidrblock($address,'91.209.113.0/24','No access allowed from Israel (IL-IP0789). ');
$ax += cidrblock($address,'91.209.182.0/24','No access allowed from Israel (IL-IP0790). ');
$ax += cidrblock($address,'91.212.76.0/24','No access allowed from Israel (IL-IP0791). ');
$ax += cidrblock($address,'91.212.114.0/24','No access allowed from Israel (IL-IP0792). ');
$ax += cidrblock($address,'91.212.189.0/24','No access allowed from Israel (IL-IP0793). ');
$ax += cidrblock($address,'91.213.176.0/24','No access allowed from Israel (IL-IP0794). ');
$ax += cidrblock($address,'91.214.100.0/22','No access allowed from Israel (IL-IP0795). ');
$ax += cidrblock($address,'91.216.31.0/24','No access allowed from Israel (IL-IP0796). ');
$ax += cidrblock($address,'91.216.222.0/24','No access allowed from Israel (IL-IP0797). ');
$ax += cidrblock($address,'91.216.252.0/24','No access allowed from Israel (IL-IP0798). ');
$ax += cidrblock($address,'91.217.219.0/24','No access allowed from Israel (IL-IP0799). ');
$ax += cidrblock($address,'91.220.9.0/24','No access allowed from Israel (IL-IP0800). ');
$ax += cidrblock($address,'91.220.22.0/24','No access allowed from Israel (IL-IP0801). ');
$ax += cidrblock($address,'91.220.193.0/24','No access allowed from Israel (IL-IP0802). ');
$ax += cidrblock($address,'91.223.11.0/24','No access allowed from Israel (IL-IP0803). ');
$ax += cidrblock($address,'91.223.54.0/24','No access allowed from Israel (IL-IP0804). ');
$ax += cidrblock($address,'91.223.106.0/24','No access allowed from Israel (IL-IP0805). ');
$ax += cidrblock($address,'91.226.245.0/24','No access allowed from Israel (IL-IP0806). ');
$ax += cidrblock($address,'91.227.70.0/23','No access allowed from Israel (IL-IP0807). ');
$ax += cidrblock($address,'91.227.164.0/23','No access allowed from Israel (IL-IP0808). ');
$ax += cidrblock($address,'91.228.126.0/23','No access allowed from Israel (IL-IP0809). ');
$ax += cidrblock($address,'91.228.162.0/23','No access allowed from Israel (IL-IP0810). ');
$ax += cidrblock($address,'91.228.248.0/24','No access allowed from Israel (IL-IP0811). ');
$ax += cidrblock($address,'91.230.79.0/24','No access allowed from Israel (IL-IP0812). ');
$ax += cidrblock($address,'91.230.236.0/24','No access allowed from Israel (IL-IP0813). ');
$ax += cidrblock($address,'91.231.192.0/22','No access allowed from Israel (IL-IP0814). ');
$ax += cidrblock($address,'91.235.107.0/24','No access allowed from Israel (IL-IP0815). ');
$ax += cidrblock($address,'91.235.150.0/23','No access allowed from Israel (IL-IP0816). ');
$ax += cidrblock($address,'91.237.251.0/24','No access allowed from Israel (IL-IP0817). ');
$ax += cidrblock($address,'91.239.218.0/23','No access allowed from Israel (IL-IP0818). ');
$ax += cidrblock($address,'91.240.146.0/23','No access allowed from Israel (IL-IP0819). ');
$ax += cidrblock($address,'91.240.234.0/23','No access allowed from Israel (IL-IP0820). ');
$ax += cidrblock($address,'91.246.218.0/24','No access allowed from Israel (IL-IP0821). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.61.224.0/20','No access allowed from Israel (IL-IP0822). ');
$ax += cidrblock($address,'92.240.0.0/19','No access allowed from Israel (IL-IP0823). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.94.40.0/24','No access allowed from Israel (IL-IP0824). ');
$ax += cidrblock($address,'93.94.41.0/26','No access allowed from Israel (IL-IP0825). ');
$ax += cidrblock($address,'93.94.41.64/32','No access allowed from Israel (IL-IP0826). ');
$ax += cidrblock($address,'93.94.41.72/31','No access allowed from Israel (IL-IP0827). ');
$ax += cidrblock($address,'93.94.41.74/32','No access allowed from Israel (IL-IP0828). ');
$ax += cidrblock($address,'93.94.41.90/31','No access allowed from Israel (IL-IP0829). ');
$ax += cidrblock($address,'93.94.41.92/30','No access allowed from Israel (IL-IP0830). ');
$ax += cidrblock($address,'93.94.41.96/27','No access allowed from Israel (IL-IP0831). ');
$ax += cidrblock($address,'93.94.41.128/25','No access allowed from Israel (IL-IP0832). ');
$ax += cidrblock($address,'93.94.42.0/23','No access allowed from Israel (IL-IP0833). ');
$ax += cidrblock($address,'93.94.44.0/22','No access allowed from Israel (IL-IP0834). ');
$ax += cidrblock($address,'93.157.80.0/21','No access allowed from Israel (IL-IP0835). ');
$ax += cidrblock($address,'93.172.0.0/15','No access allowed from Israel (IL-IP0836). ');
$ax += cidrblock($address,'93.175.32.0/19','No access allowed from Israel (IL-IP0837). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.159.128.0/17','No access allowed from Israel (IL-IP0838). ');
$ax += cidrblock($address,'94.188.128.0/17','No access allowed from Israel (IL-IP0839). ');
$ax += cidrblock($address,'94.230.80.0/20','No access allowed from Israel (IL-IP0840). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.35.0.0/16','No access allowed from Israel (IL-IP0841). ');
$ax += cidrblock($address,'95.86.64.0/18','No access allowed from Israel (IL-IP0842). ');
$ax += cidrblock($address,'95.129.32.0/21','No access allowed from Israel (IL-IP0843). ');
$ax += cidrblock($address,'95.142.16.0/23','No access allowed from Israel (IL-IP0844). ');
$ax += cidrblock($address,'95.142.20.0/22','No access allowed from Israel (IL-IP0845). ');
$ax += cidrblock($address,'95.142.24.0/22','No access allowed from Israel (IL-IP0846). ');
$ax += cidrblock($address,'95.142.28.0/23','No access allowed from Israel (IL-IP0847). ');
$ax += cidrblock($address,'95.142.31.0/24','No access allowed from Israel (IL-IP0848). ');
$ax += cidrblock($address,'95.175.32.0/19','No access allowed from Israel (IL-IP0849). ');
$ax += cidrblock($address,'95.183.6.0/24','No access allowed from Israel (IL-IP0850). ');
}
if(lmatch($address,'98','')) {
$ax += cidrblock($address,'98.129.101.152/29','No access allowed from Israel (IL-IP0851). ');
}
}
$ax += inmatch($query,'iltestil','Test function. (IL). ');
// End of IL list
