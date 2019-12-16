<?php
// *php 5 fix
global $ax;
// Amazon Web Services Netblocks
// https://aws.amazon.com/blogs/aws/aws-ip-ranges-json/
// http://docs.aws.amazon.com/general/latest/gr/aws-ip-ranges.html
// Last updated 2018-03-09 @ 13.46
// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / AWS-2018.67.573';
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'103.4.8.0/21','No access allowed from AWS (AWS-IP0001). ');
$ax += cidrblock($address,'103.8.172.0/22','No access allowed from AWS (AWS-IP0002). ');
$ax += cidrblock($address,'103.246.148.0/22','No access allowed from AWS (AWS-IP0003). ');
$ax += cidrblock($address,'107.20.0.0/14','No access allowed from AWS (AWS-IP0004). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'122.248.192.0/18','No access allowed from AWS (AWS-IP0005). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'13.32.0.0/15','No access allowed from AWS (AWS-IP0006). ');
$ax += cidrblock($address,'13.35.0.0/16','No access allowed from AWS (AWS-IP0007). ');
$ax += cidrblock($address,'13.52.0.0/14','No access allowed from AWS (AWS-IP0008). ');
$ax += cidrblock($address,'13.56.0.0/14','No access allowed from AWS (AWS-IP0009). ');
$ax += cidrblock($address,'13.112.0.0/14','No access allowed from AWS (AWS-IP0010). ');
$ax += cidrblock($address,'13.124.0.0/14','No access allowed from AWS (AWS-IP0011). ');
$ax += cidrblock($address,'13.208.0.0/14','No access allowed from AWS (AWS-IP0012). ');
$ax += cidrblock($address,'13.228.0.0/14','No access allowed from AWS (AWS-IP0013). ');
$ax += cidrblock($address,'13.232.0.0/13','No access allowed from AWS (AWS-IP0014). ');
$ax += cidrblock($address,'13.248.0.0/19','No access allowed from AWS (AWS-IP0015). ');
$ax += cidrblock($address,'13.250.0.0/15','No access allowed from AWS (AWS-IP0016). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'143.204.0.0/16','No access allowed from AWS (AWS-IP0017). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'172.96.97.0/24','No access allowed from AWS (AWS-IP0018). ');
$ax += cidrblock($address,'172.96.98.0/24','No access allowed from AWS (AWS-IP0019). ');
$ax += cidrblock($address,'174.129.0.0/16','No access allowed from AWS (AWS-IP0020). ');
$ax += cidrblock($address,'175.41.128.0/17','No access allowed from AWS (AWS-IP0021). ');
$ax += cidrblock($address,'176.32.64.0/19','No access allowed from AWS (AWS-IP0022). ');
$ax += cidrblock($address,'176.32.96.0/20','No access allowed from AWS (AWS-IP0023). ');
$ax += cidrblock($address,'176.32.112.0/21','No access allowed from AWS (AWS-IP0024). ');
$ax += cidrblock($address,'176.32.120.0/22','No access allowed from AWS (AWS-IP0025). ');
$ax += cidrblock($address,'176.32.125.0/25','No access allowed from AWS (AWS-IP0026). ');
$ax += cidrblock($address,'176.34.0.0/16','No access allowed from AWS (AWS-IP0027). ');
$ax += cidrblock($address,'177.71.128.0/17','No access allowed from AWS (AWS-IP0028). ');
$ax += cidrblock($address,'177.72.240.0/21','No access allowed from AWS (AWS-IP0029). ');
$ax += cidrblock($address,'178.236.0.0/20','No access allowed from AWS (AWS-IP0030). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'18.130.0.0/16','No access allowed from AWS (AWS-IP0031). ');
$ax += cidrblock($address,'18.136.0.0/16','No access allowed from AWS (AWS-IP0032). ');
$ax += cidrblock($address,'18.144.0.0/15','No access allowed from AWS (AWS-IP0033). ');
$ax += cidrblock($address,'18.179.0.0/16','No access allowed from AWS (AWS-IP0034). ');
$ax += cidrblock($address,'18.182.0.0/16','No access allowed from AWS (AWS-IP0035). ');
$ax += cidrblock($address,'18.184.0.0/15','No access allowed from AWS (AWS-IP0036). ');
$ax += cidrblock($address,'18.188.0.0/16','No access allowed from AWS (AWS-IP0037). ');
$ax += cidrblock($address,'18.191.0.0/16','No access allowed from AWS (AWS-IP0038). ');
$ax += cidrblock($address,'18.194.0.0/15','No access allowed from AWS (AWS-IP0039). ');
$ax += cidrblock($address,'18.196.0.0/15','No access allowed from AWS (AWS-IP0040). ');
$ax += cidrblock($address,'18.200.0.0/16','No access allowed from AWS (AWS-IP0041). ');
$ax += cidrblock($address,'18.204.0.0/14','No access allowed from AWS (AWS-IP0042). ');
$ax += cidrblock($address,'18.208.0.0/12','No access allowed from AWS (AWS-IP0043). ');
$ax += cidrblock($address,'18.224.0.0/14','No access allowed from AWS (AWS-IP0044). ');
$ax += cidrblock($address,'18.228.0.0/16','No access allowed from AWS (AWS-IP0045). ');
$ax += cidrblock($address,'18.231.0.0/16','No access allowed from AWS (AWS-IP0046). ');
$ax += cidrblock($address,'18.232.0.0/14','No access allowed from AWS (AWS-IP0047). ');
$ax += cidrblock($address,'18.236.0.0/15','No access allowed from AWS (AWS-IP0048). ');
$ax += cidrblock($address,'18.253.0.0/16','No access allowed from AWS (AWS-IP0049). ');
$ax += cidrblock($address,'184.72.0.0/15','No access allowed from AWS (AWS-IP0050). ');
$ax += cidrblock($address,'184.169.128.0/17','No access allowed from AWS (AWS-IP0051). ');
$ax += cidrblock($address,'185.48.120.0/22','No access allowed from AWS (AWS-IP0052). ');
$ax += cidrblock($address,'185.143.16.0/24','No access allowed from AWS (AWS-IP0053). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'23.20.0.0/14','No access allowed from AWS (AWS-IP0054). ');
$ax += cidrblock($address,'27.0.0.0/22','No access allowed from AWS (AWS-IP0055). ');
$ax += cidrblock($address,'203.83.220.0/22','No access allowed from AWS (AWS-IP0056). ');
$ax += cidrblock($address,'204.236.128.0/17','No access allowed from AWS (AWS-IP0057). ');
$ax += cidrblock($address,'204.246.160.0/21','No access allowed from AWS (AWS-IP0058). ');
$ax += cidrblock($address,'204.246.168.0/22','No access allowed from AWS (AWS-IP0059). ');
$ax += cidrblock($address,'204.246.174.0/23','No access allowed from AWS (AWS-IP0060). ');
$ax += cidrblock($address,'204.246.176.0/20','No access allowed from AWS (AWS-IP0061). ');
$ax += cidrblock($address,'205.251.192.0/19','No access allowed from AWS (AWS-IP0062). ');
$ax += cidrblock($address,'205.251.224.0/20','No access allowed from AWS (AWS-IP0063). ');
$ax += cidrblock($address,'205.251.240.0/22','No access allowed from AWS (AWS-IP0064). ');
$ax += cidrblock($address,'205.251.244.0/23','No access allowed from AWS (AWS-IP0065). ');
$ax += cidrblock($address,'205.251.247.0/24','No access allowed from AWS (AWS-IP0066). ');
$ax += cidrblock($address,'205.251.248.0/22','No access allowed from AWS (AWS-IP0067). ');
$ax += cidrblock($address,'205.251.252.0/23','No access allowed from AWS (AWS-IP0068). ');
$ax += cidrblock($address,'205.251.254.0/24','No access allowed from AWS (AWS-IP0069). ');
$ax += cidrblock($address,'207.171.160.0/19','No access allowed from AWS (AWS-IP0070). ');
$ax += cidrblock($address,'216.137.32.0/19','No access allowed from AWS (AWS-IP0071). ');
$ax += cidrblock($address,'216.182.224.0/20','No access allowed from AWS (AWS-IP0072). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'34.192.0.0/10','No access allowed from AWS (AWS-IP0073). ');
$ax += cidrblock($address,'35.153.0.0/16','No access allowed from AWS (AWS-IP0074). ');
$ax += cidrblock($address,'35.154.0.0/15','No access allowed from AWS (AWS-IP0075). ');
$ax += cidrblock($address,'35.156.0.0/14','No access allowed from AWS (AWS-IP0076). ');
$ax += cidrblock($address,'35.160.0.0/12','No access allowed from AWS (AWS-IP0077). ');
$ax += cidrblock($address,'35.176.0.0/14','No access allowed from AWS (AWS-IP0078). ');
$ax += cidrblock($address,'35.180.0.0/16','No access allowed from AWS (AWS-IP0079). ');
$ax += cidrblock($address,'35.182.0.0/15','No access allowed from AWS (AWS-IP0080). ');
}
if(lmatch($address,'4','')) {
$ax += cidrblock($address,'43.250.192.0/23','No access allowed from AWS (AWS-IP0081). ');
$ax += cidrblock($address,'46.51.128.0/18','No access allowed from AWS (AWS-IP0082). ');
$ax += cidrblock($address,'46.51.192.0/20','No access allowed from AWS (AWS-IP0083). ');
$ax += cidrblock($address,'46.51.216.0/21','No access allowed from AWS (AWS-IP0084). ');
$ax += cidrblock($address,'46.51.224.0/19','No access allowed from AWS (AWS-IP0085). ');
$ax += cidrblock($address,'46.137.0.0/16','No access allowed from AWS (AWS-IP0086). ');
}
if(lmatch($address,'5','')) {
if(lmatch($address,'50','')) {
$ax += cidrblock($address,'50.16.0.0/14','No access allowed from AWS (AWS-IP0087). ');
$ax += cidrblock($address,'50.112.0.0/16','No access allowed from AWS (AWS-IP0088). ');
}
if(lmatch($address,'52','')) {
$ax += cidrblock($address,'52.0.0.0/11','No access allowed from AWS (AWS-IP0089). ');
$ax += cidrblock($address,'52.32.0.0/13','No access allowed from AWS (AWS-IP0090). ');
$ax += cidrblock($address,'52.40.0.0/14','No access allowed from AWS (AWS-IP0091). ');
$ax += cidrblock($address,'52.44.0.0/15','No access allowed from AWS (AWS-IP0092). ');
$ax += cidrblock($address,'52.46.0.0/17','No access allowed from AWS (AWS-IP0093). ');
$ax += cidrblock($address,'52.46.128.0/19','No access allowed from AWS (AWS-IP0094). ');
$ax += cidrblock($address,'52.46.164.0/23','No access allowed from AWS (AWS-IP0095). ');
$ax += cidrblock($address,'52.46.172.0/22','No access allowed from AWS (AWS-IP0096). ');
$ax += cidrblock($address,'52.46.176.0/21','No access allowed from AWS (AWS-IP0097). ');
$ax += cidrblock($address,'52.46.184.0/22','No access allowed from AWS (AWS-IP0098). ');
$ax += cidrblock($address,'52.46.192.0/19','No access allowed from AWS (AWS-IP0099). ');
$ax += cidrblock($address,'52.46.224.0/20','No access allowed from AWS (AWS-IP0100). ');
$ax += cidrblock($address,'52.47.0.0/16','No access allowed from AWS (AWS-IP0101). ');
$ax += cidrblock($address,'52.48.0.0/12','No access allowed from AWS (AWS-IP0102). ');
$ax += cidrblock($address,'52.64.0.0/12','No access allowed from AWS (AWS-IP0103). ');
$ax += cidrblock($address,'52.80.0.0/15','No access allowed from AWS (AWS-IP0104). ');
$ax += cidrblock($address,'52.82.0.0/17','No access allowed from AWS (AWS-IP0105). ');
$ax += cidrblock($address,'52.82.176.0/21','No access allowed from AWS (AWS-IP0106). ');
$ax += cidrblock($address,'52.82.187.0/24','No access allowed from AWS (AWS-IP0107). ');
$ax += cidrblock($address,'52.82.188.0/22','No access allowed from AWS (AWS-IP0108). ');
$ax += cidrblock($address,'52.82.192.0/18','No access allowed from AWS (AWS-IP0109). ');
$ax += cidrblock($address,'52.83.0.0/16','No access allowed from AWS (AWS-IP0110). ');
$ax += cidrblock($address,'52.84.0.0/14','No access allowed from AWS (AWS-IP0111). ');
$ax += cidrblock($address,'52.88.0.0/14','No access allowed from AWS (AWS-IP0112). ');
$ax += cidrblock($address,'52.92.0.0/19','No access allowed from AWS (AWS-IP0113). ');
$ax += cidrblock($address,'52.92.32.0/22','No access allowed from AWS (AWS-IP0114). ');
$ax += cidrblock($address,'52.92.39.0/24','No access allowed from AWS (AWS-IP0115). ');
$ax += cidrblock($address,'52.92.40.0/21','No access allowed from AWS (AWS-IP0116). ');
$ax += cidrblock($address,'52.92.48.0/20','No access allowed from AWS (AWS-IP0117). ');
$ax += cidrblock($address,'52.92.64.0/20','No access allowed from AWS (AWS-IP0118). ');
$ax += cidrblock($address,'52.92.80.0/21','No access allowed from AWS (AWS-IP0119). ');
$ax += cidrblock($address,'52.92.88.0/22','No access allowed from AWS (AWS-IP0120). ');
$ax += cidrblock($address,'52.92.248.0/21','No access allowed from AWS (AWS-IP0121). ');
$ax += cidrblock($address,'52.93.0.0/22','No access allowed from AWS (AWS-IP0122). ');
$ax += cidrblock($address,'52.93.4.0/23','No access allowed from AWS (AWS-IP0123). ');
$ax += cidrblock($address,'52.93.8.0/22','No access allowed from AWS (AWS-IP0124). ');
$ax += cidrblock($address,'52.93.16.0/24','No access allowed from AWS (AWS-IP0125). ');
$ax += cidrblock($address,'52.93.17.16/31','No access allowed from AWS (AWS-IP0126). ');
$ax += cidrblock($address,'52.93.18.178/31','No access allowed from AWS (AWS-IP0127). ');
$ax += cidrblock($address,'52.93.19.236/31','No access allowed from AWS (AWS-IP0128). ');
$ax += cidrblock($address,'52.93.20.16/31','No access allowed from AWS (AWS-IP0129). ');
$ax += cidrblock($address,'52.93.21.14/31','No access allowed from AWS (AWS-IP0130). ');
$ax += cidrblock($address,'52.93.34.56/31','No access allowed from AWS (AWS-IP0131). ');
$ax += cidrblock($address,'52.93.37.222/31','No access allowed from AWS (AWS-IP0132). ');
$ax += cidrblock($address,'52.93.48.22/31','No access allowed from AWS (AWS-IP0133). ');
$ax += cidrblock($address,'52.93.51.28/31','No access allowed from AWS (AWS-IP0134). ');
$ax += cidrblock($address,'52.93.249.0/24','No access allowed from AWS (AWS-IP0135). ');
$ax += cidrblock($address,'52.94.0.0/20','No access allowed from AWS (AWS-IP0136). ');
$ax += cidrblock($address,'52.94.16.0/23','No access allowed from AWS (AWS-IP0137). ');
$ax += cidrblock($address,'52.94.19.0/24','No access allowed from AWS (AWS-IP0138). ');
$ax += cidrblock($address,'52.94.20.0/24','No access allowed from AWS (AWS-IP0139). ');
$ax += cidrblock($address,'52.94.22.0/23','No access allowed from AWS (AWS-IP0140). ');
$ax += cidrblock($address,'52.94.24.0/22','No access allowed from AWS (AWS-IP0141). ');
$ax += cidrblock($address,'52.94.28.0/23','No access allowed from AWS (AWS-IP0142). ');
$ax += cidrblock($address,'52.94.32.0/19','No access allowed from AWS (AWS-IP0143). ');
$ax += cidrblock($address,'52.94.64.0/22','No access allowed from AWS (AWS-IP0144). ');
$ax += cidrblock($address,'52.94.68.0/23','No access allowed from AWS (AWS-IP0145). ');
$ax += cidrblock($address,'52.94.72.0/21','No access allowed from AWS (AWS-IP0146). ');
$ax += cidrblock($address,'52.94.80.0/20','No access allowed from AWS (AWS-IP0147). ');
$ax += cidrblock($address,'52.94.96.0/19','No access allowed from AWS (AWS-IP0148). ');
$ax += cidrblock($address,'52.94.192.0/22','No access allowed from AWS (AWS-IP0149). ');
$ax += cidrblock($address,'52.94.196.0/23','No access allowed from AWS (AWS-IP0150). ');
$ax += cidrblock($address,'52.94.198.0/25','No access allowed from AWS (AWS-IP0151). ');
$ax += cidrblock($address,'52.94.198.128/27','No access allowed from AWS (AWS-IP0152). ');
$ax += cidrblock($address,'52.94.199.0/24','No access allowed from AWS (AWS-IP0153). ');
$ax += cidrblock($address,'52.94.200.0/24','No access allowed from AWS (AWS-IP0154). ');
$ax += cidrblock($address,'52.94.204.0/22','No access allowed from AWS (AWS-IP0155). ');
$ax += cidrblock($address,'52.94.208.0/20','No access allowed from AWS (AWS-IP0156). ');
$ax += cidrblock($address,'52.94.224.0/20','No access allowed from AWS (AWS-IP0157). ');
$ax += cidrblock($address,'52.94.240.0/21','No access allowed from AWS (AWS-IP0158). ');
$ax += cidrblock($address,'52.94.248.0/25','No access allowed from AWS (AWS-IP0159). ');
$ax += cidrblock($address,'52.94.248.128/26','No access allowed from AWS (AWS-IP0160). ');
$ax += cidrblock($address,'52.94.248.192/27','No access allowed from AWS (AWS-IP0161). ');
$ax += cidrblock($address,'52.94.248.224/28','No access allowed from AWS (AWS-IP0162). ');
$ax += cidrblock($address,'52.94.249.0/27','No access allowed from AWS (AWS-IP0163). ');
$ax += cidrblock($address,'52.94.249.32/28','No access allowed from AWS (AWS-IP0164). ');
$ax += cidrblock($address,'52.94.249.64/26','No access allowed from AWS (AWS-IP0165). ');
$ax += cidrblock($address,'52.94.252.0/22','No access allowed from AWS (AWS-IP0166). ');
$ax += cidrblock($address,'52.95.0.0/20','No access allowed from AWS (AWS-IP0167). ');
$ax += cidrblock($address,'52.95.16.0/21','No access allowed from AWS (AWS-IP0168). ');
$ax += cidrblock($address,'52.95.24.0/22','No access allowed from AWS (AWS-IP0169). ');
$ax += cidrblock($address,'52.95.28.0/24','No access allowed from AWS (AWS-IP0170). ');
$ax += cidrblock($address,'52.95.30.0/23','No access allowed from AWS (AWS-IP0171). ');
$ax += cidrblock($address,'52.95.34.0/23','No access allowed from AWS (AWS-IP0172). ');
$ax += cidrblock($address,'52.95.36.0/22','No access allowed from AWS (AWS-IP0173). ');
$ax += cidrblock($address,'52.95.40.0/24','No access allowed from AWS (AWS-IP0174). ');
$ax += cidrblock($address,'52.95.48.0/22','No access allowed from AWS (AWS-IP0175). ');
$ax += cidrblock($address,'52.95.56.0/21','No access allowed from AWS (AWS-IP0176). ');
$ax += cidrblock($address,'52.95.64.0/18','No access allowed from AWS (AWS-IP0177). ');
$ax += cidrblock($address,'52.95.128.0/21','No access allowed from AWS (AWS-IP0178). ');
$ax += cidrblock($address,'52.95.136.0/23','No access allowed from AWS (AWS-IP0179). ');
$ax += cidrblock($address,'52.95.138.0/24','No access allowed from AWS (AWS-IP0180). ');
$ax += cidrblock($address,'52.95.142.0/23','No access allowed from AWS (AWS-IP0181). ');
$ax += cidrblock($address,'52.95.144.0/22','No access allowed from AWS (AWS-IP0182). ');
$ax += cidrblock($address,'52.95.148.0/23','No access allowed from AWS (AWS-IP0183). ');
$ax += cidrblock($address,'52.95.150.0/24','No access allowed from AWS (AWS-IP0184). ');
$ax += cidrblock($address,'52.95.154.0/23','No access allowed from AWS (AWS-IP0185). ');
$ax += cidrblock($address,'52.95.156.0/22','No access allowed from AWS (AWS-IP0186). ');
$ax += cidrblock($address,'52.95.163.0/24','No access allowed from AWS (AWS-IP0187). ');
$ax += cidrblock($address,'52.95.164.0/22','No access allowed from AWS (AWS-IP0188). ');
$ax += cidrblock($address,'52.95.168.0/24','No access allowed from AWS (AWS-IP0189). ');
$ax += cidrblock($address,'52.95.192.0/20','No access allowed from AWS (AWS-IP0190). ');
$ax += cidrblock($address,'52.95.212.0/22','No access allowed from AWS (AWS-IP0191). ');
$ax += cidrblock($address,'52.95.225.0/24','No access allowed from AWS (AWS-IP0192). ');
$ax += cidrblock($address,'52.95.227.0/24','No access allowed from AWS (AWS-IP0193). ');
$ax += cidrblock($address,'52.95.240.0/21','No access allowed from AWS (AWS-IP0194). ');
$ax += cidrblock($address,'52.95.248.0/22','No access allowed from AWS (AWS-IP0195). ');
$ax += cidrblock($address,'52.95.252.0/23','No access allowed from AWS (AWS-IP0196). ');
$ax += cidrblock($address,'52.95.254.0/24','No access allowed from AWS (AWS-IP0197). ');
$ax += cidrblock($address,'52.95.255.0/25','No access allowed from AWS (AWS-IP0198). ');
$ax += cidrblock($address,'52.95.255.128/27','No access allowed from AWS (AWS-IP0199). ');
$ax += cidrblock($address,'52.119.160.0/19','No access allowed from AWS (AWS-IP0200). ');
$ax += cidrblock($address,'52.119.192.0/21','No access allowed from AWS (AWS-IP0201). ');
$ax += cidrblock($address,'52.119.205.0/24','No access allowed from AWS (AWS-IP0202). ');
$ax += cidrblock($address,'52.119.206.0/23','No access allowed from AWS (AWS-IP0203). ');
$ax += cidrblock($address,'52.119.208.0/20','No access allowed from AWS (AWS-IP0204). ');
$ax += cidrblock($address,'52.119.224.0/20','No access allowed from AWS (AWS-IP0205). ');
$ax += cidrblock($address,'52.119.240.0/21','No access allowed from AWS (AWS-IP0206). ');
$ax += cidrblock($address,'52.119.252.0/22','No access allowed from AWS (AWS-IP0207). ');
$ax += cidrblock($address,'52.144.192.0/24','No access allowed from AWS (AWS-IP0208). ');
$ax += cidrblock($address,'52.144.193.0/25','No access allowed from AWS (AWS-IP0209). ');
$ax += cidrblock($address,'52.144.193.128/26','No access allowed from AWS (AWS-IP0210). ');
$ax += cidrblock($address,'52.144.194.0/24','No access allowed from AWS (AWS-IP0211). ');
$ax += cidrblock($address,'52.144.195.0/26','No access allowed from AWS (AWS-IP0212). ');
$ax += cidrblock($address,'52.144.196.192/26','No access allowed from AWS (AWS-IP0213). ');
$ax += cidrblock($address,'52.144.208.64/26','No access allowed from AWS (AWS-IP0214). ');
$ax += cidrblock($address,'52.144.208.128/25','No access allowed from AWS (AWS-IP0215). ');
$ax += cidrblock($address,'52.144.209.0/24','No access allowed from AWS (AWS-IP0216). ');
$ax += cidrblock($address,'52.144.210.64/26','No access allowed from AWS (AWS-IP0217). ');
$ax += cidrblock($address,'52.144.210.128/26','No access allowed from AWS (AWS-IP0218). ');
$ax += cidrblock($address,'52.144.224.64/26','No access allowed from AWS (AWS-IP0219). ');
$ax += cidrblock($address,'52.144.224.128/26','No access allowed from AWS (AWS-IP0220). ');
$ax += cidrblock($address,'52.144.225.64/26','No access allowed from AWS (AWS-IP0221). ');
$ax += cidrblock($address,'52.144.225.128/26','No access allowed from AWS (AWS-IP0222). ');
$ax += cidrblock($address,'52.192.0.0/12','No access allowed from AWS (AWS-IP0223). ');
$ax += cidrblock($address,'52.208.0.0/13','No access allowed from AWS (AWS-IP0224). ');
$ax += cidrblock($address,'52.216.0.0/15','No access allowed from AWS (AWS-IP0225). ');
$ax += cidrblock($address,'52.218.0.0/16','No access allowed from AWS (AWS-IP0226). ');
$ax += cidrblock($address,'52.219.0.0/19','No access allowed from AWS (AWS-IP0227). ');
$ax += cidrblock($address,'52.219.32.0/20','No access allowed from AWS (AWS-IP0228). ');
$ax += cidrblock($address,'52.219.56.0/21','No access allowed from AWS (AWS-IP0229). ');
$ax += cidrblock($address,'52.219.64.0/19','No access allowed from AWS (AWS-IP0230). ');
$ax += cidrblock($address,'52.219.96.0/20','No access allowed from AWS (AWS-IP0231). ');
$ax += cidrblock($address,'52.220.0.0/15','No access allowed from AWS (AWS-IP0232). ');
$ax += cidrblock($address,'52.222.0.0/16','No access allowed from AWS (AWS-IP0233). ');
}
if(lmatch($address,'54','')) {
$ax += cidrblock($address,'54.64.0.0/11','No access allowed from AWS (AWS-IP0234). ');
$ax += cidrblock($address,'54.144.0.0/12','No access allowed from AWS (AWS-IP0235). ');
$ax += cidrblock($address,'54.160.0.0/12','No access allowed from AWS (AWS-IP0236). ');
$ax += cidrblock($address,'54.176.0.0/14','No access allowed from AWS (AWS-IP0237). ');
$ax += cidrblock($address,'54.182.0.0/15','No access allowed from AWS (AWS-IP0238). ');
$ax += cidrblock($address,'54.184.0.0/13','No access allowed from AWS (AWS-IP0239). ');
$ax += cidrblock($address,'54.192.0.0/12','No access allowed from AWS (AWS-IP0240). ');
$ax += cidrblock($address,'54.208.0.0/13','No access allowed from AWS (AWS-IP0241). ');
$ax += cidrblock($address,'54.216.0.0/14','No access allowed from AWS (AWS-IP0242). ');
$ax += cidrblock($address,'54.220.0.0/15','No access allowed from AWS (AWS-IP0243). ');
$ax += cidrblock($address,'54.222.0.0/19','No access allowed from AWS (AWS-IP0244). ');
$ax += cidrblock($address,'54.222.32.0/21','No access allowed from AWS (AWS-IP0245). ');
$ax += cidrblock($address,'54.222.48.0/22','No access allowed from AWS (AWS-IP0246). ');
$ax += cidrblock($address,'54.222.57.0/24','No access allowed from AWS (AWS-IP0247). ');
$ax += cidrblock($address,'54.222.58.0/28','No access allowed from AWS (AWS-IP0248). ');
$ax += cidrblock($address,'54.222.128.0/17','No access allowed from AWS (AWS-IP0249). ');
$ax += cidrblock($address,'54.223.0.0/16','No access allowed from AWS (AWS-IP0250). ');
$ax += cidrblock($address,'54.224.0.0/14','No access allowed from AWS (AWS-IP0251). ');
$ax += cidrblock($address,'54.228.0.0/15','No access allowed from AWS (AWS-IP0252). ');
$ax += cidrblock($address,'54.230.0.0/16','No access allowed from AWS (AWS-IP0253). ');
$ax += cidrblock($address,'54.231.0.0/17','No access allowed from AWS (AWS-IP0254). ');
$ax += cidrblock($address,'54.231.128.0/18','No access allowed from AWS (AWS-IP0255). ');
$ax += cidrblock($address,'54.231.192.0/20','No access allowed from AWS (AWS-IP0256). ');
$ax += cidrblock($address,'54.231.224.0/20','No access allowed from AWS (AWS-IP0257). ');
$ax += cidrblock($address,'54.231.240.0/21','No access allowed from AWS (AWS-IP0258). ');
$ax += cidrblock($address,'54.231.248.0/22','No access allowed from AWS (AWS-IP0259). ');
$ax += cidrblock($address,'54.231.252.0/23','No access allowed from AWS (AWS-IP0260). ');
$ax += cidrblock($address,'54.232.0.0/14','No access allowed from AWS (AWS-IP0261). ');
$ax += cidrblock($address,'54.236.0.0/15','No access allowed from AWS (AWS-IP0262). ');
$ax += cidrblock($address,'54.238.0.0/16','No access allowed from AWS (AWS-IP0263). ');
$ax += cidrblock($address,'54.239.0.0/24','No access allowed from AWS (AWS-IP0264). ');
$ax += cidrblock($address,'54.239.1.0/27','No access allowed from AWS (AWS-IP0265). ');
$ax += cidrblock($address,'54.239.1.48/28','No access allowed from AWS (AWS-IP0266). ');
$ax += cidrblock($address,'54.239.1.64/28','No access allowed from AWS (AWS-IP0267). ');
$ax += cidrblock($address,'54.239.2.0/23','No access allowed from AWS (AWS-IP0268). ');
$ax += cidrblock($address,'54.239.4.0/22','No access allowed from AWS (AWS-IP0269). ');
$ax += cidrblock($address,'54.239.8.0/21','No access allowed from AWS (AWS-IP0270). ');
$ax += cidrblock($address,'54.239.16.0/20','No access allowed from AWS (AWS-IP0271). ');
$ax += cidrblock($address,'54.239.32.0/21','No access allowed from AWS (AWS-IP0272). ');
$ax += cidrblock($address,'54.239.48.0/20','No access allowed from AWS (AWS-IP0273). ');
$ax += cidrblock($address,'54.239.96.0/24','No access allowed from AWS (AWS-IP0274). ');
$ax += cidrblock($address,'54.239.98.0/23','No access allowed from AWS (AWS-IP0275). ');
$ax += cidrblock($address,'54.239.100.0/23','No access allowed from AWS (AWS-IP0276). ');
$ax += cidrblock($address,'54.239.104.0/23','No access allowed from AWS (AWS-IP0277). ');
$ax += cidrblock($address,'54.239.108.0/22','No access allowed from AWS (AWS-IP0278). ');
$ax += cidrblock($address,'54.239.116.0/22','No access allowed from AWS (AWS-IP0279). ');
$ax += cidrblock($address,'54.239.120.0/21','No access allowed from AWS (AWS-IP0280). ');
$ax += cidrblock($address,'54.239.128.0/18','No access allowed from AWS (AWS-IP0281). ');
$ax += cidrblock($address,'54.239.192.0/19','No access allowed from AWS (AWS-IP0282). ');
$ax += cidrblock($address,'54.240.128.0/18','No access allowed from AWS (AWS-IP0283). ');
$ax += cidrblock($address,'54.240.192.0/21','No access allowed from AWS (AWS-IP0284). ');
$ax += cidrblock($address,'54.240.200.0/24','No access allowed from AWS (AWS-IP0285). ');
$ax += cidrblock($address,'54.240.202.0/23','No access allowed from AWS (AWS-IP0286). ');
$ax += cidrblock($address,'54.240.204.0/22','No access allowed from AWS (AWS-IP0287). ');
$ax += cidrblock($address,'54.240.208.0/20','No access allowed from AWS (AWS-IP0288). ');
$ax += cidrblock($address,'54.240.225.0/24','No access allowed from AWS (AWS-IP0289). ');
$ax += cidrblock($address,'54.240.226.0/23','No access allowed from AWS (AWS-IP0290). ');
$ax += cidrblock($address,'54.240.228.0/22','No access allowed from AWS (AWS-IP0291). ');
$ax += cidrblock($address,'54.240.232.0/22','No access allowed from AWS (AWS-IP0292). ');
$ax += cidrblock($address,'54.240.244.0/22','No access allowed from AWS (AWS-IP0293). ');
$ax += cidrblock($address,'54.240.248.0/21','No access allowed from AWS (AWS-IP0294). ');
$ax += cidrblock($address,'54.241.0.0/16','No access allowed from AWS (AWS-IP0295). ');
$ax += cidrblock($address,'54.242.0.0/15','No access allowed from AWS (AWS-IP0296). ');
$ax += cidrblock($address,'54.244.0.0/14','No access allowed from AWS (AWS-IP0297). ');
$ax += cidrblock($address,'54.248.0.0/13','No access allowed from AWS (AWS-IP0298). ');
}
}
if(lmatch($address,'6','')) {
$ax += cidrblock($address,'67.202.0.0/18','No access allowed from AWS (AWS-IP0299). ');
}
if(lmatch($address,'7','')) {
$ax += cidrblock($address,'70.132.0.0/18','No access allowed from AWS (AWS-IP0300). ');
$ax += cidrblock($address,'72.21.192.0/19','No access allowed from AWS (AWS-IP0301). ');
$ax += cidrblock($address,'72.44.32.0/19','No access allowed from AWS (AWS-IP0302). ');
$ax += cidrblock($address,'75.101.128.0/17','No access allowed from AWS (AWS-IP0303). ');
$ax += cidrblock($address,'79.125.0.0/17','No access allowed from AWS (AWS-IP0304). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'87.238.80.0/21','No access allowed from AWS (AWS-IP0305). ');
}
if(lmatch($address,'9','')) {
$ax += cidrblock($address,'96.127.0.0/17','No access allowed from AWS (AWS-IP0306). ');
}
$ax += inmatch($query,'awstestaws','Test function. (AWS). ');
// End of list