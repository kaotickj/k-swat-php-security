<?php
// *php 5 fix
global $ax;
// United Arab Emirates Netblocks
// This file includes GeoLite data created by MaxMind, available from http://dev.maxmind.com/geoip/legacy/geolite/
// The GeoLite databases are distributed under the Creative Commons Attribution-ShareAlike 4.0 International License
// http://creativecommons.org/licenses/by-sa/4.0/
// Last updated 2018.03.07 1513

// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / AE-2018.65.634';
$ax += rmatch($hoster,'.ae','No access allowed from United Arab Emirates (AE-HN0001). ');
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'101.79.158.0/24','No access allowed from United Arab Emirates (AE-IP0001). ');
$ax += cidrblock($address,'103.224.22.0/23','No access allowed from United Arab Emirates (AE-IP0002). ');
$ax += cidrblock($address,'103.245.223.0/24','No access allowed from United Arab Emirates (AE-IP0003). ');
$ax += cidrblock($address,'104.37.6.0/24','No access allowed from United Arab Emirates (AE-IP0004). ');
$ax += cidrblock($address,'104.113.251.0/24','No access allowed from United Arab Emirates (AE-IP0005). ');
$ax += cidrblock($address,'104.119.176.0/22','No access allowed from United Arab Emirates (AE-IP0006). ');
$ax += cidrblock($address,'104.132.72.0/24','No access allowed from United Arab Emirates (AE-IP0007). ');
$ax += cidrblock($address,'104.222.221.0/24','No access allowed from United Arab Emirates (AE-IP0008). ');
$ax += cidrblock($address,'104.249.143.0/24','No access allowed from United Arab Emirates (AE-IP0009). ');
$ax += cidrblock($address,'105.27.32.0/19','No access allowed from United Arab Emirates (AE-IP0010). ');
$ax += cidrblock($address,'105.30.224.0/20','No access allowed from United Arab Emirates (AE-IP0011). ');
$ax += cidrblock($address,'107.153.101.0/24','No access allowed from United Arab Emirates (AE-IP0012). ');
$ax += cidrblock($address,'107.153.102.0/23','No access allowed from United Arab Emirates (AE-IP0013). ');
$ax += cidrblock($address,'107.155.20.0/24','No access allowed from United Arab Emirates (AE-IP0014). ');
$ax += cidrblock($address,'107.155.60.0/24','No access allowed from United Arab Emirates (AE-IP0015). ');
$ax += cidrblock($address,'109.70.64.0/23','No access allowed from United Arab Emirates (AE-IP0016). ');
$ax += cidrblock($address,'109.70.67.67/32','No access allowed from United Arab Emirates (AE-IP0017). ');
$ax += cidrblock($address,'109.70.68.0/22','No access allowed from United Arab Emirates (AE-IP0018). ');
$ax += cidrblock($address,'109.73.172.184/32','No access allowed from United Arab Emirates (AE-IP0019). ');
$ax += cidrblock($address,'109.177.0.0/16','No access allowed from United Arab Emirates (AE-IP0020). ');
$ax += cidrblock($address,'109.205.24.0/21','No access allowed from United Arab Emirates (AE-IP0021). ');
}
if(lmatch($address,'11','')) {
$ax += cidrblock($address,'113.203.0.0/17','No access allowed from United Arab Emirates (AE-IP0022). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'128.1.59.0/24','No access allowed from United Arab Emirates (AE-IP0023). ');
$ax += cidrblock($address,'128.90.101.0/24','No access allowed from United Arab Emirates (AE-IP0024). ');
$ax += cidrblock($address,'128.127.72.0/21','No access allowed from United Arab Emirates (AE-IP0025). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'132.186.0.0/16','No access allowed from United Arab Emirates (AE-IP0026). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'14.0.61.0/24','No access allowed from United Arab Emirates (AE-IP0027). ');
$ax += cidrblock($address,'141.105.160.0/23','No access allowed from United Arab Emirates (AE-IP0028). ');
$ax += cidrblock($address,'141.105.162.0/25','No access allowed from United Arab Emirates (AE-IP0029). ');
$ax += cidrblock($address,'141.105.162.129/32','No access allowed from United Arab Emirates (AE-IP0030). ');
$ax += cidrblock($address,'141.105.162.130/31','No access allowed from United Arab Emirates (AE-IP0031). ');
$ax += cidrblock($address,'141.105.162.132/30','No access allowed from United Arab Emirates (AE-IP0032). ');
$ax += cidrblock($address,'141.105.162.136/29','No access allowed from United Arab Emirates (AE-IP0033). ');
$ax += cidrblock($address,'141.105.162.144/28','No access allowed from United Arab Emirates (AE-IP0034). ');
$ax += cidrblock($address,'141.105.162.160/27','No access allowed from United Arab Emirates (AE-IP0035). ');
$ax += cidrblock($address,'141.105.162.192/26','No access allowed from United Arab Emirates (AE-IP0036). ');
$ax += cidrblock($address,'141.105.163.0/24','No access allowed from United Arab Emirates (AE-IP0037). ');
$ax += cidrblock($address,'141.105.164.0/23','No access allowed from United Arab Emirates (AE-IP0038). ');
$ax += cidrblock($address,'142.0.72.106/32','No access allowed from United Arab Emirates (AE-IP0039). ');
$ax += cidrblock($address,'144.178.4.160/28','No access allowed from United Arab Emirates (AE-IP0040). ');
$ax += cidrblock($address,'144.178.8.192/29','No access allowed from United Arab Emirates (AE-IP0041). ');
$ax += cidrblock($address,'144.178.8.200/30','No access allowed from United Arab Emirates (AE-IP0042). ');
$ax += cidrblock($address,'144.178.29.29/32','No access allowed from United Arab Emirates (AE-IP0043). ');
$ax += cidrblock($address,'146.71.94.0/23','No access allowed from United Arab Emirates (AE-IP0044). ');
$ax += cidrblock($address,'146.112.209.0/24','No access allowed from United Arab Emirates (AE-IP0045). ');
$ax += cidrblock($address,'146.112.231.0/24','No access allowed from United Arab Emirates (AE-IP0046). ');
$ax += cidrblock($address,'147.108.16.0/23','No access allowed from United Arab Emirates (AE-IP0047). ');
$ax += cidrblock($address,'147.108.66.0/23','No access allowed from United Arab Emirates (AE-IP0048). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'150.242.142.0/23','No access allowed from United Arab Emirates (AE-IP0049). ');
$ax += cidrblock($address,'151.101.140.0/22','No access allowed from United Arab Emirates (AE-IP0050). ');
$ax += cidrblock($address,'151.253.0.0/16','No access allowed from United Arab Emirates (AE-IP0051). ');
$ax += cidrblock($address,'154.16.44.0/26','No access allowed from United Arab Emirates (AE-IP0052). ');
$ax += cidrblock($address,'154.16.46.0/26','No access allowed from United Arab Emirates (AE-IP0053). ');
$ax += cidrblock($address,'154.16.48.0/26','No access allowed from United Arab Emirates (AE-IP0054). ');
$ax += cidrblock($address,'154.16.50.0/26','No access allowed from United Arab Emirates (AE-IP0055). ');
$ax += cidrblock($address,'154.16.52.0/26','No access allowed from United Arab Emirates (AE-IP0056). ');
$ax += cidrblock($address,'154.16.54.0/26','No access allowed from United Arab Emirates (AE-IP0057). ');
$ax += cidrblock($address,'157.133.80.0/21','No access allowed from United Arab Emirates (AE-IP0058). ');
$ax += cidrblock($address,'159.180.28.0/24','No access allowed from United Arab Emirates (AE-IP0059). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'162.158.96.0/22','No access allowed from United Arab Emirates (AE-IP0060). ');
$ax += cidrblock($address,'167.88.100.0/24','No access allowed from United Arab Emirates (AE-IP0061). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'17.67.212.0/22','No access allowed from United Arab Emirates (AE-IP0062). ');
$ax += cidrblock($address,'17.69.224.0/21','No access allowed from United Arab Emirates (AE-IP0063). ');
$ax += cidrblock($address,'170.76.178.0/24','No access allowed from United Arab Emirates (AE-IP0064). ');
$ax += cidrblock($address,'172.80.128.0/17','No access allowed from United Arab Emirates (AE-IP0065). ');
$ax += cidrblock($address,'174.142.182.112/29','No access allowed from United Arab Emirates (AE-IP0066). ');
$ax += cidrblock($address,'174.142.224.200/29','No access allowed from United Arab Emirates (AE-IP0067). ');
$ax += cidrblock($address,'175.41.2.0/24','No access allowed from United Arab Emirates (AE-IP0068). ');
$ax += cidrblock($address,'176.74.48.0/21','No access allowed from United Arab Emirates (AE-IP0069). ');
$ax += cidrblock($address,'176.204.0.0/15','No access allowed from United Arab Emirates (AE-IP0070). ');
$ax += cidrblock($address,'178.250.248.0/21','No access allowed from United Arab Emirates (AE-IP0071). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'185.1.8.0/24','No access allowed from United Arab Emirates (AE-IP0072). ');
$ax += cidrblock($address,'185.1.15.0/24','No access allowed from United Arab Emirates (AE-IP0073). ');
$ax += cidrblock($address,'185.3.152.0/22','No access allowed from United Arab Emirates (AE-IP0074). ');
$ax += cidrblock($address,'185.15.136.0/22','No access allowed from United Arab Emirates (AE-IP0075). ');
$ax += cidrblock($address,'185.23.196.0/22','No access allowed from United Arab Emirates (AE-IP0076). ');
$ax += cidrblock($address,'185.23.240.0/22','No access allowed from United Arab Emirates (AE-IP0077). ');
$ax += cidrblock($address,'185.25.104.0/22','No access allowed from United Arab Emirates (AE-IP0078). ');
$ax += cidrblock($address,'185.25.183.0/24','No access allowed from United Arab Emirates (AE-IP0079). ');
$ax += cidrblock($address,'185.26.24.0/24','No access allowed from United Arab Emirates (AE-IP0080). ');
$ax += cidrblock($address,'185.26.27.0/24','No access allowed from United Arab Emirates (AE-IP0081). ');
$ax += cidrblock($address,'185.31.188.0/22','No access allowed from United Arab Emirates (AE-IP0082). ');
$ax += cidrblock($address,'185.34.41.128/25','No access allowed from United Arab Emirates (AE-IP0083). ');
$ax += cidrblock($address,'185.35.104.0/22','No access allowed from United Arab Emirates (AE-IP0084). ');
$ax += cidrblock($address,'185.45.156.0/22','No access allowed from United Arab Emirates (AE-IP0085). ');
$ax += cidrblock($address,'185.45.194.0/23','No access allowed from United Arab Emirates (AE-IP0086). ');
$ax += cidrblock($address,'185.48.64.0/22','No access allowed from United Arab Emirates (AE-IP0087). ');
$ax += cidrblock($address,'185.51.152.0/22','No access allowed from United Arab Emirates (AE-IP0088). ');
$ax += cidrblock($address,'185.53.52.0/22','No access allowed from United Arab Emirates (AE-IP0089). ');
$ax += cidrblock($address,'185.54.16.0/22','No access allowed from United Arab Emirates (AE-IP0090). ');
$ax += cidrblock($address,'185.56.88.0/22','No access allowed from United Arab Emirates (AE-IP0091). ');
$ax += cidrblock($address,'185.59.84.0/22','No access allowed from United Arab Emirates (AE-IP0092). ');
$ax += cidrblock($address,'185.64.76.0/22','No access allowed from United Arab Emirates (AE-IP0093). ');
$ax += cidrblock($address,'185.65.175.0/28','No access allowed from United Arab Emirates (AE-IP0094). ');
$ax += cidrblock($address,'185.66.16.0/22','No access allowed from United Arab Emirates (AE-IP0095). ');
$ax += cidrblock($address,'185.71.204.0/22','No access allowed from United Arab Emirates (AE-IP0096). ');
$ax += cidrblock($address,'185.76.128.0/22','No access allowed from United Arab Emirates (AE-IP0097). ');
$ax += cidrblock($address,'185.76.204.0/22','No access allowed from United Arab Emirates (AE-IP0098). ');
$ax += cidrblock($address,'185.78.244.0/22','No access allowed from United Arab Emirates (AE-IP0099). ');
$ax += cidrblock($address,'185.79.84.0/24','No access allowed from United Arab Emirates (AE-IP0100). ');
$ax += cidrblock($address,'185.93.196.0/22','No access allowed from United Arab Emirates (AE-IP0101). ');
$ax += cidrblock($address,'185.93.244.0/22','No access allowed from United Arab Emirates (AE-IP0102). ');
$ax += cidrblock($address,'185.96.136.0/22','No access allowed from United Arab Emirates (AE-IP0103). ');
$ax += cidrblock($address,'185.100.208.0/22','No access allowed from United Arab Emirates (AE-IP0104). ');
$ax += cidrblock($address,'185.105.237.0/27','No access allowed from United Arab Emirates (AE-IP0105). ');
$ax += cidrblock($address,'185.117.68.0/22','No access allowed from United Arab Emirates (AE-IP0106). ');
$ax += cidrblock($address,'185.120.108.0/22','No access allowed from United Arab Emirates (AE-IP0107). ');
$ax += cidrblock($address,'185.125.224.33/32','No access allowed from United Arab Emirates (AE-IP0108). ');
$ax += cidrblock($address,'185.125.226.33/32','No access allowed from United Arab Emirates (AE-IP0109). ');
$ax += cidrblock($address,'185.125.226.73/32','No access allowed from United Arab Emirates (AE-IP0110). ');
$ax += cidrblock($address,'185.131.56.0/22','No access allowed from United Arab Emirates (AE-IP0111). ');
$ax += cidrblock($address,'185.132.132.0/22','No access allowed from United Arab Emirates (AE-IP0112). ');
$ax += cidrblock($address,'185.132.164.0/22','No access allowed from United Arab Emirates (AE-IP0113). ');
$ax += cidrblock($address,'185.132.168.0/22','No access allowed from United Arab Emirates (AE-IP0114). ');
$ax += cidrblock($address,'185.132.176.0/22','No access allowed from United Arab Emirates (AE-IP0115). ');
$ax += cidrblock($address,'185.132.184.0/21','No access allowed from United Arab Emirates (AE-IP0116). ');
$ax += cidrblock($address,'185.132.192.0/22','No access allowed from United Arab Emirates (AE-IP0117). ');
$ax += cidrblock($address,'185.132.200.0/22','No access allowed from United Arab Emirates (AE-IP0118). ');
$ax += cidrblock($address,'185.133.244.0/22','No access allowed from United Arab Emirates (AE-IP0119). ');
$ax += cidrblock($address,'185.139.236.129/32','No access allowed from United Arab Emirates (AE-IP0120). ');
$ax += cidrblock($address,'185.139.236.130/31','No access allowed from United Arab Emirates (AE-IP0121). ');
$ax += cidrblock($address,'185.139.236.132/30','No access allowed from United Arab Emirates (AE-IP0122). ');
$ax += cidrblock($address,'185.139.236.136/29','No access allowed from United Arab Emirates (AE-IP0123). ');
$ax += cidrblock($address,'185.139.236.144/28','No access allowed from United Arab Emirates (AE-IP0124). ');
$ax += cidrblock($address,'185.139.236.160/27','No access allowed from United Arab Emirates (AE-IP0125). ');
$ax += cidrblock($address,'185.139.236.193/32','No access allowed from United Arab Emirates (AE-IP0126). ');
$ax += cidrblock($address,'185.139.236.194/31','No access allowed from United Arab Emirates (AE-IP0127). ');
$ax += cidrblock($address,'185.139.236.196/30','No access allowed from United Arab Emirates (AE-IP0128). ');
$ax += cidrblock($address,'185.139.236.200/29','No access allowed from United Arab Emirates (AE-IP0129). ');
$ax += cidrblock($address,'185.139.236.208/28','No access allowed from United Arab Emirates (AE-IP0130). ');
$ax += cidrblock($address,'185.139.236.224/27','No access allowed from United Arab Emirates (AE-IP0131). ');
$ax += cidrblock($address,'185.140.96.0/22','No access allowed from United Arab Emirates (AE-IP0132). ');
$ax += cidrblock($address,'185.140.248.0/22','No access allowed from United Arab Emirates (AE-IP0133). ');
$ax += cidrblock($address,'185.141.12.0/22','No access allowed from United Arab Emirates (AE-IP0134). ');
$ax += cidrblock($address,'185.151.4.0/22','No access allowed from United Arab Emirates (AE-IP0135). ');
$ax += cidrblock($address,'185.155.240.0/22','No access allowed from United Arab Emirates (AE-IP0136). ');
$ax += cidrblock($address,'185.165.61.64/26','No access allowed from United Arab Emirates (AE-IP0137). ');
$ax += cidrblock($address,'185.169.4.0/22','No access allowed from United Arab Emirates (AE-IP0138). ');
$ax += cidrblock($address,'185.170.116.0/22','No access allowed from United Arab Emirates (AE-IP0139). ');
$ax += cidrblock($address,'185.171.116.0/22','No access allowed from United Arab Emirates (AE-IP0140). ');
$ax += cidrblock($address,'185.179.202.0/23','No access allowed from United Arab Emirates (AE-IP0141). ');
$ax += cidrblock($address,'185.180.84.0/22','No access allowed from United Arab Emirates (AE-IP0142). ');
$ax += cidrblock($address,'185.184.20.0/22','No access allowed from United Arab Emirates (AE-IP0143). ');
$ax += cidrblock($address,'185.193.152.0/22','No access allowed from United Arab Emirates (AE-IP0144). ');
$ax += cidrblock($address,'185.200.52.0/22','No access allowed from United Arab Emirates (AE-IP0145). ');
$ax += cidrblock($address,'185.203.228.0/22','No access allowed from United Arab Emirates (AE-IP0146). ');
$ax += cidrblock($address,'185.223.44.0/22','No access allowed from United Arab Emirates (AE-IP0147). ');
$ax += cidrblock($address,'185.225.105.200/29','No access allowed from United Arab Emirates (AE-IP0148). ');
$ax += cidrblock($address,'185.225.192.0/22','No access allowed from United Arab Emirates (AE-IP0149). ');
$ax += cidrblock($address,'185.238.180.0/22','No access allowed from United Arab Emirates (AE-IP0150). ');
$ax += cidrblock($address,'185.243.76.0/22','No access allowed from United Arab Emirates (AE-IP0151). ');
$ax += cidrblock($address,'188.72.103.0/24','No access allowed from United Arab Emirates (AE-IP0152). ');
$ax += cidrblock($address,'188.138.38.224/27','No access allowed from United Arab Emirates (AE-IP0153). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'192.15.0.0/16','No access allowed from United Arab Emirates (AE-IP0154). ');
$ax += cidrblock($address,'192.58.29.0/24','No access allowed from United Arab Emirates (AE-IP0155). ');
$ax += cidrblock($address,'192.103.14.0/24','No access allowed from United Arab Emirates (AE-IP0156). ');
$ax += cidrblock($address,'193.33.102.0/23','No access allowed from United Arab Emirates (AE-IP0157). ');
$ax += cidrblock($address,'193.33.172.0/23','No access allowed from United Arab Emirates (AE-IP0158). ');
$ax += cidrblock($address,'193.188.6.0/24','No access allowed from United Arab Emirates (AE-IP0159). ');
$ax += cidrblock($address,'193.223.100.0/24','No access allowed from United Arab Emirates (AE-IP0160). ');
$ax += cidrblock($address,'194.50.183.0/24','No access allowed from United Arab Emirates (AE-IP0161). ');
$ax += cidrblock($address,'194.69.1.0/24','No access allowed from United Arab Emirates (AE-IP0162). ');
$ax += cidrblock($address,'194.110.155.0/24','No access allowed from United Arab Emirates (AE-IP0163). ');
$ax += cidrblock($address,'194.117.51.0/24','No access allowed from United Arab Emirates (AE-IP0164). ');
$ax += cidrblock($address,'194.146.236.0/22','No access allowed from United Arab Emirates (AE-IP0165). ');
$ax += cidrblock($address,'194.152.44.0/23','No access allowed from United Arab Emirates (AE-IP0166). ');
$ax += cidrblock($address,'194.153.153.128/25','No access allowed from United Arab Emirates (AE-IP0167). ');
$ax += cidrblock($address,'194.170.0.0/16','No access allowed from United Arab Emirates (AE-IP0168). ');
$ax += cidrblock($address,'195.95.219.0/24','No access allowed from United Arab Emirates (AE-IP0169). ');
$ax += cidrblock($address,'195.219.174.0/24','No access allowed from United Arab Emirates (AE-IP0170). ');
$ax += cidrblock($address,'195.229.0.0/16','No access allowed from United Arab Emirates (AE-IP0171). ');
$ax += cidrblock($address,'196.3.67.0/24','No access allowed from United Arab Emirates (AE-IP0172). ');
$ax += cidrblock($address,'196.3.68.0/22','No access allowed from United Arab Emirates (AE-IP0173). ');
$ax += cidrblock($address,'198.20.179.96/29','No access allowed from United Arab Emirates (AE-IP0174). ');
$ax += cidrblock($address,'198.27.90.160/28','No access allowed from United Arab Emirates (AE-IP0175). ');
$ax += cidrblock($address,'198.27.115.52/30','No access allowed from United Arab Emirates (AE-IP0176). ');
$ax += cidrblock($address,'198.27.125.112/29','No access allowed from United Arab Emirates (AE-IP0177). ');
$ax += cidrblock($address,'198.44.135.192/29','No access allowed from United Arab Emirates (AE-IP0178). ');
$ax += cidrblock($address,'198.44.149.128/27','No access allowed from United Arab Emirates (AE-IP0179). ');
$ax += cidrblock($address,'198.50.99.104/29','No access allowed from United Arab Emirates (AE-IP0180). ');
$ax += cidrblock($address,'198.50.99.208/29','No access allowed from United Arab Emirates (AE-IP0181). ');
$ax += cidrblock($address,'198.50.101.192/29','No access allowed from United Arab Emirates (AE-IP0182). ');
$ax += cidrblock($address,'198.50.106.208/29','No access allowed from United Arab Emirates (AE-IP0183). ');
$ax += cidrblock($address,'198.50.110.112/29','No access allowed from United Arab Emirates (AE-IP0184). ');
$ax += cidrblock($address,'198.50.112.112/29','No access allowed from United Arab Emirates (AE-IP0185). ');
$ax += cidrblock($address,'198.50.112.152/29','No access allowed from United Arab Emirates (AE-IP0186). ');
$ax += cidrblock($address,'198.50.114.112/29','No access allowed from United Arab Emirates (AE-IP0187). ');
$ax += cidrblock($address,'198.50.115.184/29','No access allowed from United Arab Emirates (AE-IP0188). ');
$ax += cidrblock($address,'198.50.117.176/29','No access allowed from United Arab Emirates (AE-IP0189). ');
$ax += cidrblock($address,'198.50.121.16/28','No access allowed from United Arab Emirates (AE-IP0190). ');
$ax += cidrblock($address,'198.50.167.168/30','No access allowed from United Arab Emirates (AE-IP0191). ');
$ax += cidrblock($address,'198.50.176.176/28','No access allowed from United Arab Emirates (AE-IP0192). ');
$ax += cidrblock($address,'198.50.189.120/29','No access allowed from United Arab Emirates (AE-IP0193). ');
$ax += cidrblock($address,'198.50.203.116/30','No access allowed from United Arab Emirates (AE-IP0194). ');
$ax += cidrblock($address,'198.50.224.36/30','No access allowed from United Arab Emirates (AE-IP0195). ');
$ax += cidrblock($address,'198.50.244.128/28','No access allowed from United Arab Emirates (AE-IP0196). ');
$ax += cidrblock($address,'198.50.251.224/29','No access allowed from United Arab Emirates (AE-IP0197). ');
$ax += cidrblock($address,'198.72.98.80/29','No access allowed from United Arab Emirates (AE-IP0198). ');
$ax += cidrblock($address,'199.10.29.176/28','No access allowed from United Arab Emirates (AE-IP0199). ');
$ax += cidrblock($address,'199.43.199.116/30','No access allowed from United Arab Emirates (AE-IP0200). ');
$ax += cidrblock($address,'199.91.192.0/21','No access allowed from United Arab Emirates (AE-IP0201). ');
$ax += cidrblock($address,'199.127.103.224/28','No access allowed from United Arab Emirates (AE-IP0202). ');
$ax += cidrblock($address,'199.168.189.0/27','No access allowed from United Arab Emirates (AE-IP0203). ');
$ax += cidrblock($address,'199.189.86.64/31','No access allowed from United Arab Emirates (AE-IP0204). ');
$ax += cidrblock($address,'199.189.86.209/32','No access allowed from United Arab Emirates (AE-IP0205). ');
$ax += cidrblock($address,'199.191.56.108/30','No access allowed from United Arab Emirates (AE-IP0206). ');
$ax += cidrblock($address,'199.193.152.160/29','No access allowed from United Arab Emirates (AE-IP0207). ');
$ax += cidrblock($address,'199.241.185.232/29','No access allowed from United Arab Emirates (AE-IP0208). ');
$ax += cidrblock($address,'199.241.186.208/29','No access allowed from United Arab Emirates (AE-IP0209). ');
$ax += cidrblock($address,'199.241.187.248/29','No access allowed from United Arab Emirates (AE-IP0210). ');
$ax += cidrblock($address,'199.241.188.40/29','No access allowed from United Arab Emirates (AE-IP0211). ');
$ax += cidrblock($address,'199.241.188.152/29','No access allowed from United Arab Emirates (AE-IP0212). ');
$ax += cidrblock($address,'199.241.188.240/29','No access allowed from United Arab Emirates (AE-IP0213). ');
$ax += cidrblock($address,'199.241.189.160/27','No access allowed from United Arab Emirates (AE-IP0214). ');
$ax += cidrblock($address,'199.255.157.160/29','No access allowed from United Arab Emirates (AE-IP0215). ');
$ax += cidrblock($address,'199.255.159.88/29','No access allowed from United Arab Emirates (AE-IP0216). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'2.48.0.0/14','No access allowed from United Arab Emirates (AE-IP0217). ');
$ax += cidrblock($address,'23.248.184.0/24','No access allowed from United Arab Emirates (AE-IP0218). ');
$ax += cidrblock($address,'204.18.0.0/16','No access allowed from United Arab Emirates (AE-IP0219). ');
$ax += cidrblock($address,'207.89.22.0/24','No access allowed from United Arab Emirates (AE-IP0220). ');
$ax += cidrblock($address,'208.17.180.8/32','No access allowed from United Arab Emirates (AE-IP0221). ');
$ax += cidrblock($address,'208.218.168.0/21','No access allowed from United Arab Emirates (AE-IP0222). ');
$ax += cidrblock($address,'209.239.75.0/24','No access allowed from United Arab Emirates (AE-IP0223). ');
$ax += cidrblock($address,'209.239.76.0/23','No access allowed from United Arab Emirates (AE-IP0224). ');
$ax += cidrblock($address,'209.239.79.0/24','No access allowed from United Arab Emirates (AE-IP0225). ');
$ax += cidrblock($address,'209.239.80.0/24','No access allowed from United Arab Emirates (AE-IP0226). ');
$ax += cidrblock($address,'213.42.0.0/16','No access allowed from United Arab Emirates (AE-IP0227). ');
$ax += cidrblock($address,'213.132.32.0/19','No access allowed from United Arab Emirates (AE-IP0228). ');
$ax += cidrblock($address,'213.184.116.0/24','No access allowed from United Arab Emirates (AE-IP0229). ');
$ax += cidrblock($address,'217.26.200.0/23','No access allowed from United Arab Emirates (AE-IP0230). ');
$ax += cidrblock($address,'217.164.0.0/15','No access allowed from United Arab Emirates (AE-IP0231). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'31.29.64.0/19','No access allowed from United Arab Emirates (AE-IP0232). ');
$ax += cidrblock($address,'31.44.105.0/24','No access allowed from United Arab Emirates (AE-IP0233). ');
$ax += cidrblock($address,'31.47.88.0/21','No access allowed from United Arab Emirates (AE-IP0234). ');
$ax += cidrblock($address,'31.187.65.0/26','No access allowed from United Arab Emirates (AE-IP0235). ');
$ax += cidrblock($address,'31.215.0.0/16','No access allowed from United Arab Emirates (AE-IP0236). ');
$ax += cidrblock($address,'31.218.0.0/15','No access allowed from United Arab Emirates (AE-IP0237). ');
$ax += cidrblock($address,'37.211.211.0/24','No access allowed from United Arab Emirates (AE-IP0238). ');
$ax += cidrblock($address,'37.218.224.0/21','No access allowed from United Arab Emirates (AE-IP0239). ');
$ax += cidrblock($address,'37.245.0.0/16','No access allowed from United Arab Emirates (AE-IP0240). ');
$ax += cidrblock($address,'37.252.245.0/24','No access allowed from United Arab Emirates (AE-IP0241). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'43.225.52.0/22','No access allowed from United Arab Emirates (AE-IP0242). ');
$ax += cidrblock($address,'46.19.72.0/21','No access allowed from United Arab Emirates (AE-IP0243). ');
$ax += cidrblock($address,'46.235.156.0/24','No access allowed from United Arab Emirates (AE-IP0244). ');
$ax += cidrblock($address,'47.91.96.0/19','No access allowed from United Arab Emirates (AE-IP0245). ');
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.21.252.64/26','No access allowed from United Arab Emirates (AE-IP0246). ');
$ax += cidrblock($address,'5.21.252.128/25','No access allowed from United Arab Emirates (AE-IP0247). ');
$ax += cidrblock($address,'5.30.0.0/15','No access allowed from United Arab Emirates (AE-IP0248). ');
$ax += cidrblock($address,'5.32.0.0/17','No access allowed from United Arab Emirates (AE-IP0249). ');
$ax += cidrblock($address,'5.38.0.0/17','No access allowed from United Arab Emirates (AE-IP0250). ');
$ax += cidrblock($address,'5.53.96.0/21','No access allowed from United Arab Emirates (AE-IP0251). ');
$ax += cidrblock($address,'5.57.208.0/21','No access allowed from United Arab Emirates (AE-IP0252). ');
$ax += cidrblock($address,'5.62.61.200/30','No access allowed from United Arab Emirates (AE-IP0253). ');
$ax += cidrblock($address,'5.62.63.190/32','No access allowed from United Arab Emirates (AE-IP0254). ');
$ax += cidrblock($address,'5.83.112.0/21','No access allowed from United Arab Emirates (AE-IP0255). ');
$ax += cidrblock($address,'5.107.0.0/16','No access allowed from United Arab Emirates (AE-IP0256). ');
$ax += cidrblock($address,'5.152.248.0/21','No access allowed from United Arab Emirates (AE-IP0257). ');
$ax += cidrblock($address,'5.175.142.0/24','No access allowed from United Arab Emirates (AE-IP0258). ');
$ax += cidrblock($address,'5.175.150.128/25','No access allowed from United Arab Emirates (AE-IP0259). ');
$ax += cidrblock($address,'5.192.0.0/14','No access allowed from United Arab Emirates (AE-IP0260). ');
$ax += cidrblock($address,'57.89.0.0/20','No access allowed from United Arab Emirates (AE-IP0261). ');
$ax += cidrblock($address,'58.84.39.0/24','No access allowed from United Arab Emirates (AE-IP0262). ');
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'64.37.125.0/24','No access allowed from United Arab Emirates (AE-IP0263). ');
$ax += cidrblock($address,'67.205.88.64/29','No access allowed from United Arab Emirates (AE-IP0264). ');
$ax += cidrblock($address,'68.67.68.240/30','No access allowed from United Arab Emirates (AE-IP0265). ');
$ax += cidrblock($address,'69.41.228.0/24','No access allowed from United Arab Emirates (AE-IP0266). ');
$ax += cidrblock($address,'69.194.64.0/18','No access allowed from United Arab Emirates (AE-IP0267). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'72.55.166.244/30','No access allowed from United Arab Emirates (AE-IP0268). ');
$ax += cidrblock($address,'79.98.120.0/21','No access allowed from United Arab Emirates (AE-IP0269). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'80.227.0.0/16','No access allowed from United Arab Emirates (AE-IP0270). ');
$ax += cidrblock($address,'82.146.17.0/24','No access allowed from United Arab Emirates (AE-IP0271). ');
$ax += cidrblock($address,'83.110.0.0/15','No access allowed from United Arab Emirates (AE-IP0272). ');
$ax += cidrblock($address,'83.136.8.0/21','No access allowed from United Arab Emirates (AE-IP0273). ');
$ax += cidrblock($address,'85.93.5.0/24','No access allowed from United Arab Emirates (AE-IP0274). ');
$ax += cidrblock($address,'85.115.64.0/19','No access allowed from United Arab Emirates (AE-IP0275). ');
$ax += cidrblock($address,'85.203.8.0/32','No access allowed from United Arab Emirates (AE-IP0276). ');
$ax += cidrblock($address,'85.203.24.0/24','No access allowed from United Arab Emirates (AE-IP0277). ');
$ax += cidrblock($address,'86.96.0.0/14','No access allowed from United Arab Emirates (AE-IP0278). ');
$ax += cidrblock($address,'87.106.28.119/32','No access allowed from United Arab Emirates (AE-IP0279). ');
$ax += cidrblock($address,'87.200.0.0/15','No access allowed from United Arab Emirates (AE-IP0280). ');
$ax += cidrblock($address,'87.237.224.0/21','No access allowed from United Arab Emirates (AE-IP0281). ');
$ax += cidrblock($address,'89.30.92.0/25','No access allowed from United Arab Emirates (AE-IP0282). ');
$ax += cidrblock($address,'89.34.166.0/24','No access allowed from United Arab Emirates (AE-IP0283). ');
$ax += cidrblock($address,'89.35.108.0/22','No access allowed from United Arab Emirates (AE-IP0284). ');
$ax += cidrblock($address,'89.191.217.11/32','No access allowed from United Arab Emirates (AE-IP0285). ');
}
if(lmatch($address,'9','')) {
$ax += cidrblock($address,'91.72.0.0/14','No access allowed from United Arab Emirates (AE-IP0286). ');
$ax += cidrblock($address,'91.102.120.0/21','No access allowed from United Arab Emirates (AE-IP0287). ');
$ax += cidrblock($address,'91.189.8.0/21','No access allowed from United Arab Emirates (AE-IP0288). ');
$ax += cidrblock($address,'91.198.19.0/24','No access allowed from United Arab Emirates (AE-IP0289). ');
$ax += cidrblock($address,'91.212.53.0/24','No access allowed from United Arab Emirates (AE-IP0290). ');
$ax += cidrblock($address,'91.229.64.0/23','No access allowed from United Arab Emirates (AE-IP0291). ');
$ax += cidrblock($address,'91.230.41.0/24','No access allowed from United Arab Emirates (AE-IP0292). ');
$ax += cidrblock($address,'91.231.11.0/24','No access allowed from United Arab Emirates (AE-IP0293). ');
$ax += cidrblock($address,'91.235.159.0/24','No access allowed from United Arab Emirates (AE-IP0294). ');
$ax += cidrblock($address,'91.236.162.0/24','No access allowed from United Arab Emirates (AE-IP0295). ');
$ax += cidrblock($address,'91.240.73.0/24','No access allowed from United Arab Emirates (AE-IP0296). ');
$ax += cidrblock($address,'92.96.0.0/14','No access allowed from United Arab Emirates (AE-IP0297). ');
$ax += cidrblock($address,'94.56.0.0/14','No access allowed from United Arab Emirates (AE-IP0298). ');
$ax += cidrblock($address,'94.200.0.0/13','No access allowed from United Arab Emirates (AE-IP0299). ');
}
$ax += inmatch($query,'aetestae','Test function. (AE). ');
// End of AE list
