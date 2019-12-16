<?php
// *php 5 fix
global $ax;
// Egypt Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / EG-2018.65.634';
$ax += rmatch($hoster,'.eg','No access allowed from Egypt (EG-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'102.184.0.0/13','No access allowed from Egypt (EG-IP0001). ');
$ax += cidrblock($address,'105.32.0.0/12','No access allowed from Egypt (EG-IP0002). ');
$ax += cidrblock($address,'105.80.0.0/12','No access allowed from Egypt (EG-IP0003). ');
$ax += cidrblock($address,'105.180.0.0/14','No access allowed from Egypt (EG-IP0004). ');
$ax += cidrblock($address,'105.192.0.0/12','No access allowed from Egypt (EG-IP0005). ');
$ax += cidrblock($address,'107.153.84.0/24','No access allowed from Egypt (EG-IP0006). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'154.128.0.0/12','No access allowed from Egypt (EG-IP0007). ');
$ax += cidrblock($address,'154.176.0.0/12','No access allowed from Egypt (EG-IP0008). ');
$ax += cidrblock($address,'154.236.0.0/14','No access allowed from Egypt (EG-IP0009). ');
$ax += cidrblock($address,'155.11.0.0/16','No access allowed from Egypt (EG-IP0010). ');
$ax += cidrblock($address,'155.12.128.0/18','No access allowed from Egypt (EG-IP0011). ');
$ax += cidrblock($address,'156.160.0.0/11','No access allowed from Egypt (EG-IP0012). ');
$ax += cidrblock($address,'156.192.0.0/11','No access allowed from Egypt (EG-IP0013). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'162.158.128.0/22','No access allowed from Egypt (EG-IP0014). ');
$ax += cidrblock($address,'163.121.0.0/16','No access allowed from Egypt (EG-IP0015). ');
$ax += cidrblock($address,'164.160.64.0/22','No access allowed from Egypt (EG-IP0016). ');
$ax += cidrblock($address,'164.160.104.0/22','No access allowed from Egypt (EG-IP0017). ');
$ax += cidrblock($address,'169.239.36.0/22','No access allowed from Egypt (EG-IP0018). ');
$ax += cidrblock($address,'169.255.84.0/22','No access allowed from Egypt (EG-IP0019). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'175.41.14.0/24','No access allowed from Egypt (EG-IP0020). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'181.215.136.0/28','No access allowed from Egypt (EG-IP0021). ');
$ax += cidrblock($address,'185.133.16.0/22','No access allowed from Egypt (EG-IP0022). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'192.101.142.0/24','No access allowed from Egypt (EG-IP0023). ');
$ax += cidrblock($address,'192.198.120.0/24','No access allowed from Egypt (EG-IP0024). ');
$ax += cidrblock($address,'193.19.232.0/22','No access allowed from Egypt (EG-IP0025). ');
$ax += cidrblock($address,'193.227.0.0/18','No access allowed from Egypt (EG-IP0026). ');
$ax += cidrblock($address,'193.227.128.0/24','No access allowed from Egypt (EG-IP0027). ');
$ax += cidrblock($address,'194.79.96.0/19','No access allowed from Egypt (EG-IP0028). ');
$ax += cidrblock($address,'195.43.0.0/19','No access allowed from Egypt (EG-IP0029). ');
$ax += cidrblock($address,'195.234.168.0/24','No access allowed from Egypt (EG-IP0030). ');
$ax += cidrblock($address,'195.234.185.0/24','No access allowed from Egypt (EG-IP0031). ');
$ax += cidrblock($address,'195.234.252.0/22','No access allowed from Egypt (EG-IP0032). ');
$ax += cidrblock($address,'195.246.32.0/19','No access allowed from Egypt (EG-IP0033). ');
$ax += cidrblock($address,'196.1.143.0/24','No access allowed from Egypt (EG-IP0034). ');
$ax += cidrblock($address,'196.2.192.0/19','No access allowed from Egypt (EG-IP0035). ');
$ax += cidrblock($address,'196.3.14.0/23','No access allowed from Egypt (EG-IP0036). ');
$ax += cidrblock($address,'196.6.120.0/24','No access allowed from Egypt (EG-IP0037). ');
$ax += cidrblock($address,'196.6.185.0/24','No access allowed from Egypt (EG-IP0038). ');
$ax += cidrblock($address,'196.6.200.0/24','No access allowed from Egypt (EG-IP0039). ');
$ax += cidrblock($address,'196.6.236.0/24','No access allowed from Egypt (EG-IP0040). ');
$ax += cidrblock($address,'196.10.97.0/24','No access allowed from Egypt (EG-IP0041). ');
$ax += cidrblock($address,'196.10.120.0/24','No access allowed from Egypt (EG-IP0042). ');
$ax += cidrblock($address,'196.12.11.0/24','No access allowed from Egypt (EG-IP0043). ');
$ax += cidrblock($address,'196.13.206.0/24','No access allowed from Egypt (EG-IP0044). ');
$ax += cidrblock($address,'196.13.244.0/24','No access allowed from Egypt (EG-IP0045). ');
$ax += cidrblock($address,'196.13.253.0/24','No access allowed from Egypt (EG-IP0046). ');
$ax += cidrblock($address,'196.20.32.0/19','No access allowed from Egypt (EG-IP0047). ');
$ax += cidrblock($address,'196.22.5.0/24','No access allowed from Egypt (EG-IP0048). ');
$ax += cidrblock($address,'196.22.7.0/24','No access allowed from Egypt (EG-IP0049). ');
$ax += cidrblock($address,'196.22.130.0/24','No access allowed from Egypt (EG-IP0050). ');
$ax += cidrblock($address,'196.32.228.0/23','No access allowed from Egypt (EG-IP0051). ');
$ax += cidrblock($address,'196.41.73.0/24','No access allowed from Egypt (EG-IP0052). ');
$ax += cidrblock($address,'196.41.83.0/24','No access allowed from Egypt (EG-IP0053). ');
$ax += cidrblock($address,'196.43.198.0/24','No access allowed from Egypt (EG-IP0054). ');
$ax += cidrblock($address,'196.43.201.0/24','No access allowed from Egypt (EG-IP0055). ');
$ax += cidrblock($address,'196.43.219.0/24','No access allowed from Egypt (EG-IP0056). ');
$ax += cidrblock($address,'196.43.237.0/24','No access allowed from Egypt (EG-IP0057). ');
$ax += cidrblock($address,'196.46.17.0/24','No access allowed from Egypt (EG-IP0058). ');
$ax += cidrblock($address,'196.46.22.0/24','No access allowed from Egypt (EG-IP0059). ');
$ax += cidrblock($address,'196.46.24.0/24','No access allowed from Egypt (EG-IP0060). ');
$ax += cidrblock($address,'196.46.26.0/24','No access allowed from Egypt (EG-IP0061). ');
$ax += cidrblock($address,'196.46.29.0/24','No access allowed from Egypt (EG-IP0062). ');
$ax += cidrblock($address,'196.46.188.0/22','No access allowed from Egypt (EG-IP0063). ');
$ax += cidrblock($address,'196.50.22.0/23','No access allowed from Egypt (EG-IP0064). ');
$ax += cidrblock($address,'196.128.0.0/11','No access allowed from Egypt (EG-IP0065). ');
$ax += cidrblock($address,'196.201.3.0/24','No access allowed from Egypt (EG-IP0066). ');
$ax += cidrblock($address,'196.201.24.0/21','No access allowed from Egypt (EG-IP0067). ');
$ax += cidrblock($address,'196.201.240.0/21','No access allowed from Egypt (EG-IP0068). ');
$ax += cidrblock($address,'196.202.0.0/17','No access allowed from Egypt (EG-IP0069). ');
$ax += cidrblock($address,'196.204.0.0/21','No access allowed from Egypt (EG-IP0070). ');
$ax += cidrblock($address,'196.204.8.0/22','No access allowed from Egypt (EG-IP0071). ');
$ax += cidrblock($address,'196.204.12.0/23','No access allowed from Egypt (EG-IP0072). ');
$ax += cidrblock($address,'196.204.15.0/24','No access allowed from Egypt (EG-IP0073). ');
$ax += cidrblock($address,'196.204.16.0/20','No access allowed from Egypt (EG-IP0074). ');
$ax += cidrblock($address,'196.204.32.0/19','No access allowed from Egypt (EG-IP0075). ');
$ax += cidrblock($address,'196.204.64.0/18','No access allowed from Egypt (EG-IP0076). ');
$ax += cidrblock($address,'196.204.128.0/17','No access allowed from Egypt (EG-IP0077). ');
$ax += cidrblock($address,'196.205.0.0/16','No access allowed from Egypt (EG-IP0078). ');
$ax += cidrblock($address,'196.216.24.0/21','No access allowed from Egypt (EG-IP0079). ');
$ax += cidrblock($address,'196.216.140.0/22','No access allowed from Egypt (EG-IP0080). ');
$ax += cidrblock($address,'196.216.206.0/24','No access allowed from Egypt (EG-IP0081). ');
$ax += cidrblock($address,'196.216.240.0/23','No access allowed from Egypt (EG-IP0082). ');
$ax += cidrblock($address,'196.216.246.0/24','No access allowed from Egypt (EG-IP0083). ');
$ax += cidrblock($address,'196.216.252.0/24','No access allowed from Egypt (EG-IP0084). ');
$ax += cidrblock($address,'196.218.0.0/17','No access allowed from Egypt (EG-IP0085). ');
$ax += cidrblock($address,'196.218.128.0/18','No access allowed from Egypt (EG-IP0086). ');
$ax += cidrblock($address,'196.218.192.0/19','No access allowed from Egypt (EG-IP0087). ');
$ax += cidrblock($address,'196.218.224.0/20','No access allowed from Egypt (EG-IP0088). ');
$ax += cidrblock($address,'196.218.240.0/21','No access allowed from Egypt (EG-IP0089). ');
$ax += cidrblock($address,'196.219.0.0/17','No access allowed from Egypt (EG-IP0090). ');
$ax += cidrblock($address,'196.219.128.0/18','No access allowed from Egypt (EG-IP0091). ');
$ax += cidrblock($address,'196.219.192.0/19','No access allowed from Egypt (EG-IP0092). ');
$ax += cidrblock($address,'196.219.224.0/20','No access allowed from Egypt (EG-IP0093). ');
$ax += cidrblock($address,'196.219.240.0/23','No access allowed from Egypt (EG-IP0094). ');
$ax += cidrblock($address,'196.219.242.0/24','No access allowed from Egypt (EG-IP0095). ');
$ax += cidrblock($address,'196.219.243.0/25','No access allowed from Egypt (EG-IP0096). ');
$ax += cidrblock($address,'196.219.243.128/26','No access allowed from Egypt (EG-IP0097). ');
$ax += cidrblock($address,'196.219.243.192/27','No access allowed from Egypt (EG-IP0098). ');
$ax += cidrblock($address,'196.219.243.224/28','No access allowed from Egypt (EG-IP0099). ');
$ax += cidrblock($address,'196.219.243.240/29','No access allowed from Egypt (EG-IP0100). ');
$ax += cidrblock($address,'196.219.243.248/31','No access allowed from Egypt (EG-IP0101). ');
$ax += cidrblock($address,'196.219.243.251/32','No access allowed from Egypt (EG-IP0102). ');
$ax += cidrblock($address,'196.219.243.252/30','No access allowed from Egypt (EG-IP0103). ');
$ax += cidrblock($address,'196.219.244.0/22','No access allowed from Egypt (EG-IP0104). ');
$ax += cidrblock($address,'196.221.0.0/16','No access allowed from Egypt (EG-IP0105). ');
$ax += cidrblock($address,'196.223.7.0/24','No access allowed from Egypt (EG-IP0106). ');
$ax += cidrblock($address,'196.223.16.0/23','No access allowed from Egypt (EG-IP0107). ');
$ax += cidrblock($address,'197.32.0.0/11','No access allowed from Egypt (EG-IP0108). ');
$ax += cidrblock($address,'197.120.0.0/13','No access allowed from Egypt (EG-IP0109). ');
$ax += cidrblock($address,'197.132.0.0/14','No access allowed from Egypt (EG-IP0110). ');
$ax += cidrblock($address,'197.150.0.0/15','No access allowed from Egypt (EG-IP0111). ');
$ax += cidrblock($address,'197.160.0.0/17','No access allowed from Egypt (EG-IP0112). ');
$ax += cidrblock($address,'197.160.128.0/18','No access allowed from Egypt (EG-IP0113). ');
$ax += cidrblock($address,'197.160.192.0/19','No access allowed from Egypt (EG-IP0114). ');
$ax += cidrblock($address,'197.160.224.0/21','No access allowed from Egypt (EG-IP0115). ');
$ax += cidrblock($address,'197.160.240.0/20','No access allowed from Egypt (EG-IP0116). ');
$ax += cidrblock($address,'197.161.0.0/16','No access allowed from Egypt (EG-IP0117). ');
$ax += cidrblock($address,'197.162.0.0/15','No access allowed from Egypt (EG-IP0118). ');
$ax += cidrblock($address,'197.164.0.0/14','No access allowed from Egypt (EG-IP0119). ');
$ax += cidrblock($address,'197.192.0.0/13','No access allowed from Egypt (EG-IP0120). ');
$ax += cidrblock($address,'197.222.0.0/15','No access allowed from Egypt (EG-IP0121). ');
$ax += cidrblock($address,'197.246.0.0/16','No access allowed from Egypt (EG-IP0122). ');
$ax += cidrblock($address,'198.50.113.16/29','No access allowed from Egypt (EG-IP0123). ');
$ax += cidrblock($address,'198.50.168.64/30','No access allowed from Egypt (EG-IP0124). ');
$ax += cidrblock($address,'198.50.168.252/30','No access allowed from Egypt (EG-IP0125). ');
$ax += cidrblock($address,'198.50.197.44/30','No access allowed from Egypt (EG-IP0126). ');
$ax += cidrblock($address,'198.50.235.192/30','No access allowed from Egypt (EG-IP0127). ');
$ax += cidrblock($address,'198.72.96.184/29','No access allowed from Egypt (EG-IP0128). ');
$ax += cidrblock($address,'199.16.31.192/28','No access allowed from Egypt (EG-IP0129). ');
$ax += cidrblock($address,'199.95.178.0/23','No access allowed from Egypt (EG-IP0130). ');
$ax += cidrblock($address,'199.185.180.20/30','No access allowed from Egypt (EG-IP0131). ');
$ax += cidrblock($address,'199.191.57.176/30','No access allowed from Egypt (EG-IP0132). ');
$ax += cidrblock($address,'199.191.57.204/30','No access allowed from Egypt (EG-IP0133). ');
$ax += cidrblock($address,'199.241.184.4/30','No access allowed from Egypt (EG-IP0134). ');
$ax += cidrblock($address,'199.241.184.136/30','No access allowed from Egypt (EG-IP0135). ');
$ax += cidrblock($address,'199.241.185.120/30','No access allowed from Egypt (EG-IP0136). ');
$ax += cidrblock($address,'199.241.185.128/29','No access allowed from Egypt (EG-IP0137). ');
$ax += cidrblock($address,'199.241.187.224/30','No access allowed from Egypt (EG-IP0138). ');
$ax += cidrblock($address,'199.241.190.160/27','No access allowed from Egypt (EG-IP0139). ');
$ax += cidrblock($address,'199.255.137.80/29','No access allowed from Egypt (EG-IP0140). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'23.236.140.0/24','No access allowed from Egypt (EG-IP0141). ');
$ax += cidrblock($address,'205.234.211.48/29','No access allowed from Egypt (EG-IP0142). ');
$ax += cidrblock($address,'205.234.220.160/29','No access allowed from Egypt (EG-IP0143). ');
$ax += cidrblock($address,'205.251.93.0/24','No access allowed from Egypt (EG-IP0144). ');
$ax += cidrblock($address,'207.189.12.232/29','No access allowed from Egypt (EG-IP0145). ');
$ax += cidrblock($address,'207.189.12.240/29','No access allowed from Egypt (EG-IP0146). ');
$ax += cidrblock($address,'208.29.92.52/32','No access allowed from Egypt (EG-IP0147). ');
$ax += cidrblock($address,'209.88.146.0/23','No access allowed from Egypt (EG-IP0148). ');
$ax += cidrblock($address,'209.88.148.0/22','No access allowed from Egypt (EG-IP0149). ');
$ax += cidrblock($address,'209.88.152.0/23','No access allowed from Egypt (EG-IP0150). ');
$ax += cidrblock($address,'209.88.154.0/24','No access allowed from Egypt (EG-IP0151). ');
$ax += cidrblock($address,'212.12.224.0/19','No access allowed from Egypt (EG-IP0152). ');
$ax += cidrblock($address,'212.103.160.0/19','No access allowed from Egypt (EG-IP0153). ');
$ax += cidrblock($address,'212.122.224.0/19','No access allowed from Egypt (EG-IP0154). ');
$ax += cidrblock($address,'213.131.64.0/19','No access allowed from Egypt (EG-IP0155). ');
$ax += cidrblock($address,'213.152.64.0/19','No access allowed from Egypt (EG-IP0156). ');
$ax += cidrblock($address,'213.154.32.0/19','No access allowed from Egypt (EG-IP0157). ');
$ax += cidrblock($address,'213.158.160.0/19','No access allowed from Egypt (EG-IP0158). ');
$ax += cidrblock($address,'213.181.224.0/19','No access allowed from Egypt (EG-IP0159). ');
$ax += cidrblock($address,'213.212.192.0/18','No access allowed from Egypt (EG-IP0160). ');
$ax += cidrblock($address,'216.246.88.40/29','No access allowed from Egypt (EG-IP0161). ');
$ax += cidrblock($address,'217.20.224.0/20','No access allowed from Egypt (EG-IP0162). ');
$ax += cidrblock($address,'217.52.0.0/14','No access allowed from Egypt (EG-IP0163). ');
$ax += cidrblock($address,'217.139.0.0/16','No access allowed from Egypt (EG-IP0164). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.6.10.0/24','No access allowed from Egypt (EG-IP0165). ');
$ax += cidrblock($address,'31.14.248.0/24','No access allowed from Egypt (EG-IP0166). ');
$ax += cidrblock($address,'31.14.251.0/24','No access allowed from Egypt (EG-IP0167). ');
}
if(lmatch($address,'4','')) {
if(lmatch($address,'41','')) {
$ax += cidrblock($address,'41.32.0.0/12','No access allowed from Egypt (EG-IP0168). ');
$ax += cidrblock($address,'41.64.0.0/15','No access allowed from Egypt (EG-IP0169). ');
$ax += cidrblock($address,'41.67.64.0/18','No access allowed from Egypt (EG-IP0170). ');
$ax += cidrblock($address,'41.68.0.0/15','No access allowed from Egypt (EG-IP0171). ');
$ax += cidrblock($address,'41.72.64.0/20','No access allowed from Egypt (EG-IP0172). ');
$ax += cidrblock($address,'41.72.80.0/21','No access allowed from Egypt (EG-IP0173). ');
$ax += cidrblock($address,'41.72.88.0/22','No access allowed from Egypt (EG-IP0174). ');
$ax += cidrblock($address,'41.72.92.0/24','No access allowed from Egypt (EG-IP0175). ');
$ax += cidrblock($address,'41.72.95.0/24','No access allowed from Egypt (EG-IP0176). ');
$ax += cidrblock($address,'41.77.136.0/21','No access allowed from Egypt (EG-IP0177). ');
$ax += cidrblock($address,'41.78.20.0/22','No access allowed from Egypt (EG-IP0178). ');
$ax += cidrblock($address,'41.78.60.0/22','No access allowed from Egypt (EG-IP0179). ');
$ax += cidrblock($address,'41.78.148.0/22','No access allowed from Egypt (EG-IP0180). ');
$ax += cidrblock($address,'41.79.208.0/22','No access allowed from Egypt (EG-IP0181). ');
$ax += cidrblock($address,'41.88.0.0/16','No access allowed from Egypt (EG-IP0182). ');
$ax += cidrblock($address,'41.91.0.0/16','No access allowed from Egypt (EG-IP0183). ');
$ax += cidrblock($address,'41.128.0.0/14','No access allowed from Egypt (EG-IP0184). ');
$ax += cidrblock($address,'41.152.0.0/15','No access allowed from Egypt (EG-IP0185). ');
$ax += cidrblock($address,'41.155.128.0/17','No access allowed from Egypt (EG-IP0186). ');
$ax += cidrblock($address,'41.176.0.0/16','No access allowed from Egypt (EG-IP0187). ');
$ax += cidrblock($address,'41.178.0.0/15','No access allowed from Egypt (EG-IP0188). ');
$ax += cidrblock($address,'41.187.0.0/16','No access allowed from Egypt (EG-IP0189). ');
$ax += cidrblock($address,'41.190.248.0/22','No access allowed from Egypt (EG-IP0190). ');
$ax += cidrblock($address,'41.191.0.0/18','No access allowed from Egypt (EG-IP0191). ');
$ax += cidrblock($address,'41.191.80.0/22','No access allowed from Egypt (EG-IP0192). ');
$ax += cidrblock($address,'41.196.0.0/16','No access allowed from Egypt (EG-IP0193). ');
$ax += cidrblock($address,'41.199.0.0/16','No access allowed from Egypt (EG-IP0194). ');
$ax += cidrblock($address,'41.205.96.0/19','No access allowed from Egypt (EG-IP0195). ');
$ax += cidrblock($address,'41.206.128.0/19','No access allowed from Egypt (EG-IP0196). ');
$ax += cidrblock($address,'41.209.192.0/18','No access allowed from Egypt (EG-IP0197). ');
$ax += cidrblock($address,'41.215.240.0/22','No access allowed from Egypt (EG-IP0198). ');
$ax += cidrblock($address,'41.217.160.0/19','No access allowed from Egypt (EG-IP0199). ');
$ax += cidrblock($address,'41.217.224.0/21','No access allowed from Egypt (EG-IP0200). ');
$ax += cidrblock($address,'41.218.128.0/18','No access allowed from Egypt (EG-IP0201). ');
$ax += cidrblock($address,'41.221.128.0/20','No access allowed from Egypt (EG-IP0202). ');
$ax += cidrblock($address,'41.222.128.0/21','No access allowed from Egypt (EG-IP0203). ');
$ax += cidrblock($address,'41.222.168.0/21','No access allowed from Egypt (EG-IP0204). ');
$ax += cidrblock($address,'41.223.20.0/22','No access allowed from Egypt (EG-IP0205). ');
$ax += cidrblock($address,'41.223.52.0/24','No access allowed from Egypt (EG-IP0206). ');
$ax += cidrblock($address,'41.223.53.0/29','No access allowed from Egypt (EG-IP0207). ');
$ax += cidrblock($address,'41.223.53.8/31','No access allowed from Egypt (EG-IP0208). ');
$ax += cidrblock($address,'41.223.53.10/32','No access allowed from Egypt (EG-IP0209). ');
$ax += cidrblock($address,'41.223.53.12/30','No access allowed from Egypt (EG-IP0210). ');
$ax += cidrblock($address,'41.223.53.16/28','No access allowed from Egypt (EG-IP0211). ');
$ax += cidrblock($address,'41.223.53.32/27','No access allowed from Egypt (EG-IP0212). ');
$ax += cidrblock($address,'41.223.53.64/26','No access allowed from Egypt (EG-IP0213). ');
$ax += cidrblock($address,'41.223.53.128/25','No access allowed from Egypt (EG-IP0214). ');
$ax += cidrblock($address,'41.223.54.0/23','No access allowed from Egypt (EG-IP0215). ');
$ax += cidrblock($address,'41.223.196.0/22','No access allowed from Egypt (EG-IP0216). ');
$ax += cidrblock($address,'41.223.240.0/22','No access allowed from Egypt (EG-IP0217). ');
$ax += cidrblock($address,'41.232.0.0/22','No access allowed from Egypt (EG-IP0218). ');
$ax += cidrblock($address,'41.232.4.0/23','No access allowed from Egypt (EG-IP0219). ');
$ax += cidrblock($address,'41.232.6.0/24','No access allowed from Egypt (EG-IP0220). ');
$ax += cidrblock($address,'41.232.8.0/21','No access allowed from Egypt (EG-IP0221). ');
$ax += cidrblock($address,'41.232.16.0/20','No access allowed from Egypt (EG-IP0222). ');
$ax += cidrblock($address,'41.232.32.0/19','No access allowed from Egypt (EG-IP0223). ');
$ax += cidrblock($address,'41.232.64.0/18','No access allowed from Egypt (EG-IP0224). ');
$ax += cidrblock($address,'41.232.128.0/17','No access allowed from Egypt (EG-IP0225). ');
$ax += cidrblock($address,'41.233.0.0/16','No access allowed from Egypt (EG-IP0226). ');
$ax += cidrblock($address,'41.234.0.0/15','No access allowed from Egypt (EG-IP0227). ');
$ax += cidrblock($address,'41.236.0.0/14','No access allowed from Egypt (EG-IP0228). ');
}
if(lmatch($address,'45','')) {
$ax += cidrblock($address,'45.96.0.0/17','No access allowed from Egypt (EG-IP0229). ');
$ax += cidrblock($address,'45.96.128.0/18','No access allowed from Egypt (EG-IP0230). ');
$ax += cidrblock($address,'45.96.192.0/22','No access allowed from Egypt (EG-IP0231). ');
$ax += cidrblock($address,'45.96.197.0/24','No access allowed from Egypt (EG-IP0232). ');
$ax += cidrblock($address,'45.96.198.0/23','No access allowed from Egypt (EG-IP0233). ');
$ax += cidrblock($address,'45.96.200.0/21','No access allowed from Egypt (EG-IP0234). ');
$ax += cidrblock($address,'45.96.208.0/20','No access allowed from Egypt (EG-IP0235). ');
$ax += cidrblock($address,'45.96.224.0/19','No access allowed from Egypt (EG-IP0236). ');
$ax += cidrblock($address,'45.97.0.0/16','No access allowed from Egypt (EG-IP0237). ');
$ax += cidrblock($address,'45.98.0.0/15','No access allowed from Egypt (EG-IP0238). ');
$ax += cidrblock($address,'45.100.0.0/14','No access allowed from Egypt (EG-IP0239). ');
$ax += cidrblock($address,'45.104.0.0/13','No access allowed from Egypt (EG-IP0240). ');
$ax += cidrblock($address,'45.240.0.0/13','No access allowed from Egypt (EG-IP0241). ');
}
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.60.113/32','No access allowed from Egypt (EG-IP0242). ');
$ax += cidrblock($address,'5.62.60.114/31','No access allowed from Egypt (EG-IP0243). ');
$ax += cidrblock($address,'5.62.62.109/32','No access allowed from Egypt (EG-IP0244). ');
$ax += cidrblock($address,'5.62.62.110/31','No access allowed from Egypt (EG-IP0245). ');
$ax += cidrblock($address,'5.189.201.0/25','No access allowed from Egypt (EG-IP0246). ');
$ax += cidrblock($address,'5.254.105.152/29','No access allowed from Egypt (EG-IP0247). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'62.68.224.0/19','No access allowed from Egypt (EG-IP0248). ');
$ax += cidrblock($address,'62.114.0.0/16','No access allowed from Egypt (EG-IP0249). ');
$ax += cidrblock($address,'62.117.32.0/19','No access allowed from Egypt (EG-IP0250). ');
$ax += cidrblock($address,'62.135.0.0/17','No access allowed from Egypt (EG-IP0251). ');
$ax += cidrblock($address,'62.139.0.0/16','No access allowed from Egypt (EG-IP0252). ');
$ax += cidrblock($address,'62.140.64.0/18','No access allowed from Egypt (EG-IP0253). ');
$ax += cidrblock($address,'62.193.64.0/18','No access allowed from Egypt (EG-IP0254). ');
$ax += cidrblock($address,'62.240.96.0/19','No access allowed from Egypt (EG-IP0255). ');
$ax += cidrblock($address,'62.241.128.0/19','No access allowed from Egypt (EG-IP0256). ');
$ax += cidrblock($address,'64.86.35.0/24','No access allowed from Egypt (EG-IP0257). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'80.75.160.0/19','No access allowed from Egypt (EG-IP0258). ');
$ax += cidrblock($address,'81.10.0.0/17','No access allowed from Egypt (EG-IP0259). ');
$ax += cidrblock($address,'81.21.96.0/20','No access allowed from Egypt (EG-IP0260). ');
$ax += cidrblock($address,'81.29.96.0/20','No access allowed from Egypt (EG-IP0261). ');
$ax += cidrblock($address,'82.129.128.0/17','No access allowed from Egypt (EG-IP0262). ');
$ax += cidrblock($address,'82.195.187.22/32','No access allowed from Egypt (EG-IP0263). ');
$ax += cidrblock($address,'82.201.128.0/17','No access allowed from Egypt (EG-IP0264). ');
$ax += cidrblock($address,'84.36.0.0/16','No access allowed from Egypt (EG-IP0265). ');
$ax += cidrblock($address,'84.205.96.0/19','No access allowed from Egypt (EG-IP0266). ');
$ax += cidrblock($address,'84.233.0.0/17','No access allowed from Egypt (EG-IP0267). ');
}
if(lmatch($address,'9','')) {
$ax += cidrblock($address,'91.192.48.0/22','No access allowed from Egypt (EG-IP0268). ');
$ax += cidrblock($address,'95.212.0.0/17','No access allowed from Egypt (EG-IP0269). ');
$ax += cidrblock($address,'95.212.144.0/20','No access allowed from Egypt (EG-IP0270). ');
$ax += cidrblock($address,'95.212.160.0/20','No access allowed from Egypt (EG-IP0271). ');
$ax += cidrblock($address,'95.212.192.0/18','No access allowed from Egypt (EG-IP0272). ');
}
$ax += inmatch($query,'egtesteg','Test function. (EG). ');
// End of EG list
