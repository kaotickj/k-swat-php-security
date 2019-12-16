<?php
// *php 5 fix
global $ax;
// Ecuador Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / EC-2018.65.634';
$ax += rmatch($hoster,'.ec','No access allowed from Ecuador (EC-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.143.208.0/24','No access allowed from Ecuador (EC-IP0001). ');
$ax += cidrblock($address,'104.224.10.0/24','No access allowed from Ecuador (EC-IP0002). ');
$ax += cidrblock($address,'104.250.180.0/24','No access allowed from Ecuador (EC-IP0003). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.201.160.0/22','No access allowed from Ecuador (EC-IP0004). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'131.196.8.0/21','No access allowed from Ecuador (EC-IP0005). ');
$ax += cidrblock($address,'131.196.60.0/22','No access allowed from Ecuador (EC-IP0006). ');
$ax += cidrblock($address,'131.196.112.0/22','No access allowed from Ecuador (EC-IP0007). ');
$ax += cidrblock($address,'138.59.108.0/22','No access allowed from Ecuador (EC-IP0008). ');
$ax += cidrblock($address,'138.99.123.0/25','No access allowed from Ecuador (EC-IP0009). ');
$ax += cidrblock($address,'138.122.108.0/22','No access allowed from Ecuador (EC-IP0010). ');
$ax += cidrblock($address,'138.185.136.0/22','No access allowed from Ecuador (EC-IP0011). ');
$ax += cidrblock($address,'139.81.248.0/22','No access allowed from Ecuador (EC-IP0012). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'143.255.248.0/22','No access allowed from Ecuador (EC-IP0013). ');
$ax += cidrblock($address,'148.223.156.0/22','No access allowed from Ecuador (EC-IP0014). ');
$ax += cidrblock($address,'148.235.180.0/22','No access allowed from Ecuador (EC-IP0015). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'157.100.0.0/16','No access allowed from Ecuador (EC-IP0016). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'160.20.164.0/22','No access allowed from Ecuador (EC-IP0017). ');
$ax += cidrblock($address,'164.163.48.0/22','No access allowed from Ecuador (EC-IP0018). ');
$ax += cidrblock($address,'164.163.132.0/22','No access allowed from Ecuador (EC-IP0019). ');
$ax += cidrblock($address,'164.163.160.0/22','No access allowed from Ecuador (EC-IP0020). ');
$ax += cidrblock($address,'167.250.180.0/22','No access allowed from Ecuador (EC-IP0021). ');
$ax += cidrblock($address,'168.194.148.0/22','No access allowed from Ecuador (EC-IP0022). ');
$ax += cidrblock($address,'168.197.188.0/25','No access allowed from Ecuador (EC-IP0023). ');
$ax += cidrblock($address,'168.197.189.0/24','No access allowed from Ecuador (EC-IP0024). ');
$ax += cidrblock($address,'168.197.191.0/24','No access allowed from Ecuador (EC-IP0025). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'170.82.112.0/22','No access allowed from Ecuador (EC-IP0026). ');
$ax += cidrblock($address,'170.82.156.0/22','No access allowed from Ecuador (EC-IP0027). ');
$ax += cidrblock($address,'170.83.216.0/22','No access allowed from Ecuador (EC-IP0028). ');
$ax += cidrblock($address,'170.238.0.0/22','No access allowed from Ecuador (EC-IP0029). ');
$ax += cidrblock($address,'170.238.170.0/23','No access allowed from Ecuador (EC-IP0030). ');
$ax += cidrblock($address,'170.239.204.0/22','No access allowed from Ecuador (EC-IP0031). ');
$ax += cidrblock($address,'170.244.208.0/22','No access allowed from Ecuador (EC-IP0032). ');
$ax += cidrblock($address,'170.246.84.0/22','No access allowed from Ecuador (EC-IP0033). ');
$ax += cidrblock($address,'170.254.28.0/22','No access allowed from Ecuador (EC-IP0034). ');
$ax += cidrblock($address,'172.68.176.0/22','No access allowed from Ecuador (EC-IP0035). ');
$ax += cidrblock($address,'177.234.192.0/18','No access allowed from Ecuador (EC-IP0036). ');
$ax += cidrblock($address,'179.0.129.0/24','No access allowed from Ecuador (EC-IP0037). ');
$ax += cidrblock($address,'179.0.204.0/24','No access allowed from Ecuador (EC-IP0038). ');
$ax += cidrblock($address,'179.49.0.0/18','No access allowed from Ecuador (EC-IP0039). ');
$ax += cidrblock($address,'179.60.48.0/20','No access allowed from Ecuador (EC-IP0040). ');
$ax += cidrblock($address,'179.60.244.0/22','No access allowed from Ecuador (EC-IP0041). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'181.39.0.0/16','No access allowed from Ecuador (EC-IP0042). ');
$ax += cidrblock($address,'181.112.0.0/15','No access allowed from Ecuador (EC-IP0043). ');
$ax += cidrblock($address,'181.175.0.0/16','No access allowed from Ecuador (EC-IP0044). ');
$ax += cidrblock($address,'181.188.192.0/18','No access allowed from Ecuador (EC-IP0045). ');
$ax += cidrblock($address,'181.191.232.0/22','No access allowed from Ecuador (EC-IP0046). ');
$ax += cidrblock($address,'181.196.0.0/16','No access allowed from Ecuador (EC-IP0047). ');
$ax += cidrblock($address,'181.198.0.0/16','No access allowed from Ecuador (EC-IP0048). ');
$ax += cidrblock($address,'181.199.0.0/17','No access allowed from Ecuador (EC-IP0049). ');
$ax += cidrblock($address,'181.211.0.0/16','No access allowed from Ecuador (EC-IP0050). ');
$ax += cidrblock($address,'181.215.135.112/28','No access allowed from Ecuador (EC-IP0051). ');
$ax += cidrblock($address,'181.224.172.0/22','No access allowed from Ecuador (EC-IP0052). ');
$ax += cidrblock($address,'186.2.161.0/24','No access allowed from Ecuador (EC-IP0053). ');
$ax += cidrblock($address,'186.2.168.0/24','No access allowed from Ecuador (EC-IP0054). ');
$ax += cidrblock($address,'186.2.174.0/23','No access allowed from Ecuador (EC-IP0055). ');
$ax += cidrblock($address,'186.3.0.0/16','No access allowed from Ecuador (EC-IP0056). ');
$ax += cidrblock($address,'186.4.128.0/17','No access allowed from Ecuador (EC-IP0057). ');
$ax += cidrblock($address,'186.5.0.0/17','No access allowed from Ecuador (EC-IP0058). ');
$ax += cidrblock($address,'186.33.128.0/18','No access allowed from Ecuador (EC-IP0059). ');
$ax += cidrblock($address,'186.42.0.0/16','No access allowed from Ecuador (EC-IP0060). ');
$ax += cidrblock($address,'186.43.128.0/17','No access allowed from Ecuador (EC-IP0061). ');
$ax += cidrblock($address,'186.46.0.0/15','No access allowed from Ecuador (EC-IP0062). ');
$ax += cidrblock($address,'186.65.0.0/18','No access allowed from Ecuador (EC-IP0063). ');
$ax += cidrblock($address,'186.66.0.0/16','No access allowed from Ecuador (EC-IP0064). ');
$ax += cidrblock($address,'186.68.0.0/14','No access allowed from Ecuador (EC-IP0065). ');
$ax += cidrblock($address,'186.101.0.0/16','No access allowed from Ecuador (EC-IP0066). ');
$ax += cidrblock($address,'186.178.0.0/16','No access allowed from Ecuador (EC-IP0067). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'190.7.90.184/29','No access allowed from Ecuador (EC-IP0068). ');
$ax += cidrblock($address,'190.8.180.0/22','No access allowed from Ecuador (EC-IP0069). ');
$ax += cidrblock($address,'190.9.160.0/19','No access allowed from Ecuador (EC-IP0070). ');
$ax += cidrblock($address,'190.10.128.0/17','No access allowed from Ecuador (EC-IP0071). ');
$ax += cidrblock($address,'190.11.0.0/19','No access allowed from Ecuador (EC-IP0072). ');
$ax += cidrblock($address,'190.11.240.0/20','No access allowed from Ecuador (EC-IP0073). ');
$ax += cidrblock($address,'190.12.0.0/18','No access allowed from Ecuador (EC-IP0074). ');
$ax += cidrblock($address,'190.15.128.0/20','No access allowed from Ecuador (EC-IP0075). ');
$ax += cidrblock($address,'190.15.160.0/21','No access allowed from Ecuador (EC-IP0076). ');
$ax += cidrblock($address,'190.52.64.0/20','No access allowed from Ecuador (EC-IP0077). ');
$ax += cidrblock($address,'190.52.192.0/20','No access allowed from Ecuador (EC-IP0078). ');
$ax += cidrblock($address,'190.57.128.0/18','No access allowed from Ecuador (EC-IP0079). ');
$ax += cidrblock($address,'190.61.17.194/32','No access allowed from Ecuador (EC-IP0080). ');
$ax += cidrblock($address,'190.63.0.0/16','No access allowed from Ecuador (EC-IP0081). ');
$ax += cidrblock($address,'190.90.39.0/25','No access allowed from Ecuador (EC-IP0082). ');
$ax += cidrblock($address,'190.90.53.0/24','No access allowed from Ecuador (EC-IP0083). ');
$ax += cidrblock($address,'190.90.83.0/24','No access allowed from Ecuador (EC-IP0084). ');
$ax += cidrblock($address,'190.90.88.0/24','No access allowed from Ecuador (EC-IP0085). ');
$ax += cidrblock($address,'190.90.102.0/24','No access allowed from Ecuador (EC-IP0086). ');
$ax += cidrblock($address,'190.90.137.0/24','No access allowed from Ecuador (EC-IP0087). ');
$ax += cidrblock($address,'190.90.145.128/25','No access allowed from Ecuador (EC-IP0088). ');
$ax += cidrblock($address,'190.90.146.128/25','No access allowed from Ecuador (EC-IP0089). ');
$ax += cidrblock($address,'190.90.187.0/25','No access allowed from Ecuador (EC-IP0090). ');
$ax += cidrblock($address,'190.90.194.0/25','No access allowed from Ecuador (EC-IP0091). ');
$ax += cidrblock($address,'190.90.205.128/25','No access allowed from Ecuador (EC-IP0092). ');
$ax += cidrblock($address,'190.90.206.0/24','No access allowed from Ecuador (EC-IP0093). ');
$ax += cidrblock($address,'190.90.209.160/27','No access allowed from Ecuador (EC-IP0094). ');
$ax += cidrblock($address,'190.90.210.0/24','No access allowed from Ecuador (EC-IP0095). ');
$ax += cidrblock($address,'190.90.220.0/24','No access allowed from Ecuador (EC-IP0096). ');
$ax += cidrblock($address,'190.90.232.0/24','No access allowed from Ecuador (EC-IP0097). ');
$ax += cidrblock($address,'190.90.241.128/25','No access allowed from Ecuador (EC-IP0098). ');
$ax += cidrblock($address,'190.90.255.128/25','No access allowed from Ecuador (EC-IP0099). ');
$ax += cidrblock($address,'190.94.128.0/19','No access allowed from Ecuador (EC-IP0100). ');
$ax += cidrblock($address,'190.95.128.0/17','No access allowed from Ecuador (EC-IP0101). ');
$ax += cidrblock($address,'190.96.96.0/20','No access allowed from Ecuador (EC-IP0102). ');
$ax += cidrblock($address,'190.99.72.0/21','No access allowed from Ecuador (EC-IP0103). ');
$ax += cidrblock($address,'190.103.117.216/29','No access allowed from Ecuador (EC-IP0104). ');
$ax += cidrblock($address,'190.107.64.0/20','No access allowed from Ecuador (EC-IP0105). ');
$ax += cidrblock($address,'190.107.80.0/21','No access allowed from Ecuador (EC-IP0106). ');
$ax += cidrblock($address,'190.107.232.0/21','No access allowed from Ecuador (EC-IP0107). ');
$ax += cidrblock($address,'190.108.64.0/21','No access allowed from Ecuador (EC-IP0108). ');
$ax += cidrblock($address,'190.110.192.0/19','No access allowed from Ecuador (EC-IP0109). ');
$ax += cidrblock($address,'190.111.64.0/19','No access allowed from Ecuador (EC-IP0110). ');
$ax += cidrblock($address,'190.114.3.0/25','No access allowed from Ecuador (EC-IP0111). ');
$ax += cidrblock($address,'190.120.64.0/19','No access allowed from Ecuador (EC-IP0112). ');
$ax += cidrblock($address,'190.123.0.0/20','No access allowed from Ecuador (EC-IP0113). ');
$ax += cidrblock($address,'190.123.48.0/20','No access allowed from Ecuador (EC-IP0114). ');
$ax += cidrblock($address,'190.130.128.0/17','No access allowed from Ecuador (EC-IP0115). ');
$ax += cidrblock($address,'190.131.0.0/17','No access allowed from Ecuador (EC-IP0116). ');
$ax += cidrblock($address,'190.131.128.0/18','No access allowed from Ecuador (EC-IP0117). ');
$ax += cidrblock($address,'190.152.0.0/16','No access allowed from Ecuador (EC-IP0118). ');
$ax += cidrblock($address,'190.154.0.0/15','No access allowed from Ecuador (EC-IP0119). ');
$ax += cidrblock($address,'190.184.216.0/22','No access allowed from Ecuador (EC-IP0120). ');
$ax += cidrblock($address,'190.196.244.0/23','No access allowed from Ecuador (EC-IP0121). ');
$ax += cidrblock($address,'190.214.0.0/16','No access allowed from Ecuador (EC-IP0122). ');
$ax += cidrblock($address,'190.216.96.0/20','No access allowed from Ecuador (EC-IP0123). ');
$ax += cidrblock($address,'190.216.208.0/20','No access allowed from Ecuador (EC-IP0124). ');
$ax += cidrblock($address,'191.97.64.0/22','No access allowed from Ecuador (EC-IP0125). ');
$ax += cidrblock($address,'191.99.0.0/16','No access allowed from Ecuador (EC-IP0126). ');
$ax += cidrblock($address,'191.100.0.0/16','No access allowed from Ecuador (EC-IP0127). ');
$ax += cidrblock($address,'192.140.92.0/22','No access allowed from Ecuador (EC-IP0128). ');
$ax += cidrblock($address,'192.141.8.0/22','No access allowed from Ecuador (EC-IP0129). ');
$ax += cidrblock($address,'192.141.36.0/22','No access allowed from Ecuador (EC-IP0130). ');
$ax += cidrblock($address,'192.188.44.0/22','No access allowed from Ecuador (EC-IP0131). ');
$ax += cidrblock($address,'192.188.48.0/21','No access allowed from Ecuador (EC-IP0132). ');
$ax += cidrblock($address,'192.188.56.0/22','No access allowed from Ecuador (EC-IP0133). ');
$ax += cidrblock($address,'192.188.60.0/24','No access allowed from Ecuador (EC-IP0134). ');
$ax += cidrblock($address,'192.188.194.0/23','No access allowed from Ecuador (EC-IP0135). ');
$ax += cidrblock($address,'192.188.196.0/23','No access allowed from Ecuador (EC-IP0136). ');
$ax += cidrblock($address,'192.207.40.0/23','No access allowed from Ecuador (EC-IP0137). ');
$ax += cidrblock($address,'192.207.42.0/24','No access allowed from Ecuador (EC-IP0138). ');
$ax += cidrblock($address,'192.207.65.0/24','No access allowed from Ecuador (EC-IP0139). ');
$ax += cidrblock($address,'192.207.66.0/23','No access allowed from Ecuador (EC-IP0140). ');
$ax += cidrblock($address,'192.207.68.0/24','No access allowed from Ecuador (EC-IP0141). ');
$ax += cidrblock($address,'192.207.244.0/24','No access allowed from Ecuador (EC-IP0142). ');
$ax += cidrblock($address,'192.229.212.0/24','No access allowed from Ecuador (EC-IP0143). ');
$ax += cidrblock($address,'198.27.118.84/30','No access allowed from Ecuador (EC-IP0144). ');
$ax += cidrblock($address,'198.27.121.212/30','No access allowed from Ecuador (EC-IP0145). ');
$ax += cidrblock($address,'198.50.102.32/29','No access allowed from Ecuador (EC-IP0146). ');
$ax += cidrblock($address,'198.50.108.96/29','No access allowed from Ecuador (EC-IP0147). ');
$ax += cidrblock($address,'198.50.117.104/29','No access allowed from Ecuador (EC-IP0148). ');
$ax += cidrblock($address,'198.50.122.160/29','No access allowed from Ecuador (EC-IP0149). ');
$ax += cidrblock($address,'198.50.123.96/29','No access allowed from Ecuador (EC-IP0150). ');
$ax += cidrblock($address,'198.50.164.40/29','No access allowed from Ecuador (EC-IP0151). ');
$ax += cidrblock($address,'198.50.207.136/29','No access allowed from Ecuador (EC-IP0152). ');
$ax += cidrblock($address,'198.50.216.96/29','No access allowed from Ecuador (EC-IP0153). ');
$ax += cidrblock($address,'198.50.236.104/30','No access allowed from Ecuador (EC-IP0154). ');
}
}
if(lmatch($address,'2','')) {
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'200.0.0.0/21','No access allowed from Ecuador (EC-IP0155). ');
$ax += cidrblock($address,'200.0.28.0/22','No access allowed from Ecuador (EC-IP0156). ');
$ax += cidrblock($address,'200.0.63.0/24','No access allowed from Ecuador (EC-IP0157). ');
$ax += cidrblock($address,'200.0.73.0/24','No access allowed from Ecuador (EC-IP0158). ');
$ax += cidrblock($address,'200.0.74.0/23','No access allowed from Ecuador (EC-IP0159). ');
$ax += cidrblock($address,'200.0.76.0/23','No access allowed from Ecuador (EC-IP0160). ');
$ax += cidrblock($address,'200.0.78.0/24','No access allowed from Ecuador (EC-IP0161). ');
$ax += cidrblock($address,'200.1.6.0/24','No access allowed from Ecuador (EC-IP0162). ');
$ax += cidrblock($address,'200.1.161.0/24','No access allowed from Ecuador (EC-IP0163). ');
$ax += cidrblock($address,'200.1.172.0/24','No access allowed from Ecuador (EC-IP0164). ');
$ax += cidrblock($address,'200.6.0.0/20','No access allowed from Ecuador (EC-IP0165). ');
$ax += cidrblock($address,'200.6.16.0/23','No access allowed from Ecuador (EC-IP0166). ');
$ax += cidrblock($address,'200.6.19.0/24','No access allowed from Ecuador (EC-IP0167). ');
$ax += cidrblock($address,'200.6.20.0/22','No access allowed from Ecuador (EC-IP0168). ');
$ax += cidrblock($address,'200.6.24.0/23','No access allowed from Ecuador (EC-IP0169). ');
$ax += cidrblock($address,'200.6.26.0/24','No access allowed from Ecuador (EC-IP0170). ');
$ax += cidrblock($address,'200.6.28.0/22','No access allowed from Ecuador (EC-IP0171). ');
$ax += cidrblock($address,'200.6.32.0/24','No access allowed from Ecuador (EC-IP0172). ');
$ax += cidrblock($address,'200.6.34.0/24','No access allowed from Ecuador (EC-IP0173). ');
$ax += cidrblock($address,'200.7.64.0/20','No access allowed from Ecuador (EC-IP0174). ');
$ax += cidrblock($address,'200.7.80.0/22','No access allowed from Ecuador (EC-IP0175). ');
$ax += cidrblock($address,'200.7.192.0/18','No access allowed from Ecuador (EC-IP0176). ');
$ax += cidrblock($address,'200.9.96.0/24','No access allowed from Ecuador (EC-IP0177). ');
$ax += cidrblock($address,'200.9.176.0/24','No access allowed from Ecuador (EC-IP0178). ');
$ax += cidrblock($address,'200.9.248.0/24','No access allowed from Ecuador (EC-IP0179). ');
$ax += cidrblock($address,'200.10.147.0/24','No access allowed from Ecuador (EC-IP0180). ');
$ax += cidrblock($address,'200.10.148.0/22','No access allowed from Ecuador (EC-IP0181). ');
$ax += cidrblock($address,'200.10.209.0/24','No access allowed from Ecuador (EC-IP0182). ');
$ax += cidrblock($address,'200.12.169.0/24','No access allowed from Ecuador (EC-IP0183). ');
$ax += cidrblock($address,'200.12.196.0/22','No access allowed from Ecuador (EC-IP0184). ');
$ax += cidrblock($address,'200.14.34.0/24','No access allowed from Ecuador (EC-IP0185). ');
$ax += cidrblock($address,'200.14.83.0/24','No access allowed from Ecuador (EC-IP0186). ');
$ax += cidrblock($address,'200.16.94.0/24','No access allowed from Ecuador (EC-IP0187). ');
$ax += cidrblock($address,'200.24.128.0/19','No access allowed from Ecuador (EC-IP0188). ');
$ax += cidrblock($address,'200.24.192.0/19','No access allowed from Ecuador (EC-IP0189). ');
$ax += cidrblock($address,'200.25.128.0/18','No access allowed from Ecuador (EC-IP0190). ');
$ax += cidrblock($address,'200.25.192.0/19','No access allowed from Ecuador (EC-IP0191). ');
$ax += cidrblock($address,'200.29.240.0/21','No access allowed from Ecuador (EC-IP0192). ');
$ax += cidrblock($address,'200.31.6.0/24','No access allowed from Ecuador (EC-IP0193). ');
$ax += cidrblock($address,'200.31.8.0/23','No access allowed from Ecuador (EC-IP0194). ');
$ax += cidrblock($address,'200.31.24.0/21','No access allowed from Ecuador (EC-IP0195). ');
$ax += cidrblock($address,'200.32.69.160/29','No access allowed from Ecuador (EC-IP0196). ');
$ax += cidrblock($address,'200.32.72.224/29','No access allowed from Ecuador (EC-IP0197). ');
$ax += cidrblock($address,'200.41.0.0/22','No access allowed from Ecuador (EC-IP0198). ');
$ax += cidrblock($address,'200.41.81.128/25','No access allowed from Ecuador (EC-IP0199). ');
$ax += cidrblock($address,'200.41.83.128/25','No access allowed from Ecuador (EC-IP0200). ');
$ax += cidrblock($address,'200.41.114.64/27','No access allowed from Ecuador (EC-IP0201). ');
$ax += cidrblock($address,'200.49.240.0/21','No access allowed from Ecuador (EC-IP0202). ');
$ax += cidrblock($address,'200.50.232.0/21','No access allowed from Ecuador (EC-IP0203). ');
$ax += cidrblock($address,'200.55.224.0/20','No access allowed from Ecuador (EC-IP0204). ');
$ax += cidrblock($address,'200.55.248.0/21','No access allowed from Ecuador (EC-IP0205). ');
$ax += cidrblock($address,'200.63.104.0/22','No access allowed from Ecuador (EC-IP0206). ');
$ax += cidrblock($address,'200.63.192.0/18','No access allowed from Ecuador (EC-IP0207). ');
$ax += cidrblock($address,'200.69.160.0/19','No access allowed from Ecuador (EC-IP0208). ');
$ax += cidrblock($address,'200.73.200.0/21','No access allowed from Ecuador (EC-IP0209). ');
$ax += cidrblock($address,'200.77.188.0/22','No access allowed from Ecuador (EC-IP0210). ');
$ax += cidrblock($address,'200.85.80.0/21','No access allowed from Ecuador (EC-IP0211). ');
$ax += cidrblock($address,'200.90.152.0/21','No access allowed from Ecuador (EC-IP0212). ');
$ax += cidrblock($address,'200.93.192.0/19','No access allowed from Ecuador (EC-IP0213). ');
$ax += cidrblock($address,'200.93.224.0/20','No access allowed from Ecuador (EC-IP0214). ');
$ax += cidrblock($address,'200.93.248.0/21','No access allowed from Ecuador (EC-IP0215). ');
$ax += cidrblock($address,'200.105.112.0/21','No access allowed from Ecuador (EC-IP0216). ');
$ax += cidrblock($address,'200.105.224.0/19','No access allowed from Ecuador (EC-IP0217). ');
$ax += cidrblock($address,'200.107.0.0/18','No access allowed from Ecuador (EC-IP0218). ');
$ax += cidrblock($address,'200.107.248.0/21','No access allowed from Ecuador (EC-IP0219). ');
$ax += cidrblock($address,'200.110.64.0/18','No access allowed from Ecuador (EC-IP0220). ');
$ax += cidrblock($address,'200.110.232.0/21','No access allowed from Ecuador (EC-IP0221). ');
$ax += cidrblock($address,'200.112.216.0/21','No access allowed from Ecuador (EC-IP0222). ');
$ax += cidrblock($address,'200.115.32.0/20','No access allowed from Ecuador (EC-IP0223). ');
$ax += cidrblock($address,'200.124.224.0/19','No access allowed from Ecuador (EC-IP0224). ');
$ax += cidrblock($address,'200.125.128.0/19','No access allowed from Ecuador (EC-IP0225). ');
$ax += cidrblock($address,'200.125.192.0/18','No access allowed from Ecuador (EC-IP0226). ');
$ax += cidrblock($address,'200.126.0.0/19','No access allowed from Ecuador (EC-IP0227). ');
$ax += cidrblock($address,'200.126.48.0/24','No access allowed from Ecuador (EC-IP0228). ');
$ax += cidrblock($address,'201.159.220.0/22','No access allowed from Ecuador (EC-IP0229). ');
$ax += cidrblock($address,'201.182.84.0/22','No access allowed from Ecuador (EC-IP0230). ');
$ax += cidrblock($address,'201.182.148.0/22','No access allowed from Ecuador (EC-IP0231). ');
$ax += cidrblock($address,'201.182.240.0/22','No access allowed from Ecuador (EC-IP0232). ');
$ax += cidrblock($address,'201.183.0.0/16','No access allowed from Ecuador (EC-IP0233). ');
$ax += cidrblock($address,'201.217.64.0/18','No access allowed from Ecuador (EC-IP0234). ');
$ax += cidrblock($address,'201.218.0.0/18','No access allowed from Ecuador (EC-IP0235). ');
$ax += cidrblock($address,'201.219.0.0/18','No access allowed from Ecuador (EC-IP0236). ');
$ax += cidrblock($address,'201.221.127.0/24','No access allowed from Ecuador (EC-IP0237). ');
$ax += cidrblock($address,'201.234.80.0/21','No access allowed from Ecuador (EC-IP0238). ');
$ax += cidrblock($address,'201.234.192.0/19','No access allowed from Ecuador (EC-IP0239). ');
$ax += cidrblock($address,'201.238.128.0/18','No access allowed from Ecuador (EC-IP0240). ');
$ax += cidrblock($address,'205.235.0.0/21','No access allowed from Ecuador (EC-IP0241). ');
$ax += cidrblock($address,'207.13.118.0/23','No access allowed from Ecuador (EC-IP0242). ');
$ax += cidrblock($address,'207.209.121.0/26','No access allowed from Ecuador (EC-IP0243). ');
$ax += cidrblock($address,'208.9.56.0/24','No access allowed from Ecuador (EC-IP0244). ');
$ax += cidrblock($address,'208.28.242.20/32','No access allowed from Ecuador (EC-IP0245). ');
$ax += cidrblock($address,'208.221.192.0/22','No access allowed from Ecuador (EC-IP0246). ');
$ax += cidrblock($address,'208.235.196.0/24','No access allowed from Ecuador (EC-IP0247). ');
$ax += cidrblock($address,'208.235.198.0/24','No access allowed from Ecuador (EC-IP0248). ');
}
}
if(lmatch($address,'4','')) {
if(lmatch($address,'45','')) {
$ax += cidrblock($address,'45.4.88.0/22','No access allowed from Ecuador (EC-IP0249). ');
$ax += cidrblock($address,'45.4.200.0/22','No access allowed from Ecuador (EC-IP0250). ');
$ax += cidrblock($address,'45.6.224.0/22','No access allowed from Ecuador (EC-IP0251). ');
$ax += cidrblock($address,'45.65.203.0/24','No access allowed from Ecuador (EC-IP0252). ');
$ax += cidrblock($address,'45.70.12.0/22','No access allowed from Ecuador (EC-IP0253). ');
$ax += cidrblock($address,'45.70.56.0/22','No access allowed from Ecuador (EC-IP0254). ');
$ax += cidrblock($address,'45.70.196.0/22','No access allowed from Ecuador (EC-IP0255). ');
$ax += cidrblock($address,'45.70.200.0/22','No access allowed from Ecuador (EC-IP0256). ');
$ax += cidrblock($address,'45.70.236.0/22','No access allowed from Ecuador (EC-IP0257). ');
$ax += cidrblock($address,'45.71.0.0/22','No access allowed from Ecuador (EC-IP0258). ');
$ax += cidrblock($address,'45.71.36.0/22','No access allowed from Ecuador (EC-IP0259). ');
$ax += cidrblock($address,'45.71.112.0/22','No access allowed from Ecuador (EC-IP0260). ');
$ax += cidrblock($address,'45.71.184.0/22','No access allowed from Ecuador (EC-IP0261). ');
$ax += cidrblock($address,'45.71.200.0/22','No access allowed from Ecuador (EC-IP0262). ');
$ax += cidrblock($address,'45.71.252.0/22','No access allowed from Ecuador (EC-IP0263). ');
$ax += cidrblock($address,'45.224.20.0/22','No access allowed from Ecuador (EC-IP0264). ');
$ax += cidrblock($address,'45.224.96.0/22','No access allowed from Ecuador (EC-IP0265). ');
$ax += cidrblock($address,'45.224.116.0/22','No access allowed from Ecuador (EC-IP0266). ');
$ax += cidrblock($address,'45.224.148.0/22','No access allowed from Ecuador (EC-IP0267). ');
$ax += cidrblock($address,'45.224.152.0/22','No access allowed from Ecuador (EC-IP0268). ');
$ax += cidrblock($address,'45.225.44.0/22','No access allowed from Ecuador (EC-IP0269). ');
$ax += cidrblock($address,'45.225.88.0/22','No access allowed from Ecuador (EC-IP0270). ');
$ax += cidrblock($address,'45.225.104.0/22','No access allowed from Ecuador (EC-IP0271). ');
$ax += cidrblock($address,'45.226.204.0/22','No access allowed from Ecuador (EC-IP0272). ');
$ax += cidrblock($address,'45.228.52.0/22','No access allowed from Ecuador (EC-IP0273). ');
$ax += cidrblock($address,'45.228.172.0/22','No access allowed from Ecuador (EC-IP0274). ');
$ax += cidrblock($address,'45.228.180.0/22','No access allowed from Ecuador (EC-IP0275). ');
$ax += cidrblock($address,'45.229.4.0/22','No access allowed from Ecuador (EC-IP0276). ');
$ax += cidrblock($address,'45.229.48.0/22','No access allowed from Ecuador (EC-IP0277). ');
$ax += cidrblock($address,'45.229.87.0/24','No access allowed from Ecuador (EC-IP0278). ');
$ax += cidrblock($address,'45.230.240.0/22','No access allowed from Ecuador (EC-IP0279). ');
$ax += cidrblock($address,'45.231.148.0/22','No access allowed from Ecuador (EC-IP0280). ');
}
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.56.85/32','No access allowed from Ecuador (EC-IP0281). ');
$ax += cidrblock($address,'5.62.56.86/31','No access allowed from Ecuador (EC-IP0282). ');
$ax += cidrblock($address,'5.62.58.81/32','No access allowed from Ecuador (EC-IP0283). ');
$ax += cidrblock($address,'5.62.58.82/31','No access allowed from Ecuador (EC-IP0284). ');
$ax += cidrblock($address,'57.75.32.0/20','No access allowed from Ecuador (EC-IP0285). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'63.84.236.0/22','No access allowed from Ecuador (EC-IP0286). ');
$ax += cidrblock($address,'63.109.66.0/23','No access allowed from Ecuador (EC-IP0287). ');
$ax += cidrblock($address,'63.109.68.0/24','No access allowed from Ecuador (EC-IP0288). ');
$ax += cidrblock($address,'63.109.73.0/24','No access allowed from Ecuador (EC-IP0289). ');
$ax += cidrblock($address,'63.109.76.0/23','No access allowed from Ecuador (EC-IP0290). ');
$ax += cidrblock($address,'63.164.56.0/23','No access allowed from Ecuador (EC-IP0291). ');
$ax += cidrblock($address,'63.174.227.0/24','No access allowed from Ecuador (EC-IP0292). ');
$ax += cidrblock($address,'64.76.60.0/22','No access allowed from Ecuador (EC-IP0293). ');
$ax += cidrblock($address,'64.76.192.0/21','No access allowed from Ecuador (EC-IP0294). ');
$ax += cidrblock($address,'64.76.216.0/21','No access allowed from Ecuador (EC-IP0295). ');
$ax += cidrblock($address,'64.76.224.0/22','No access allowed from Ecuador (EC-IP0296). ');
$ax += cidrblock($address,'64.86.64.0/22','No access allowed from Ecuador (EC-IP0297). ');
$ax += cidrblock($address,'65.194.46.0/24','No access allowed from Ecuador (EC-IP0298). ');
$ax += cidrblock($address,'65.199.168.0/21','No access allowed from Ecuador (EC-IP0299). ');
$ax += cidrblock($address,'65.247.204.0/23','No access allowed from Ecuador (EC-IP0300). ');
$ax += cidrblock($address,'65.247.242.0/23','No access allowed from Ecuador (EC-IP0301). ');
$ax += cidrblock($address,'66.198.44.0/22','No access allowed from Ecuador (EC-IP0302). ');
$ax += cidrblock($address,'66.198.136.0/23','No access allowed from Ecuador (EC-IP0303). ');
$ax += cidrblock($address,'66.198.138.0/24','No access allowed from Ecuador (EC-IP0304). ');
$ax += cidrblock($address,'69.42.117.144/29','No access allowed from Ecuador (EC-IP0305). ');
$ax += cidrblock($address,'69.42.117.184/29','No access allowed from Ecuador (EC-IP0306). ');
$ax += cidrblock($address,'69.65.148.0/24','No access allowed from Ecuador (EC-IP0307). ');
$ax += cidrblock($address,'69.65.151.0/24','No access allowed from Ecuador (EC-IP0308). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'82.195.165.193/32','No access allowed from Ecuador (EC-IP0309). ');
}
$ax += inmatch($query,'ectestec','Test function. (EC). ');
// End of EC list
