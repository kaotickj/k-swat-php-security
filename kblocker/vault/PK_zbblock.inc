<?php
// *php 5 fix
global $ax;
// Pakistan Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / PK-2018.65.634';
$ax += rmatch($hoster,'.pk','No access allowed from Pakistan (PK-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'101.50.64.0/18','No access allowed from Pakistan (PK-IP0001). ');
$ax += cidrblock($address,'101.53.224.0/19','No access allowed from Pakistan (PK-IP0002). ');
$ax += cidrblock($address,'103.4.92.0/22','No access allowed from Pakistan (PK-IP0003). ');
$ax += cidrblock($address,'103.5.136.0/22','No access allowed from Pakistan (PK-IP0004). ');
$ax += cidrblock($address,'103.7.60.0/22','No access allowed from Pakistan (PK-IP0005). ');
$ax += cidrblock($address,'103.7.76.0/22','No access allowed from Pakistan (PK-IP0006). ');
$ax += cidrblock($address,'103.8.14.0/23','No access allowed from Pakistan (PK-IP0007). ');
$ax += cidrblock($address,'103.8.112.0/22','No access allowed from Pakistan (PK-IP0008). ');
$ax += cidrblock($address,'103.8.214.0/24','No access allowed from Pakistan (PK-IP0009). ');
$ax += cidrblock($address,'103.8.231.0/24','No access allowed from Pakistan (PK-IP0010). ');
$ax += cidrblock($address,'103.9.23.0/24','No access allowed from Pakistan (PK-IP0011). ');
$ax += cidrblock($address,'103.9.182.0/24','No access allowed from Pakistan (PK-IP0012). ');
$ax += cidrblock($address,'103.11.0.0/22','No access allowed from Pakistan (PK-IP0013). ');
$ax += cidrblock($address,'103.11.60.0/22','No access allowed from Pakistan (PK-IP0014). ');
$ax += cidrblock($address,'103.11.68.0/22','No access allowed from Pakistan (PK-IP0015). ');
$ax += cidrblock($address,'103.11.220.0/24','No access allowed from Pakistan (PK-IP0016). ');
$ax += cidrblock($address,'103.12.40.0/22','No access allowed from Pakistan (PK-IP0017). ');
$ax += cidrblock($address,'103.12.58.0/24','No access allowed from Pakistan (PK-IP0018). ');
$ax += cidrblock($address,'103.12.120.0/22','No access allowed from Pakistan (PK-IP0019). ');
$ax += cidrblock($address,'103.12.196.0/22','No access allowed from Pakistan (PK-IP0020). ');
$ax += cidrblock($address,'103.13.1.0/24','No access allowed from Pakistan (PK-IP0021). ');
$ax += cidrblock($address,'103.14.231.0/24','No access allowed from Pakistan (PK-IP0022). ');
$ax += cidrblock($address,'103.17.200.0/22','No access allowed from Pakistan (PK-IP0023). ');
$ax += cidrblock($address,'103.18.8.0/21','No access allowed from Pakistan (PK-IP0024). ');
$ax += cidrblock($address,'103.18.20.0/22','No access allowed from Pakistan (PK-IP0025). ');
$ax += cidrblock($address,'103.18.116.0/24','No access allowed from Pakistan (PK-IP0026). ');
$ax += cidrblock($address,'103.18.243.0/24','No access allowed from Pakistan (PK-IP0027). ');
$ax += cidrblock($address,'103.20.0.0/22','No access allowed from Pakistan (PK-IP0028). ');
$ax += cidrblock($address,'103.20.132.0/22','No access allowed from Pakistan (PK-IP0029). ');
$ax += cidrblock($address,'103.24.96.0/22','No access allowed from Pakistan (PK-IP0030). ');
$ax += cidrblock($address,'103.25.136.0/22','No access allowed from Pakistan (PK-IP0031). ');
$ax += cidrblock($address,'103.26.80.0/21','No access allowed from Pakistan (PK-IP0032). ');
$ax += cidrblock($address,'103.26.184.0/22','No access allowed from Pakistan (PK-IP0033). ');
$ax += cidrblock($address,'103.27.20.0/22','No access allowed from Pakistan (PK-IP0034). ');
$ax += cidrblock($address,'103.28.150.0/23','No access allowed from Pakistan (PK-IP0035). ');
$ax += cidrblock($address,'103.28.152.0/22','No access allowed from Pakistan (PK-IP0036). ');
$ax += cidrblock($address,'103.29.163.0/24','No access allowed from Pakistan (PK-IP0037). ');
$ax += cidrblock($address,'103.31.80.0/22','No access allowed from Pakistan (PK-IP0038). ');
$ax += cidrblock($address,'103.31.92.0/22','No access allowed from Pakistan (PK-IP0039). ');
$ax += cidrblock($address,'103.31.100.0/22','No access allowed from Pakistan (PK-IP0040). ');
$ax += cidrblock($address,'103.31.104.0/22','No access allowed from Pakistan (PK-IP0041). ');
$ax += cidrblock($address,'103.35.208.0/21','No access allowed from Pakistan (PK-IP0042). ');
$ax += cidrblock($address,'103.39.80.0/22','No access allowed from Pakistan (PK-IP0043). ');
$ax += cidrblock($address,'103.44.223.0/24','No access allowed from Pakistan (PK-IP0044). ');
$ax += cidrblock($address,'103.48.24.0/23','No access allowed from Pakistan (PK-IP0045). ');
$ax += cidrblock($address,'103.49.69.0/24','No access allowed from Pakistan (PK-IP0046). ');
$ax += cidrblock($address,'103.49.136.0/22','No access allowed from Pakistan (PK-IP0047). ');
$ax += cidrblock($address,'103.50.156.0/22','No access allowed from Pakistan (PK-IP0048). ');
$ax += cidrblock($address,'103.51.220.0/24','No access allowed from Pakistan (PK-IP0049). ');
$ax += cidrblock($address,'103.53.44.0/22','No access allowed from Pakistan (PK-IP0050). ');
$ax += cidrblock($address,'103.55.68.0/22','No access allowed from Pakistan (PK-IP0051). ');
$ax += cidrblock($address,'103.55.133.0/24','No access allowed from Pakistan (PK-IP0052). ');
$ax += cidrblock($address,'103.55.136.0/23','No access allowed from Pakistan (PK-IP0053). ');
$ax += cidrblock($address,'103.57.152.0/22','No access allowed from Pakistan (PK-IP0054). ');
$ax += cidrblock($address,'103.57.168.0/22','No access allowed from Pakistan (PK-IP0055). ');
$ax += cidrblock($address,'103.62.232.0/22','No access allowed from Pakistan (PK-IP0056). ');
$ax += cidrblock($address,'103.69.110.0/23','No access allowed from Pakistan (PK-IP0057). ');
$ax += cidrblock($address,'103.70.84.0/22','No access allowed from Pakistan (PK-IP0058). ');
$ax += cidrblock($address,'103.70.136.0/23','No access allowed from Pakistan (PK-IP0059). ');
$ax += cidrblock($address,'103.70.250.0/23','No access allowed from Pakistan (PK-IP0060). ');
$ax += cidrblock($address,'103.72.0.0/22','No access allowed from Pakistan (PK-IP0061). ');
$ax += cidrblock($address,'103.72.84.0/22','No access allowed from Pakistan (PK-IP0062). ');
$ax += cidrblock($address,'103.73.100.0/22','No access allowed from Pakistan (PK-IP0063). ');
$ax += cidrblock($address,'103.73.234.0/24','No access allowed from Pakistan (PK-IP0064). ');
$ax += cidrblock($address,'103.74.20.0/22','No access allowed from Pakistan (PK-IP0065). ');
$ax += cidrblock($address,'103.74.200.0/24','No access allowed from Pakistan (PK-IP0066). ');
$ax += cidrblock($address,'103.75.244.0/22','No access allowed from Pakistan (PK-IP0067). ');
$ax += cidrblock($address,'103.76.3.0/24','No access allowed from Pakistan (PK-IP0068). ');
$ax += cidrblock($address,'103.76.28.0/23','No access allowed from Pakistan (PK-IP0069). ');
$ax += cidrblock($address,'103.77.8.0/22','No access allowed from Pakistan (PK-IP0070). ');
$ax += cidrblock($address,'103.78.134.0/23','No access allowed from Pakistan (PK-IP0071). ');
$ax += cidrblock($address,'103.79.16.0/22','No access allowed from Pakistan (PK-IP0072). ');
$ax += cidrblock($address,'103.82.120.0/22','No access allowed from Pakistan (PK-IP0073). ');
$ax += cidrblock($address,'103.82.252.0/22','No access allowed from Pakistan (PK-IP0074). ');
$ax += cidrblock($address,'103.83.20.0/22','No access allowed from Pakistan (PK-IP0075). ');
$ax += cidrblock($address,'103.84.52.0/22','No access allowed from Pakistan (PK-IP0076). ');
$ax += cidrblock($address,'103.84.148.0/22','No access allowed from Pakistan (PK-IP0077). ');
$ax += cidrblock($address,'103.85.128.0/22','No access allowed from Pakistan (PK-IP0078). ');
$ax += cidrblock($address,'103.85.152.0/23','No access allowed from Pakistan (PK-IP0079). ');
$ax += cidrblock($address,'103.86.8.0/22','No access allowed from Pakistan (PK-IP0080). ');
$ax += cidrblock($address,'103.86.36.0/22','No access allowed from Pakistan (PK-IP0081). ');
$ax += cidrblock($address,'103.86.52.0/22','No access allowed from Pakistan (PK-IP0082). ');
$ax += cidrblock($address,'103.86.132.0/22','No access allowed from Pakistan (PK-IP0083). ');
$ax += cidrblock($address,'103.87.162.0/24','No access allowed from Pakistan (PK-IP0084). ');
$ax += cidrblock($address,'103.87.192.0/22','No access allowed from Pakistan (PK-IP0085). ');
$ax += cidrblock($address,'103.90.7.0/24','No access allowed from Pakistan (PK-IP0086). ');
$ax += cidrblock($address,'103.92.20.0/22','No access allowed from Pakistan (PK-IP0087). ');
$ax += cidrblock($address,'103.93.12.0/22','No access allowed from Pakistan (PK-IP0088). ');
$ax += cidrblock($address,'103.93.95.0/24','No access allowed from Pakistan (PK-IP0089). ');
$ax += cidrblock($address,'103.93.208.0/24','No access allowed from Pakistan (PK-IP0090). ');
$ax += cidrblock($address,'103.93.216.0/22','No access allowed from Pakistan (PK-IP0091). ');
$ax += cidrblock($address,'103.94.102.0/24','No access allowed from Pakistan (PK-IP0092). ');
$ax += cidrblock($address,'103.94.186.0/24','No access allowed from Pakistan (PK-IP0093). ');
$ax += cidrblock($address,'103.94.244.0/23','No access allowed from Pakistan (PK-IP0094). ');
$ax += cidrblock($address,'103.95.4.0/23','No access allowed from Pakistan (PK-IP0095). ');
$ax += cidrblock($address,'103.97.154.0/24','No access allowed from Pakistan (PK-IP0096). ');
$ax += cidrblock($address,'103.97.168.0/23','No access allowed from Pakistan (PK-IP0097). ');
$ax += cidrblock($address,'103.100.103.0/24','No access allowed from Pakistan (PK-IP0098). ');
$ax += cidrblock($address,'103.100.188.0/24','No access allowed from Pakistan (PK-IP0099). ');
$ax += cidrblock($address,'103.100.202.0/23','No access allowed from Pakistan (PK-IP0100). ');
$ax += cidrblock($address,'103.101.232.0/24','No access allowed from Pakistan (PK-IP0101). ');
$ax += cidrblock($address,'103.102.38.0/24','No access allowed from Pakistan (PK-IP0102). ');
$ax += cidrblock($address,'103.102.40.0/23','No access allowed from Pakistan (PK-IP0103). ');
$ax += cidrblock($address,'103.102.156.0/22','No access allowed from Pakistan (PK-IP0104). ');
$ax += cidrblock($address,'103.103.42.0/23','No access allowed from Pakistan (PK-IP0105). ');
$ax += cidrblock($address,'103.103.112.0/24','No access allowed from Pakistan (PK-IP0106). ');
$ax += cidrblock($address,'103.104.84.0/23','No access allowed from Pakistan (PK-IP0107). ');
$ax += cidrblock($address,'103.104.87.0/24','No access allowed from Pakistan (PK-IP0108). ');
$ax += cidrblock($address,'103.104.96.0/23','No access allowed from Pakistan (PK-IP0109). ');
$ax += cidrblock($address,'103.104.160.0/22','No access allowed from Pakistan (PK-IP0110). ');
$ax += cidrblock($address,'103.104.212.0/22','No access allowed from Pakistan (PK-IP0111). ');
$ax += cidrblock($address,'103.105.164.0/24','No access allowed from Pakistan (PK-IP0112). ');
$ax += cidrblock($address,'103.105.166.0/23','No access allowed from Pakistan (PK-IP0113). ');
$ax += cidrblock($address,'103.105.208.0/22','No access allowed from Pakistan (PK-IP0114). ');
$ax += cidrblock($address,'103.106.86.0/24','No access allowed from Pakistan (PK-IP0115). ');
$ax += cidrblock($address,'103.108.178.0/23','No access allowed from Pakistan (PK-IP0116). ');
$ax += cidrblock($address,'103.109.121.0/24','No access allowed from Pakistan (PK-IP0117). ');
$ax += cidrblock($address,'103.110.52.0/24','No access allowed from Pakistan (PK-IP0118). ');
$ax += cidrblock($address,'103.193.18.0/24','No access allowed from Pakistan (PK-IP0119). ');
$ax += cidrblock($address,'103.194.92.0/22','No access allowed from Pakistan (PK-IP0120). ');
$ax += cidrblock($address,'103.196.40.0/23','No access allowed from Pakistan (PK-IP0121). ');
$ax += cidrblock($address,'103.196.160.0/22','No access allowed from Pakistan (PK-IP0122). ');
$ax += cidrblock($address,'103.197.44.0/22','No access allowed from Pakistan (PK-IP0123). ');
$ax += cidrblock($address,'103.200.196.0/22','No access allowed from Pakistan (PK-IP0124). ');
$ax += cidrblock($address,'103.203.44.0/22','No access allowed from Pakistan (PK-IP0125). ');
$ax += cidrblock($address,'103.205.176.0/22','No access allowed from Pakistan (PK-IP0126). ');
$ax += cidrblock($address,'103.207.84.0/22','No access allowed from Pakistan (PK-IP0127). ');
$ax += cidrblock($address,'103.209.52.0/23','No access allowed from Pakistan (PK-IP0128). ');
$ax += cidrblock($address,'103.209.78.0/24','No access allowed from Pakistan (PK-IP0129). ');
$ax += cidrblock($address,'103.209.84.0/22','No access allowed from Pakistan (PK-IP0130). ');
$ax += cidrblock($address,'103.210.4.0/22','No access allowed from Pakistan (PK-IP0131). ');
$ax += cidrblock($address,'103.210.15.255/32','No access allowed from Pakistan (PK-IP0132). ');
$ax += cidrblock($address,'103.213.108.0/22','No access allowed from Pakistan (PK-IP0133). ');
$ax += cidrblock($address,'103.213.112.0/22','No access allowed from Pakistan (PK-IP0134). ');
$ax += cidrblock($address,'103.215.75.0/24','No access allowed from Pakistan (PK-IP0135). ');
$ax += cidrblock($address,'103.216.104.0/22','No access allowed from Pakistan (PK-IP0136). ');
$ax += cidrblock($address,'103.216.135.0/24','No access allowed from Pakistan (PK-IP0137). ');
$ax += cidrblock($address,'103.217.176.0/22','No access allowed from Pakistan (PK-IP0138). ');
$ax += cidrblock($address,'103.221.246.0/23','No access allowed from Pakistan (PK-IP0139). ');
$ax += cidrblock($address,'103.224.12.0/22','No access allowed from Pakistan (PK-IP0140). ');
$ax += cidrblock($address,'103.225.48.0/22','No access allowed from Pakistan (PK-IP0141). ');
$ax += cidrblock($address,'103.225.220.0/22','No access allowed from Pakistan (PK-IP0142). ');
$ax += cidrblock($address,'103.226.216.0/23','No access allowed from Pakistan (PK-IP0143). ');
$ax += cidrblock($address,'103.228.156.0/22','No access allowed from Pakistan (PK-IP0144). ');
$ax += cidrblock($address,'103.232.225.0/24','No access allowed from Pakistan (PK-IP0145). ');
$ax += cidrblock($address,'103.234.12.0/24','No access allowed from Pakistan (PK-IP0146). ');
$ax += cidrblock($address,'103.234.144.0/22','No access allowed from Pakistan (PK-IP0147). ');
$ax += cidrblock($address,'103.235.76.0/22','No access allowed from Pakistan (PK-IP0148). ');
$ax += cidrblock($address,'103.236.132.0/22','No access allowed from Pakistan (PK-IP0149). ');
$ax += cidrblock($address,'103.240.220.0/24','No access allowed from Pakistan (PK-IP0150). ');
$ax += cidrblock($address,'103.244.132.0/22','No access allowed from Pakistan (PK-IP0151). ');
$ax += cidrblock($address,'103.244.172.0/22','No access allowed from Pakistan (PK-IP0152). ');
$ax += cidrblock($address,'103.244.176.0/22','No access allowed from Pakistan (PK-IP0153). ');
$ax += cidrblock($address,'103.245.132.0/22','No access allowed from Pakistan (PK-IP0154). ');
$ax += cidrblock($address,'103.245.192.0/22','No access allowed from Pakistan (PK-IP0155). ');
$ax += cidrblock($address,'103.246.108.0/22','No access allowed from Pakistan (PK-IP0156). ');
$ax += cidrblock($address,'103.247.66.0/24','No access allowed from Pakistan (PK-IP0157). ');
$ax += cidrblock($address,'103.247.124.0/23','No access allowed from Pakistan (PK-IP0158). ');
$ax += cidrblock($address,'103.249.152.0/22','No access allowed from Pakistan (PK-IP0159). ');
$ax += cidrblock($address,'103.249.228.0/22','No access allowed from Pakistan (PK-IP0160). ');
$ax += cidrblock($address,'103.250.222.0/23','No access allowed from Pakistan (PK-IP0161). ');
$ax += cidrblock($address,'103.252.80.0/22','No access allowed from Pakistan (PK-IP0162). ');
$ax += cidrblock($address,'103.253.156.0/22','No access allowed from Pakistan (PK-IP0163). ');
$ax += cidrblock($address,'103.255.4.0/22','No access allowed from Pakistan (PK-IP0164). ');
$ax += cidrblock($address,'103.255.128.0/22','No access allowed from Pakistan (PK-IP0165). ');
$ax += cidrblock($address,'103.255.148.0/22','No access allowed from Pakistan (PK-IP0166). ');
$ax += cidrblock($address,'104.128.131.0/24','No access allowed from Pakistan (PK-IP0167). ');
$ax += cidrblock($address,'104.167.211.0/24','No access allowed from Pakistan (PK-IP0168). ');
$ax += cidrblock($address,'104.222.208.0/24','No access allowed from Pakistan (PK-IP0169). ');
$ax += cidrblock($address,'104.249.150.0/24','No access allowed from Pakistan (PK-IP0170). ');
$ax += cidrblock($address,'104.250.187.0/24','No access allowed from Pakistan (PK-IP0171). ');
}
if(lmatch($address,'11','')) {
$ax += cidrblock($address,'110.34.32.0/21','No access allowed from Pakistan (PK-IP0172). ');
$ax += cidrblock($address,'110.36.0.0/14','No access allowed from Pakistan (PK-IP0173). ');
$ax += cidrblock($address,'110.93.192.0/18','No access allowed from Pakistan (PK-IP0174). ');
$ax += cidrblock($address,'110.232.188.0/22','No access allowed from Pakistan (PK-IP0175). ');
$ax += cidrblock($address,'111.68.96.0/20','No access allowed from Pakistan (PK-IP0176). ');
$ax += cidrblock($address,'111.88.0.0/16','No access allowed from Pakistan (PK-IP0177). ');
$ax += cidrblock($address,'111.92.128.0/19','No access allowed from Pakistan (PK-IP0178). ');
$ax += cidrblock($address,'111.119.160.0/19','No access allowed from Pakistan (PK-IP0179). ');
$ax += cidrblock($address,'113.197.48.0/21','No access allowed from Pakistan (PK-IP0180). ');
$ax += cidrblock($address,'113.203.128.0/17','No access allowed from Pakistan (PK-IP0181). ');
$ax += cidrblock($address,'114.198.232.0/21','No access allowed from Pakistan (PK-IP0182). ');
$ax += cidrblock($address,'115.42.64.0/20','No access allowed from Pakistan (PK-IP0183). ');
$ax += cidrblock($address,'115.167.0.0/17','No access allowed from Pakistan (PK-IP0184). ');
$ax += cidrblock($address,'115.186.0.0/17','No access allowed from Pakistan (PK-IP0185). ');
$ax += cidrblock($address,'115.186.128.0/18','No access allowed from Pakistan (PK-IP0186). ');
$ax += cidrblock($address,'116.0.32.0/19','No access allowed from Pakistan (PK-IP0187). ');
$ax += cidrblock($address,'116.58.0.0/17','No access allowed from Pakistan (PK-IP0188). ');
$ax += cidrblock($address,'116.71.0.0/16','No access allowed from Pakistan (PK-IP0189). ');
$ax += cidrblock($address,'116.90.96.0/19','No access allowed from Pakistan (PK-IP0190). ');
$ax += cidrblock($address,'116.206.64.0/22','No access allowed from Pakistan (PK-IP0191). ');
$ax += cidrblock($address,'116.206.84.0/22','No access allowed from Pakistan (PK-IP0192). ');
$ax += cidrblock($address,'116.206.140.0/22','No access allowed from Pakistan (PK-IP0193). ');
$ax += cidrblock($address,'116.206.164.0/22','No access allowed from Pakistan (PK-IP0194). ');
$ax += cidrblock($address,'116.213.32.0/22','No access allowed from Pakistan (PK-IP0195). ');
$ax += cidrblock($address,'117.18.244.0/22','No access allowed from Pakistan (PK-IP0196). ');
$ax += cidrblock($address,'117.18.248.0/22','No access allowed from Pakistan (PK-IP0197). ');
$ax += cidrblock($address,'117.20.16.0/20','No access allowed from Pakistan (PK-IP0198). ');
$ax += cidrblock($address,'117.53.40.0/22','No access allowed from Pakistan (PK-IP0199). ');
$ax += cidrblock($address,'117.102.0.0/18','No access allowed from Pakistan (PK-IP0200). ');
$ax += cidrblock($address,'118.103.224.0/20','No access allowed from Pakistan (PK-IP0201). ');
$ax += cidrblock($address,'118.107.128.0/20','No access allowed from Pakistan (PK-IP0202). ');
$ax += cidrblock($address,'119.30.64.0/18','No access allowed from Pakistan (PK-IP0203). ');
$ax += cidrblock($address,'119.63.128.0/20','No access allowed from Pakistan (PK-IP0204). ');
$ax += cidrblock($address,'119.73.0.0/17','No access allowed from Pakistan (PK-IP0205). ');
$ax += cidrblock($address,'119.152.0.0/13','No access allowed from Pakistan (PK-IP0206). ');
$ax += cidrblock($address,'119.160.0.0/17','No access allowed from Pakistan (PK-IP0207). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'121.46.64.0/22','No access allowed from Pakistan (PK-IP0208). ');
$ax += cidrblock($address,'121.52.144.0/20','No access allowed from Pakistan (PK-IP0209). ');
$ax += cidrblock($address,'122.8.1.0/24','No access allowed from Pakistan (PK-IP0210). ');
$ax += cidrblock($address,'122.8.6.0/23','No access allowed from Pakistan (PK-IP0211). ');
$ax += cidrblock($address,'122.8.10.0/23','No access allowed from Pakistan (PK-IP0212). ');
$ax += cidrblock($address,'122.8.12.0/22','No access allowed from Pakistan (PK-IP0213). ');
$ax += cidrblock($address,'122.8.16.0/20','No access allowed from Pakistan (PK-IP0214). ');
$ax += cidrblock($address,'122.8.32.0/19','No access allowed from Pakistan (PK-IP0215). ');
$ax += cidrblock($address,'122.8.64.0/20','No access allowed from Pakistan (PK-IP0216). ');
$ax += cidrblock($address,'122.8.80.0/22','No access allowed from Pakistan (PK-IP0217). ');
$ax += cidrblock($address,'122.8.86.0/23','No access allowed from Pakistan (PK-IP0218). ');
$ax += cidrblock($address,'122.8.88.0/24','No access allowed from Pakistan (PK-IP0219). ');
$ax += cidrblock($address,'122.8.91.0/24','No access allowed from Pakistan (PK-IP0220). ');
$ax += cidrblock($address,'122.8.92.0/22','No access allowed from Pakistan (PK-IP0221). ');
$ax += cidrblock($address,'122.8.96.0/19','No access allowed from Pakistan (PK-IP0222). ');
$ax += cidrblock($address,'122.8.128.0/17','No access allowed from Pakistan (PK-IP0223). ');
$ax += cidrblock($address,'122.50.0.0/22','No access allowed from Pakistan (PK-IP0224). ');
$ax += cidrblock($address,'122.129.64.0/19','No access allowed from Pakistan (PK-IP0225). ');
$ax += cidrblock($address,'123.108.92.0/22','No access allowed from Pakistan (PK-IP0226). ');
$ax += cidrblock($address,'124.29.192.0/18','No access allowed from Pakistan (PK-IP0227). ');
$ax += cidrblock($address,'124.109.32.0/19','No access allowed from Pakistan (PK-IP0228). ');
$ax += cidrblock($address,'125.62.88.0/22','No access allowed from Pakistan (PK-IP0229). ');
$ax += cidrblock($address,'125.209.64.0/18','No access allowed from Pakistan (PK-IP0230). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'137.59.144.0/22','No access allowed from Pakistan (PK-IP0231). ');
$ax += cidrblock($address,'137.59.192.0/22','No access allowed from Pakistan (PK-IP0232). ');
$ax += cidrblock($address,'137.59.216.0/21','No access allowed from Pakistan (PK-IP0233). ');
$ax += cidrblock($address,'137.59.224.0/21','No access allowed from Pakistan (PK-IP0234). ');
$ax += cidrblock($address,'139.190.0.0/16','No access allowed from Pakistan (PK-IP0235). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'14.1.104.0/22','No access allowed from Pakistan (PK-IP0236). ');
$ax += cidrblock($address,'14.192.128.0/19','No access allowed from Pakistan (PK-IP0237). ');
$ax += cidrblock($address,'141.101.135.0/24','No access allowed from Pakistan (PK-IP0238). ');
$ax += cidrblock($address,'144.48.120.0/22','No access allowed from Pakistan (PK-IP0239). ');
$ax += cidrblock($address,'144.48.132.0/22','No access allowed from Pakistan (PK-IP0240). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'150.129.4.0/22','No access allowed from Pakistan (PK-IP0241). ');
$ax += cidrblock($address,'159.180.29.0/24','No access allowed from Pakistan (PK-IP0242). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'160.19.20.0/22','No access allowed from Pakistan (PK-IP0243). ');
$ax += cidrblock($address,'162.12.208.0/22','No access allowed from Pakistan (PK-IP0244). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'175.107.0.0/18','No access allowed from Pakistan (PK-IP0245). ');
$ax += cidrblock($address,'175.107.192.0/18','No access allowed from Pakistan (PK-IP0246). ');
$ax += cidrblock($address,'175.110.0.0/16','No access allowed from Pakistan (PK-IP0247). ');
$ax += cidrblock($address,'175.111.0.0/20','No access allowed from Pakistan (PK-IP0248). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'180.92.128.0/19','No access allowed from Pakistan (PK-IP0249). ');
$ax += cidrblock($address,'180.149.208.0/20','No access allowed from Pakistan (PK-IP0250). ');
$ax += cidrblock($address,'180.178.128.0/18','No access allowed from Pakistan (PK-IP0251). ');
$ax += cidrblock($address,'181.215.140.16/28','No access allowed from Pakistan (PK-IP0252). ');
$ax += cidrblock($address,'182.176.0.0/12','No access allowed from Pakistan (PK-IP0253). ');
$ax += cidrblock($address,'182.255.48.0/22','No access allowed from Pakistan (PK-IP0254). ');
$ax += cidrblock($address,'185.56.163.16/28','No access allowed from Pakistan (PK-IP0255). ');
$ax += cidrblock($address,'185.165.61.128/26','No access allowed from Pakistan (PK-IP0256). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'192.135.90.0/23','No access allowed from Pakistan (PK-IP0257). ');
$ax += cidrblock($address,'192.140.144.0/21','No access allowed from Pakistan (PK-IP0258). ');
$ax += cidrblock($address,'192.144.78.0/23','No access allowed from Pakistan (PK-IP0259). ');
$ax += cidrblock($address,'196.3.72.0/24','No access allowed from Pakistan (PK-IP0260). ');
$ax += cidrblock($address,'196.194.0.0/17','No access allowed from Pakistan (PK-IP0261). ');
$ax += cidrblock($address,'196.194.128.0/18','No access allowed from Pakistan (PK-IP0262). ');
$ax += cidrblock($address,'196.195.16.0/20','No access allowed from Pakistan (PK-IP0263). ');
$ax += cidrblock($address,'196.195.32.0/19','No access allowed from Pakistan (PK-IP0264). ');
$ax += cidrblock($address,'196.195.192.0/19','No access allowed from Pakistan (PK-IP0265). ');
$ax += cidrblock($address,'198.12.93.192/29','No access allowed from Pakistan (PK-IP0266). ');
$ax += cidrblock($address,'198.24.160.248/29','No access allowed from Pakistan (PK-IP0267). ');
$ax += cidrblock($address,'198.24.171.120/29','No access allowed from Pakistan (PK-IP0268). ');
$ax += cidrblock($address,'198.24.175.128/29','No access allowed from Pakistan (PK-IP0269). ');
$ax += cidrblock($address,'198.27.115.192/28','No access allowed from Pakistan (PK-IP0270). ');
$ax += cidrblock($address,'198.27.124.112/28','No access allowed from Pakistan (PK-IP0271). ');
$ax += cidrblock($address,'198.44.129.208/29','No access allowed from Pakistan (PK-IP0272). ');
$ax += cidrblock($address,'198.44.130.208/29','No access allowed from Pakistan (PK-IP0273). ');
$ax += cidrblock($address,'198.44.133.136/29','No access allowed from Pakistan (PK-IP0274). ');
$ax += cidrblock($address,'198.44.135.96/28','No access allowed from Pakistan (PK-IP0275). ');
$ax += cidrblock($address,'198.44.148.232/29','No access allowed from Pakistan (PK-IP0276). ');
$ax += cidrblock($address,'198.46.135.16/29','No access allowed from Pakistan (PK-IP0277). ');
$ax += cidrblock($address,'198.50.100.168/29','No access allowed from Pakistan (PK-IP0278). ');
$ax += cidrblock($address,'198.50.102.120/29','No access allowed from Pakistan (PK-IP0279). ');
$ax += cidrblock($address,'198.50.110.200/29','No access allowed from Pakistan (PK-IP0280). ');
$ax += cidrblock($address,'198.50.111.240/29','No access allowed from Pakistan (PK-IP0281). ');
$ax += cidrblock($address,'198.50.119.128/29','No access allowed from Pakistan (PK-IP0282). ');
$ax += cidrblock($address,'198.50.122.240/29','No access allowed from Pakistan (PK-IP0283). ');
$ax += cidrblock($address,'198.50.173.184/30','No access allowed from Pakistan (PK-IP0284). ');
$ax += cidrblock($address,'198.50.210.208/28','No access allowed from Pakistan (PK-IP0285). ');
$ax += cidrblock($address,'198.50.233.72/30','No access allowed from Pakistan (PK-IP0286). ');
$ax += cidrblock($address,'198.50.241.128/30','No access allowed from Pakistan (PK-IP0287). ');
$ax += cidrblock($address,'198.50.252.88/30','No access allowed from Pakistan (PK-IP0288). ');
$ax += cidrblock($address,'198.72.98.16/29','No access allowed from Pakistan (PK-IP0289). ');
$ax += cidrblock($address,'198.98.123.32/27','No access allowed from Pakistan (PK-IP0290). ');
$ax += cidrblock($address,'198.136.51.0/29','No access allowed from Pakistan (PK-IP0291). ');
$ax += cidrblock($address,'198.136.51.120/29','No access allowed from Pakistan (PK-IP0292). ');
$ax += cidrblock($address,'198.147.29.96/27','No access allowed from Pakistan (PK-IP0293). ');
$ax += cidrblock($address,'199.101.184.72/29','No access allowed from Pakistan (PK-IP0294). ');
$ax += cidrblock($address,'199.168.184.64/28','No access allowed from Pakistan (PK-IP0295). ');
$ax += cidrblock($address,'199.168.188.192/29','No access allowed from Pakistan (PK-IP0296). ');
$ax += cidrblock($address,'199.168.191.58/31','No access allowed from Pakistan (PK-IP0297). ');
$ax += cidrblock($address,'199.168.191.60/30','No access allowed from Pakistan (PK-IP0298). ');
$ax += cidrblock($address,'199.168.191.64/29','No access allowed from Pakistan (PK-IP0299). ');
$ax += cidrblock($address,'199.193.155.0/24','No access allowed from Pakistan (PK-IP0300). ');
$ax += cidrblock($address,'199.241.31.204/32','No access allowed from Pakistan (PK-IP0301). ');
$ax += cidrblock($address,'199.241.184.0/30','No access allowed from Pakistan (PK-IP0302). ');
$ax += cidrblock($address,'199.241.184.36/30','No access allowed from Pakistan (PK-IP0303). ');
$ax += cidrblock($address,'199.241.184.56/30','No access allowed from Pakistan (PK-IP0304). ');
$ax += cidrblock($address,'199.241.187.216/29','No access allowed from Pakistan (PK-IP0305). ');
$ax += cidrblock($address,'199.241.189.140/30','No access allowed from Pakistan (PK-IP0306). ');
$ax += cidrblock($address,'199.241.189.192/29','No access allowed from Pakistan (PK-IP0307). ');
$ax += cidrblock($address,'199.241.190.152/29','No access allowed from Pakistan (PK-IP0308). ');
}
}
if(lmatch($address,'2','')) {
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'202.0.110.0/24','No access allowed from Pakistan (PK-IP0309). ');
$ax += cidrblock($address,'202.3.130.0/23','No access allowed from Pakistan (PK-IP0310). ');
$ax += cidrblock($address,'202.4.167.0/24','No access allowed from Pakistan (PK-IP0311). ');
$ax += cidrblock($address,'202.5.128.0/19','No access allowed from Pakistan (PK-IP0312). ');
$ax += cidrblock($address,'202.14.70.0/23','No access allowed from Pakistan (PK-IP0313). ');
$ax += cidrblock($address,'202.43.118.0/23','No access allowed from Pakistan (PK-IP0314). ');
$ax += cidrblock($address,'202.44.80.0/20','No access allowed from Pakistan (PK-IP0315). ');
$ax += cidrblock($address,'202.45.156.0/23','No access allowed from Pakistan (PK-IP0316). ');
$ax += cidrblock($address,'202.47.32.0/19','No access allowed from Pakistan (PK-IP0317). ');
$ax += cidrblock($address,'202.47.94.0/24','No access allowed from Pakistan (PK-IP0318). ');
$ax += cidrblock($address,'202.52.32.0/24','No access allowed from Pakistan (PK-IP0319). ');
$ax += cidrblock($address,'202.55.128.0/22','No access allowed from Pakistan (PK-IP0320). ');
$ax += cidrblock($address,'202.59.12.0/22','No access allowed from Pakistan (PK-IP0321). ');
$ax += cidrblock($address,'202.59.64.0/19','No access allowed from Pakistan (PK-IP0322). ');
$ax += cidrblock($address,'202.59.254.0/24','No access allowed from Pakistan (PK-IP0323). ');
$ax += cidrblock($address,'202.61.32.0/19','No access allowed from Pakistan (PK-IP0324). ');
$ax += cidrblock($address,'202.63.192.0/19','No access allowed from Pakistan (PK-IP0325). ');
$ax += cidrblock($address,'202.63.226.0/23','No access allowed from Pakistan (PK-IP0326). ');
$ax += cidrblock($address,'202.69.8.0/21','No access allowed from Pakistan (PK-IP0327). ');
$ax += cidrblock($address,'202.69.32.0/19','No access allowed from Pakistan (PK-IP0328). ');
$ax += cidrblock($address,'202.70.144.0/20','No access allowed from Pakistan (PK-IP0329). ');
$ax += cidrblock($address,'202.83.160.0/20','No access allowed from Pakistan (PK-IP0330). ');
$ax += cidrblock($address,'202.92.16.0/20','No access allowed from Pakistan (PK-IP0331). ');
$ax += cidrblock($address,'202.123.240.0/20','No access allowed from Pakistan (PK-IP0332). ');
$ax += cidrblock($address,'202.125.128.0/19','No access allowed from Pakistan (PK-IP0333). ');
$ax += cidrblock($address,'202.141.224.0/19','No access allowed from Pakistan (PK-IP0334). ');
$ax += cidrblock($address,'202.142.144.0/20','No access allowed from Pakistan (PK-IP0335). ');
$ax += cidrblock($address,'202.142.160.0/19','No access allowed from Pakistan (PK-IP0336). ');
$ax += cidrblock($address,'202.143.112.0/20','No access allowed from Pakistan (PK-IP0337). ');
$ax += cidrblock($address,'202.147.160.0/19','No access allowed from Pakistan (PK-IP0338). ');
$ax += cidrblock($address,'202.154.224.0/19','No access allowed from Pakistan (PK-IP0339). ');
$ax += cidrblock($address,'202.163.64.0/18','No access allowed from Pakistan (PK-IP0340). ');
$ax += cidrblock($address,'202.165.224.0/21','No access allowed from Pakistan (PK-IP0341). ');
$ax += cidrblock($address,'202.165.232.0/22','No access allowed from Pakistan (PK-IP0342). ');
$ax += cidrblock($address,'202.165.236.0/23','No access allowed from Pakistan (PK-IP0343). ');
$ax += cidrblock($address,'202.165.238.0/24','No access allowed from Pakistan (PK-IP0344). ');
$ax += cidrblock($address,'202.165.242.0/24','No access allowed from Pakistan (PK-IP0345). ');
$ax += cidrblock($address,'202.165.244.0/24','No access allowed from Pakistan (PK-IP0346). ');
$ax += cidrblock($address,'202.165.246.0/23','No access allowed from Pakistan (PK-IP0347). ');
$ax += cidrblock($address,'202.165.248.0/23','No access allowed from Pakistan (PK-IP0348). ');
$ax += cidrblock($address,'202.165.250.0/24','No access allowed from Pakistan (PK-IP0349). ');
$ax += cidrblock($address,'202.166.160.0/20','No access allowed from Pakistan (PK-IP0350). ');
$ax += cidrblock($address,'203.3.132.0/24','No access allowed from Pakistan (PK-IP0351). ');
$ax += cidrblock($address,'203.11.65.0/24','No access allowed from Pakistan (PK-IP0352). ');
$ax += cidrblock($address,'203.16.34.0/24','No access allowed from Pakistan (PK-IP0353). ');
$ax += cidrblock($address,'203.26.77.0/24','No access allowed from Pakistan (PK-IP0354). ');
$ax += cidrblock($address,'203.80.128.0/24','No access allowed from Pakistan (PK-IP0355). ');
$ax += cidrblock($address,'203.80.130.0/24','No access allowed from Pakistan (PK-IP0356). ');
$ax += cidrblock($address,'203.81.192.0/19','No access allowed from Pakistan (PK-IP0357). ');
$ax += cidrblock($address,'203.81.224.0/20','No access allowed from Pakistan (PK-IP0358). ');
$ax += cidrblock($address,'203.82.48.0/20','No access allowed from Pakistan (PK-IP0359). ');
$ax += cidrblock($address,'203.92.4.0/23','No access allowed from Pakistan (PK-IP0360). ');
$ax += cidrblock($address,'203.99.48.0/20','No access allowed from Pakistan (PK-IP0361). ');
$ax += cidrblock($address,'203.99.160.0/19','No access allowed from Pakistan (PK-IP0362). ');
$ax += cidrblock($address,'203.101.160.0/19','No access allowed from Pakistan (PK-IP0363). ');
$ax += cidrblock($address,'203.119.20.0/24','No access allowed from Pakistan (PK-IP0364). ');
$ax += cidrblock($address,'203.124.24.0/21','No access allowed from Pakistan (PK-IP0365). ');
$ax += cidrblock($address,'203.124.32.0/19','No access allowed from Pakistan (PK-IP0366). ');
$ax += cidrblock($address,'203.128.0.0/19','No access allowed from Pakistan (PK-IP0367). ');
$ax += cidrblock($address,'203.128.252.0/22','No access allowed from Pakistan (PK-IP0368). ');
$ax += cidrblock($address,'203.129.0.0/22','No access allowed from Pakistan (PK-IP0369). ');
$ax += cidrblock($address,'203.130.0.0/19','No access allowed from Pakistan (PK-IP0370). ');
$ax += cidrblock($address,'203.133.252.0/22','No access allowed from Pakistan (PK-IP0371). ');
$ax += cidrblock($address,'203.134.252.0/22','No access allowed from Pakistan (PK-IP0372). ');
$ax += cidrblock($address,'203.135.0.0/18','No access allowed from Pakistan (PK-IP0373). ');
$ax += cidrblock($address,'203.142.218.0/24','No access allowed from Pakistan (PK-IP0374). ');
$ax += cidrblock($address,'203.161.179.0/24','No access allowed from Pakistan (PK-IP0375). ');
$ax += cidrblock($address,'203.170.64.0/20','No access allowed from Pakistan (PK-IP0376). ');
$ax += cidrblock($address,'203.175.64.0/20','No access allowed from Pakistan (PK-IP0377). ');
$ax += cidrblock($address,'203.176.189.0/24','No access allowed from Pakistan (PK-IP0378). ');
$ax += cidrblock($address,'203.176.190.0/23','No access allowed from Pakistan (PK-IP0379). ');
$ax += cidrblock($address,'203.212.28.0/22','No access allowed from Pakistan (PK-IP0380). ');
$ax += cidrblock($address,'203.215.160.0/19','No access allowed from Pakistan (PK-IP0381). ');
$ax += cidrblock($address,'203.222.43.193/32','No access allowed from Pakistan (PK-IP0382). ');
$ax += cidrblock($address,'203.223.160.0/20','No access allowed from Pakistan (PK-IP0383). ');
$ax += cidrblock($address,'208.194.251.0/24','No access allowed from Pakistan (PK-IP0384). ');
$ax += cidrblock($address,'208.207.92.0/23','No access allowed from Pakistan (PK-IP0385). ');
$ax += cidrblock($address,'208.232.94.0/23','No access allowed from Pakistan (PK-IP0386). ');
$ax += cidrblock($address,'208.240.136.0/22','No access allowed from Pakistan (PK-IP0387). ');
$ax += cidrblock($address,'209.150.144.0/20','No access allowed from Pakistan (PK-IP0388). ');
}
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'210.2.128.0/18','No access allowed from Pakistan (PK-IP0389). ');
$ax += cidrblock($address,'210.5.208.72/29','No access allowed from Pakistan (PK-IP0390). ');
$ax += cidrblock($address,'210.5.208.80/29','No access allowed from Pakistan (PK-IP0391). ');
$ax += cidrblock($address,'210.5.209.240/29','No access allowed from Pakistan (PK-IP0392). ');
$ax += cidrblock($address,'210.5.210.128/25','No access allowed from Pakistan (PK-IP0393). ');
$ax += cidrblock($address,'210.5.211.8/29','No access allowed from Pakistan (PK-IP0394). ');
$ax += cidrblock($address,'210.5.211.16/28','No access allowed from Pakistan (PK-IP0395). ');
$ax += cidrblock($address,'210.5.211.32/28','No access allowed from Pakistan (PK-IP0396). ');
$ax += cidrblock($address,'210.5.211.64/29','No access allowed from Pakistan (PK-IP0397). ');
$ax += cidrblock($address,'210.5.213.0/24','No access allowed from Pakistan (PK-IP0398). ');
$ax += cidrblock($address,'210.56.0.0/19','No access allowed from Pakistan (PK-IP0399). ');
$ax += cidrblock($address,'218.100.85.0/24','No access allowed from Pakistan (PK-IP0400). ');
}
if(lmatch($address,'22','')) {
$ax += cidrblock($address,'221.120.192.0/18','No access allowed from Pakistan (PK-IP0401). ');
$ax += cidrblock($address,'221.132.112.0/21','No access allowed from Pakistan (PK-IP0402). ');
$ax += cidrblock($address,'223.29.224.0/20','No access allowed from Pakistan (PK-IP0403). ');
}
if(lmatch($address,'27','')) {
$ax += cidrblock($address,'27.0.184.0/22','No access allowed from Pakistan (PK-IP0404). ');
$ax += cidrblock($address,'27.54.120.0/22','No access allowed from Pakistan (PK-IP0405). ');
$ax += cidrblock($address,'27.96.92.0/22','No access allowed from Pakistan (PK-IP0406). ');
$ax += cidrblock($address,'27.255.0.0/18','No access allowed from Pakistan (PK-IP0407). ');
}
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.6.58.0/24','No access allowed from Pakistan (PK-IP0408). ');
$ax += cidrblock($address,'31.187.65.64/26','No access allowed from Pakistan (PK-IP0409). ');
$ax += cidrblock($address,'31.220.30.32/27','No access allowed from Pakistan (PK-IP0410). ');
$ax += cidrblock($address,'31.220.30.96/27','No access allowed from Pakistan (PK-IP0411). ');
$ax += cidrblock($address,'36.255.32.0/22','No access allowed from Pakistan (PK-IP0412). ');
$ax += cidrblock($address,'36.255.40.0/21','No access allowed from Pakistan (PK-IP0413). ');
$ax += cidrblock($address,'36.255.99.0/24','No access allowed from Pakistan (PK-IP0414). ');
$ax += cidrblock($address,'36.255.100.0/22','No access allowed from Pakistan (PK-IP0415). ');
$ax += cidrblock($address,'36.255.212.0/22','No access allowed from Pakistan (PK-IP0416). ');
$ax += cidrblock($address,'37.111.128.0/18','No access allowed from Pakistan (PK-IP0417). ');
$ax += cidrblock($address,'39.32.0.0/11','No access allowed from Pakistan (PK-IP0418). ');
}
if(lmatch($address,'4','')) {
if(lmatch($address,'42','')) {
$ax += cidrblock($address,'42.83.84.0/22','No access allowed from Pakistan (PK-IP0419). ');
$ax += cidrblock($address,'42.201.128.0/17','No access allowed from Pakistan (PK-IP0420). ');
}
if(lmatch($address,'43','')) {
$ax += cidrblock($address,'43.224.236.0/22','No access allowed from Pakistan (PK-IP0421). ');
$ax += cidrblock($address,'43.225.96.0/22','No access allowed from Pakistan (PK-IP0422). ');
$ax += cidrblock($address,'43.228.159.128/25','No access allowed from Pakistan (PK-IP0423). ');
$ax += cidrblock($address,'43.229.164.0/22','No access allowed from Pakistan (PK-IP0424). ');
$ax += cidrblock($address,'43.230.92.0/22','No access allowed from Pakistan (PK-IP0425). ');
$ax += cidrblock($address,'43.231.60.0/22','No access allowed from Pakistan (PK-IP0426). ');
$ax += cidrblock($address,'43.242.100.0/22','No access allowed from Pakistan (PK-IP0427). ');
$ax += cidrblock($address,'43.242.176.0/22','No access allowed from Pakistan (PK-IP0428). ');
$ax += cidrblock($address,'43.245.8.0/22','No access allowed from Pakistan (PK-IP0429). ');
$ax += cidrblock($address,'43.245.128.0/22','No access allowed from Pakistan (PK-IP0430). ');
$ax += cidrblock($address,'43.245.204.0/22','No access allowed from Pakistan (PK-IP0431). ');
$ax += cidrblock($address,'43.246.220.0/22','No access allowed from Pakistan (PK-IP0432). ');
$ax += cidrblock($address,'43.246.224.0/22','No access allowed from Pakistan (PK-IP0433). ');
$ax += cidrblock($address,'43.247.120.0/22','No access allowed from Pakistan (PK-IP0434). ');
$ax += cidrblock($address,'43.248.12.0/22','No access allowed from Pakistan (PK-IP0435). ');
$ax += cidrblock($address,'43.250.84.0/22','No access allowed from Pakistan (PK-IP0436). ');
$ax += cidrblock($address,'43.254.12.0/22','No access allowed from Pakistan (PK-IP0437). ');
}
if(lmatch($address,'45','')) {
$ax += cidrblock($address,'45.62.40.0/24','No access allowed from Pakistan (PK-IP0438). ');
$ax += cidrblock($address,'45.62.53.0/24','No access allowed from Pakistan (PK-IP0439). ');
$ax += cidrblock($address,'45.62.62.0/24','No access allowed from Pakistan (PK-IP0440). ');
$ax += cidrblock($address,'45.64.24.0/22','No access allowed from Pakistan (PK-IP0441). ');
$ax += cidrblock($address,'45.64.180.0/22','No access allowed from Pakistan (PK-IP0442). ');
$ax += cidrblock($address,'45.113.124.0/22','No access allowed from Pakistan (PK-IP0443). ');
$ax += cidrblock($address,'45.115.49.0/24','No access allowed from Pakistan (PK-IP0444). ');
$ax += cidrblock($address,'45.115.84.0/22','No access allowed from Pakistan (PK-IP0445). ');
$ax += cidrblock($address,'45.116.232.0/22','No access allowed from Pakistan (PK-IP0446). ');
$ax += cidrblock($address,'45.117.88.0/22','No access allowed from Pakistan (PK-IP0447). ');
$ax += cidrblock($address,'45.117.104.0/22','No access allowed from Pakistan (PK-IP0448). ');
$ax += cidrblock($address,'45.249.8.0/22','No access allowed from Pakistan (PK-IP0449). ');
}
if(lmatch($address,'46','')) {
$ax += cidrblock($address,'46.36.202.56/32','No access allowed from Pakistan (PK-IP0450). ');
$ax += cidrblock($address,'46.244.29.192/28','No access allowed from Pakistan (PK-IP0451). ');
}
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.62.61.72/30','No access allowed from Pakistan (PK-IP0452). ');
$ax += cidrblock($address,'5.62.63.61/32','No access allowed from Pakistan (PK-IP0453). ');
$ax += cidrblock($address,'5.62.63.62/31','No access allowed from Pakistan (PK-IP0454). ');
$ax += cidrblock($address,'5.189.202.0/25','No access allowed from Pakistan (PK-IP0455). ');
$ax += cidrblock($address,'57.92.240.0/20','No access allowed from Pakistan (PK-IP0456). ');
$ax += cidrblock($address,'58.27.128.0/17','No access allowed from Pakistan (PK-IP0457). ');
$ax += cidrblock($address,'58.65.128.0/18','No access allowed from Pakistan (PK-IP0458). ');
$ax += cidrblock($address,'58.65.192.0/19','No access allowed from Pakistan (PK-IP0459). ');
$ax += cidrblock($address,'58.84.28.0/22','No access allowed from Pakistan (PK-IP0460). ');
$ax += cidrblock($address,'58.181.96.0/19','No access allowed from Pakistan (PK-IP0461). ');
$ax += cidrblock($address,'59.103.0.0/16','No access allowed from Pakistan (PK-IP0462). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'61.5.128.0/19','No access allowed from Pakistan (PK-IP0463). ');
$ax += cidrblock($address,'63.70.24.0/22','No access allowed from Pakistan (PK-IP0464). ');
$ax += cidrblock($address,'63.114.37.0/24','No access allowed from Pakistan (PK-IP0465). ');
$ax += cidrblock($address,'64.86.121.0/24','No access allowed from Pakistan (PK-IP0466). ');
$ax += cidrblock($address,'64.86.122.0/24','No access allowed from Pakistan (PK-IP0467). ');
$ax += cidrblock($address,'64.86.131.0/24','No access allowed from Pakistan (PK-IP0468). ');
$ax += cidrblock($address,'65.175.69.0/24','No access allowed from Pakistan (PK-IP0469). ');
$ax += cidrblock($address,'66.249.93.12/32','No access allowed from Pakistan (PK-IP0470). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'72.255.0.0/18','No access allowed from Pakistan (PK-IP0471). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'82.195.180.246/32','No access allowed from Pakistan (PK-IP0472). ');
}
$ax += inmatch($query,'pktestpk','Test function. (PK). ');
// End of PK list
