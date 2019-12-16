<?php
// *php 5 fix
global $ax;
// Torproject Exit Node list
// https://check.torproject.org/exit-addresses
// Last updated 2018-03-09 20:02
// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.
$zbbversion .= ' / TPEN-2018.67.835';

if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'103.1.206.100/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0001). ');
$ax += cidrblock($address,'103.8.79.229/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0002). ');
$ax += cidrblock($address,'103.27.124.82/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0003). ');
$ax += cidrblock($address,'103.27.125.46/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0004). ');
$ax += cidrblock($address,'103.28.52.93/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0005). ');
$ax += cidrblock($address,'103.29.70.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0006). ');
$ax += cidrblock($address,'103.234.220.195/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0007). ');
$ax += cidrblock($address,'103.234.220.197/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0008). ');
$ax += cidrblock($address,'103.236.201.27/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0009). ');
$ax += cidrblock($address,'103.236.201.110/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0010). ');
$ax += cidrblock($address,'103.250.73.13/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0011). ');
$ax += cidrblock($address,'104.131.206.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0012). ');
$ax += cidrblock($address,'104.192.0.58/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0013). ');
$ax += cidrblock($address,'104.218.63.72/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0014). ');
$ax += cidrblock($address,'104.218.63.76/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0015). ');
$ax += cidrblock($address,'104.223.123.98/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0016). ');
$ax += cidrblock($address,'104.236.141.156/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0017). ');
$ax += cidrblock($address,'104.244.74.78/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0018). ');
$ax += cidrblock($address,'107.170.232.75/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0019). ');
$ax += cidrblock($address,'107.181.187.55/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0020). ');
$ax += cidrblock($address,'108.45.108.81/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0021). ');
$ax += cidrblock($address,'108.59.2.227/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0022). ');
$ax += cidrblock($address,'108.69.109.88/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0023). ');
$ax += cidrblock($address,'109.69.67.17/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0024). ');
$ax += cidrblock($address,'109.120.140.127/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0025). ');
$ax += cidrblock($address,'109.169.33.163/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0026). ');
$ax += cidrblock($address,'109.201.133.100/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0027). ');
$ax += cidrblock($address,'109.228.51.164/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0028). ');
$ax += cidrblock($address,'109.236.90.209/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0029). ');
}
if(lmatch($address,'11','')) {
$ax += cidrblock($address,'114.24.100.17/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0030). ');
$ax += cidrblock($address,'115.70.208.19/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0031). ');
$ax += cidrblock($address,'118.163.74.160/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0032). ');
}
if(lmatch($address,'12','')) {
$ax += cidrblock($address,'122.116.50.42/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0033). ');
$ax += cidrblock($address,'124.109.1.207/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0034). ');
$ax += cidrblock($address,'125.212.241.182/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0035). ');
$ax += cidrblock($address,'128.31.0.13/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0036). ');
$ax += cidrblock($address,'128.199.47.160/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0037). ');
$ax += cidrblock($address,'128.199.76.145/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0038). ');
$ax += cidrblock($address,'128.199.213.157/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0039). ');
$ax += cidrblock($address,'128.199.216.170/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0040). ');
$ax += cidrblock($address,'129.21.145.129/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0041). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'130.204.161.3/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0042). ');
$ax += cidrblock($address,'134.90.149.180/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0043). ');
$ax += cidrblock($address,'136.144.175.62/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0044). ');
$ax += cidrblock($address,'137.74.169.241/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0045). ');
$ax += cidrblock($address,'138.197.207.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0046). ');
$ax += cidrblock($address,'139.59.62.94/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0047). ');
$ax += cidrblock($address,'139.59.92.42/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0048). ');
$ax += cidrblock($address,'139.99.130.178/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0049). ');
$ax += cidrblock($address,'139.162.10.72/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0050). ');
$ax += cidrblock($address,'139.162.16.13/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0051). ');
$ax += cidrblock($address,'139.162.28.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0052). ');
$ax += cidrblock($address,'139.162.62.105/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0053). ');
$ax += cidrblock($address,'139.162.124.207/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0054). ');
$ax += cidrblock($address,'139.162.144.133/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0055). ');
$ax += cidrblock($address,'139.162.226.245/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0056). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'14.58.118.69/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0057). ');
$ax += cidrblock($address,'141.255.162.34/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0058). ');
$ax += cidrblock($address,'141.255.162.36/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0059). ');
$ax += cidrblock($address,'141.255.162.38/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0060). ');
$ax += cidrblock($address,'142.4.211.161/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0061). ');
$ax += cidrblock($address,'142.44.154.169/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0062). ');
$ax += cidrblock($address,'142.44.156.128/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0063). ');
$ax += cidrblock($address,'144.217.45.37/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0064). ');
$ax += cidrblock($address,'144.217.60.211/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0065). ');
$ax += cidrblock($address,'144.217.60.239/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0066). ');
$ax += cidrblock($address,'144.217.80.80/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0067). ');
$ax += cidrblock($address,'144.217.94.195/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0068). ');
$ax += cidrblock($address,'144.217.102.236/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0069). ');
$ax += cidrblock($address,'144.217.161.119/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0070). ');
$ax += cidrblock($address,'144.217.164.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0071). ');
$ax += cidrblock($address,'144.217.164.104/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0072). ');
$ax += cidrblock($address,'144.217.174.248/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0073). ');
$ax += cidrblock($address,'144.217.245.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0074). ');
$ax += cidrblock($address,'144.217.245.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0075). ');
$ax += cidrblock($address,'145.239.82.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0076). ');
$ax += cidrblock($address,'145.239.91.37/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0077). ');
$ax += cidrblock($address,'146.185.177.103/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0078). ');
$ax += cidrblock($address,'149.56.223.241/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0079). ');
$ax += cidrblock($address,'149.202.170.60/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0080). ');
$ax += cidrblock($address,'149.202.238.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0081). ');
}
if(lmatch($address,'15','')) {
$ax += cidrblock($address,'151.80.56.62/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0082). ');
$ax += cidrblock($address,'155.4.250.85/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0083). ');
$ax += cidrblock($address,'158.69.201.47/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0084). ');
$ax += cidrblock($address,'158.255.6.242/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0085). ');
$ax += cidrblock($address,'158.255.7.61/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0086). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'160.119.249.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0087). ');
$ax += cidrblock($address,'160.119.249.239/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0088). ');
$ax += cidrblock($address,'160.119.249.240/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0089). ');
$ax += cidrblock($address,'160.202.162.186/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0090). ');
$ax += cidrblock($address,'162.104.212.81/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0091). ');
$ax += cidrblock($address,'162.213.0.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0092). ');
$ax += cidrblock($address,'162.213.3.221/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0093). ');
$ax += cidrblock($address,'162.243.166.137/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0094). ');
$ax += cidrblock($address,'162.247.72.202/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0095). ');
$ax += cidrblock($address,'162.247.73.74/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0096). ');
$ax += cidrblock($address,'162.247.73.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0097). ');
$ax += cidrblock($address,'163.172.41.228/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0098). ');
$ax += cidrblock($address,'163.172.45.46/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0099). ');
$ax += cidrblock($address,'163.172.67.180/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0100). ');
$ax += cidrblock($address,'163.172.97.165/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0101). ');
$ax += cidrblock($address,'163.172.132.199/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0102). ');
$ax += cidrblock($address,'163.172.151.47/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0103). ');
$ax += cidrblock($address,'163.172.154.52/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0104). ');
$ax += cidrblock($address,'163.172.160.182/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0105). ');
$ax += cidrblock($address,'163.172.171.163/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0106). ');
$ax += cidrblock($address,'163.172.174.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0107). ');
$ax += cidrblock($address,'163.172.223.200/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0108). ');
$ax += cidrblock($address,'164.77.133.220/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0109). ');
$ax += cidrblock($address,'164.132.51.91/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0110). ');
$ax += cidrblock($address,'164.132.106.162/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0111). ');
$ax += cidrblock($address,'165.227.39.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0112). ');
$ax += cidrblock($address,'165.227.45.125/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0113). ');
$ax += cidrblock($address,'166.70.207.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0114). ');
$ax += cidrblock($address,'167.114.34.150/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0115). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'170.250.140.52/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0116). ');
$ax += cidrblock($address,'171.25.193.20/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0117). ');
$ax += cidrblock($address,'171.25.193.25/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0118). ');
$ax += cidrblock($address,'171.25.193.77/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0119). ');
$ax += cidrblock($address,'171.25.193.78/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0120). ');
$ax += cidrblock($address,'171.25.193.235/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0121). ');
$ax += cidrblock($address,'172.98.193.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0122). ');
$ax += cidrblock($address,'172.104.29.241/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0123). ');
$ax += cidrblock($address,'172.104.252.154/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0124). ');
$ax += cidrblock($address,'172.105.218.246/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0125). ');
$ax += cidrblock($address,'172.105.231.26/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0126). ');
$ax += cidrblock($address,'173.212.228.203/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0127). ');
$ax += cidrblock($address,'173.212.244.116/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0128). ');
$ax += cidrblock($address,'173.244.192.128/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0129). ');
$ax += cidrblock($address,'173.249.18.113/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0130). ');
$ax += cidrblock($address,'173.254.216.66/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0131). ');
$ax += cidrblock($address,'173.255.226.142/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0132). ');
$ax += cidrblock($address,'173.255.229.8/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0133). ');
$ax += cidrblock($address,'173.255.253.173/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0134). ');
$ax += cidrblock($address,'176.8.24.174/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0135). ');
$ax += cidrblock($address,'176.8.24.228/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0136). ');
$ax += cidrblock($address,'176.10.99.200/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0137). ');
$ax += cidrblock($address,'176.10.104.240/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0138). ');
$ax += cidrblock($address,'176.10.104.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0139). ');
$ax += cidrblock($address,'176.10.107.180/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0140). ');
$ax += cidrblock($address,'176.31.45.3/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0141). ');
$ax += cidrblock($address,'176.31.64.33/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0142). ');
$ax += cidrblock($address,'176.31.180.157/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0143). ');
$ax += cidrblock($address,'176.31.200.122/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0144). ');
$ax += cidrblock($address,'176.38.163.77/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0145). ');
$ax += cidrblock($address,'176.53.90.26/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0146). ');
$ax += cidrblock($address,'176.58.89.182/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0147). ');
$ax += cidrblock($address,'176.58.100.98/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0148). ');
$ax += cidrblock($address,'176.67.168.210/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0149). ');
$ax += cidrblock($address,'176.116.104.49/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0150). ');
$ax += cidrblock($address,'176.121.10.44/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0151). ');
$ax += cidrblock($address,'176.121.10.52/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0152). ');
$ax += cidrblock($address,'176.121.81.51/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0153). ');
$ax += cidrblock($address,'176.123.9.144/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0154). ');
$ax += cidrblock($address,'176.123.26.6/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0155). ');
$ax += cidrblock($address,'176.126.70.240/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0156). ');
$ax += cidrblock($address,'176.126.252.11/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0157). ');
$ax += cidrblock($address,'176.126.252.12/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0158). ');
$ax += cidrblock($address,'176.210.191.155/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0159). ');
$ax += cidrblock($address,'176.223.113.26/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0160). ');
$ax += cidrblock($address,'177.54.158.132/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0161). ');
$ax += cidrblock($address,'177.99.154.155/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0162). ');
$ax += cidrblock($address,'177.134.157.161/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0163). ');
$ax += cidrblock($address,'178.7.15.45/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0164). ');
$ax += cidrblock($address,'178.17.166.146/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0165). ');
$ax += cidrblock($address,'178.17.170.13/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0166). ');
$ax += cidrblock($address,'178.17.170.81/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0167). ');
$ax += cidrblock($address,'178.17.170.135/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0168). ');
$ax += cidrblock($address,'178.17.170.149/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0169). ');
$ax += cidrblock($address,'178.17.170.156/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0170). ');
$ax += cidrblock($address,'178.17.170.164/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0171). ');
$ax += cidrblock($address,'178.17.170.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0172). ');
$ax += cidrblock($address,'178.17.170.196/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0173). ');
$ax += cidrblock($address,'178.17.171.114/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0174). ');
$ax += cidrblock($address,'178.17.174.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0175). ');
$ax += cidrblock($address,'178.17.174.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0176). ');
$ax += cidrblock($address,'178.17.174.196/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0177). ');
$ax += cidrblock($address,'178.17.174.198/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0178). ');
$ax += cidrblock($address,'178.17.174.207/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0179). ');
$ax += cidrblock($address,'178.17.174.227/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0180). ');
$ax += cidrblock($address,'178.18.83.215/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0181). ');
$ax += cidrblock($address,'178.20.55.16/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0182). ');
$ax += cidrblock($address,'178.20.55.18/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0183). ');
$ax += cidrblock($address,'178.32.147.150/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0184). ');
$ax += cidrblock($address,'178.62.230.233/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0185). ');
$ax += cidrblock($address,'178.63.97.34/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0186). ');
$ax += cidrblock($address,'178.165.72.177/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0187). ');
$ax += cidrblock($address,'178.175.129.91/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0188). ');
$ax += cidrblock($address,'178.175.131.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0189). ');
$ax += cidrblock($address,'178.175.135.99/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0190). ');
$ax += cidrblock($address,'178.175.135.100/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0191). ');
$ax += cidrblock($address,'178.175.135.102/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0192). ');
$ax += cidrblock($address,'178.175.148.138/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0193). ');
$ax += cidrblock($address,'178.209.42.84/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0194). ');
$ax += cidrblock($address,'178.211.45.18/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0195). ');
$ax += cidrblock($address,'178.238.237.44/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0196). ');
$ax += cidrblock($address,'178.254.31.209/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0197). ');
$ax += cidrblock($address,'179.43.146.230/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0198). ');
}
if(lmatch($address,'18','')) {
$ax += cidrblock($address,'18.248.1.85/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0199). ');
$ax += cidrblock($address,'18.248.2.85/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0200). ');
$ax += cidrblock($address,'181.40.18.202/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0201). ');
$ax += cidrblock($address,'182.253.208.19/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0202). ');
$ax += cidrblock($address,'184.105.220.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0203). ');
$ax += cidrblock($address,'185.10.68.114/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0204). ');
$ax += cidrblock($address,'185.10.68.195/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0205). ');
$ax += cidrblock($address,'185.11.167.4/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0206). ');
$ax += cidrblock($address,'185.14.28.150/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0207). ');
$ax += cidrblock($address,'185.15.194.233/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0208). ');
$ax += cidrblock($address,'185.16.173.84/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0209). ');
$ax += cidrblock($address,'185.19.30.0/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0210). ');
$ax += cidrblock($address,'185.29.8.136/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0211). ');
$ax += cidrblock($address,'185.34.33.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0212). ');
$ax += cidrblock($address,'185.35.138.92/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0213). ');
$ax += cidrblock($address,'185.38.14.171/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0214). ');
$ax += cidrblock($address,'185.38.14.215/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0215). ');
$ax += cidrblock($address,'185.47.62.171/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0216). ');
$ax += cidrblock($address,'185.56.80.242/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0217). ');
$ax += cidrblock($address,'185.58.226.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0218). ');
$ax += cidrblock($address,'185.62.57.91/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0219). ');
$ax += cidrblock($address,'185.65.205.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0220). ');
$ax += cidrblock($address,'185.66.200.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0221). ');
$ax += cidrblock($address,'185.72.244.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0222). ');
$ax += cidrblock($address,'185.82.216.233/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0223). ');
$ax += cidrblock($address,'185.83.215.80/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0224). ');
$ax += cidrblock($address,'185.86.148.90/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0225). ');
$ax += cidrblock($address,'185.86.151.21/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0226). ');
$ax += cidrblock($address,'185.87.185.45/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0227). ');
$ax += cidrblock($address,'185.100.84.82/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0228). ');
$ax += cidrblock($address,'185.100.84.108/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0229). ');
$ax += cidrblock($address,'185.100.85.61/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0230). ');
$ax += cidrblock($address,'185.100.85.101/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0231). ');
$ax += cidrblock($address,'185.100.85.132/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0232). ');
$ax += cidrblock($address,'185.100.85.147/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0233). ');
$ax += cidrblock($address,'185.100.85.190/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0234). ');
$ax += cidrblock($address,'185.100.86.128/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0235). ');
$ax += cidrblock($address,'185.100.86.154/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0236). ');
$ax += cidrblock($address,'185.100.86.182/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0237). ');
$ax += cidrblock($address,'185.100.87.206/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0238). ');
$ax += cidrblock($address,'185.104.120.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0239). ');
$ax += cidrblock($address,'185.104.120.4/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0240). ');
$ax += cidrblock($address,'185.104.120.7/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0241). ');
$ax += cidrblock($address,'185.104.120.60/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0242). ');
$ax += cidrblock($address,'185.112.146.83/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0243). ');
$ax += cidrblock($address,'185.112.146.138/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0244). ');
$ax += cidrblock($address,'185.117.118.234/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0245). ');
$ax += cidrblock($address,'185.117.215.9/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0246). ');
$ax += cidrblock($address,'185.123.117.11/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0247). ');
$ax += cidrblock($address,'185.127.25.68/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0248). ');
$ax += cidrblock($address,'185.129.62.62/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0249). ');
$ax += cidrblock($address,'185.143.230.231/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0250). ');
$ax += cidrblock($address,'185.145.131.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0251). ');
$ax += cidrblock($address,'185.162.249.232/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0252). ');
$ax += cidrblock($address,'185.165.168.77/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0253). ');
$ax += cidrblock($address,'185.165.168.229/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0254). ');
$ax += cidrblock($address,'185.165.169.55/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0255). ');
$ax += cidrblock($address,'185.165.169.71/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0256). ');
$ax += cidrblock($address,'185.167.160.7/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0257). ');
$ax += cidrblock($address,'185.169.43.68/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0258). ');
$ax += cidrblock($address,'185.174.174.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0259). ');
$ax += cidrblock($address,'185.191.204.254/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0260). ');
$ax += cidrblock($address,'185.216.35.26/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0261). ');
$ax += cidrblock($address,'185.217.93.22/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0262). ');
$ax += cidrblock($address,'185.220.101.0/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0263). ');
$ax += cidrblock($address,'185.220.101.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0264). ');
$ax += cidrblock($address,'185.220.101.4/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0265). ');
$ax += cidrblock($address,'185.220.101.6/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0266). ');
$ax += cidrblock($address,'185.220.101.8/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0267). ');
$ax += cidrblock($address,'185.220.101.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0268). ');
$ax += cidrblock($address,'185.220.101.12/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0269). ');
$ax += cidrblock($address,'185.220.101.15/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0270). ');
$ax += cidrblock($address,'185.220.101.20/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0271). ');
$ax += cidrblock($address,'185.220.101.22/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0272). ');
$ax += cidrblock($address,'185.220.101.24/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0273). ');
$ax += cidrblock($address,'185.220.101.26/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0274). ');
$ax += cidrblock($address,'185.220.101.28/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0275). ');
$ax += cidrblock($address,'185.220.101.30/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0276). ');
$ax += cidrblock($address,'185.220.101.32/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0277). ');
$ax += cidrblock($address,'185.220.101.34/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0278). ');
$ax += cidrblock($address,'185.220.101.44/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0279). ');
$ax += cidrblock($address,'185.220.101.46/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0280). ');
$ax += cidrblock($address,'185.225.68.13/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0281). ');
$ax += cidrblock($address,'185.227.82.9/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0282). ');
$ax += cidrblock($address,'186.120.225.119/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0283). ');
$ax += cidrblock($address,'187.20.55.95/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0284). ');
$ax += cidrblock($address,'188.65.144.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0285). ');
$ax += cidrblock($address,'188.68.45.180/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0286). ');
$ax += cidrblock($address,'188.165.59.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0287). ');
$ax += cidrblock($address,'188.166.127.251/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0288). ');
$ax += cidrblock($address,'188.214.104.146/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0289). ');
$ax += cidrblock($address,'188.235.14.87/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0290). ');
$ax += cidrblock($address,'189.84.21.44/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0291). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'190.10.8.50/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0292). ');
$ax += cidrblock($address,'191.96.249.110/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0293). ');
$ax += cidrblock($address,'192.3.169.210/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0294). ');
$ax += cidrblock($address,'192.34.80.176/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0295). ');
$ax += cidrblock($address,'192.36.27.4/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0296). ');
$ax += cidrblock($address,'192.36.27.6/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0297). ');
$ax += cidrblock($address,'192.42.113.102/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0298). ');
$ax += cidrblock($address,'192.42.115.101/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0299). ');
$ax += cidrblock($address,'192.42.115.102/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0300). ');
$ax += cidrblock($address,'192.42.116.16/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0301). ');
$ax += cidrblock($address,'192.81.135.229/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0302). ');
$ax += cidrblock($address,'192.87.28.28/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0303). ');
$ax += cidrblock($address,'192.87.28.82/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0304). ');
$ax += cidrblock($address,'192.99.247.1/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0305). ');
$ax += cidrblock($address,'192.155.81.225/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0306). ');
$ax += cidrblock($address,'192.155.95.222/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0307). ');
$ax += cidrblock($address,'192.160.102.164/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0308). ');
$ax += cidrblock($address,'192.160.102.166/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0309). ');
$ax += cidrblock($address,'192.160.102.168/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0310). ');
$ax += cidrblock($address,'192.160.102.170/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0311). ');
$ax += cidrblock($address,'192.195.80.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0312). ');
$ax += cidrblock($address,'193.15.16.4/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0313). ');
$ax += cidrblock($address,'193.19.118.171/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0314). ');
$ax += cidrblock($address,'193.90.12.115/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0315). ');
$ax += cidrblock($address,'193.90.12.116/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0316). ');
$ax += cidrblock($address,'193.107.85.56/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0317). ');
$ax += cidrblock($address,'193.107.85.62/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0318). ');
$ax += cidrblock($address,'193.110.157.151/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0319). ');
$ax += cidrblock($address,'193.138.52.161/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0320). ');
$ax += cidrblock($address,'193.171.202.150/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0321). ');
$ax += cidrblock($address,'193.201.225.45/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0322). ');
$ax += cidrblock($address,'194.67.214.123/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0323). ');
$ax += cidrblock($address,'194.88.143.66/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0324). ');
$ax += cidrblock($address,'195.22.24.162/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0325). ');
$ax += cidrblock($address,'195.22.125.136/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0326). ');
$ax += cidrblock($address,'195.22.125.141/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0327). ');
$ax += cidrblock($address,'195.22.125.146/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0328). ');
$ax += cidrblock($address,'195.22.125.148/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0329). ');
$ax += cidrblock($address,'195.22.126.147/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0330). ');
$ax += cidrblock($address,'195.91.66.84/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0331). ');
$ax += cidrblock($address,'195.123.212.34/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0332). ');
$ax += cidrblock($address,'195.123.233.59/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0333). ');
$ax += cidrblock($address,'195.154.105.205/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0334). ');
$ax += cidrblock($address,'195.201.4.207/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0335). ');
$ax += cidrblock($address,'195.254.134.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0336). ');
$ax += cidrblock($address,'195.254.134.242/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0337). ');
$ax += cidrblock($address,'195.254.135.76/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0338). ');
$ax += cidrblock($address,'196.41.123.180/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0339). ');
$ax += cidrblock($address,'196.54.55.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0340). ');
$ax += cidrblock($address,'197.231.221.211/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0341). ');
$ax += cidrblock($address,'198.46.138.18/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0342). ');
$ax += cidrblock($address,'198.50.191.95/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0343). ');
$ax += cidrblock($address,'198.50.200.129/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0344). ');
$ax += cidrblock($address,'198.50.200.131/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0345). ');
$ax += cidrblock($address,'198.50.200.134/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0346). ');
$ax += cidrblock($address,'198.50.231.22/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0347). ');
$ax += cidrblock($address,'198.58.100.240/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0348). ');
$ax += cidrblock($address,'198.58.107.53/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0349). ');
$ax += cidrblock($address,'198.71.81.66/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0350). ');
$ax += cidrblock($address,'198.73.50.71/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0351). ');
$ax += cidrblock($address,'198.74.49.228/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0352). ');
$ax += cidrblock($address,'198.96.155.3/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0353). ');
$ax += cidrblock($address,'198.98.61.36/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0354). ');
$ax += cidrblock($address,'198.101.8.214/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0355). ');
$ax += cidrblock($address,'198.167.223.38/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0356). ');
$ax += cidrblock($address,'198.211.122.191/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0357). ');
$ax += cidrblock($address,'198.211.125.85/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0358). ');
$ax += cidrblock($address,'198.245.60.8/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0359). ');
$ax += cidrblock($address,'199.87.154.255/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0360). ');
$ax += cidrblock($address,'199.127.226.150/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0361). ');
$ax += cidrblock($address,'199.195.250.77/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0362). ');
$ax += cidrblock($address,'199.249.223.40/29','No access allowed from Tor Project Exit Nodes. (TPEN-IP0363). ');
$ax += cidrblock($address,'199.249.223.48/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0364). ');
$ax += cidrblock($address,'199.249.223.60/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0365). ');
$ax += cidrblock($address,'199.249.223.64/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0366). ');
$ax += cidrblock($address,'199.249.223.68/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0367). ');
$ax += cidrblock($address,'199.249.223.71/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0368). ');
$ax += cidrblock($address,'199.249.223.72/29','No access allowed from Tor Project Exit Nodes. (TPEN-IP0369). ');
$ax += cidrblock($address,'199.249.223.81/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0370). ');
$ax += cidrblock($address,'199.249.224.40/29','No access allowed from Tor Project Exit Nodes. (TPEN-IP0371). ');
$ax += cidrblock($address,'199.249.224.48/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0372). ');
$ax += cidrblock($address,'199.249.224.60/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0373). ');
$ax += cidrblock($address,'199.249.224.64/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0374). ');
$ax += cidrblock($address,'199.249.224.68/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0375). ');
}
}
if(lmatch($address,'2','')) {
if(lmatch($address,'20','')) {
$ax += cidrblock($address,'201.1.165.31/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0376). ');
$ax += cidrblock($address,'204.8.156.142/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0377). ');
$ax += cidrblock($address,'204.11.50.131/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0378). ');
$ax += cidrblock($address,'204.17.56.42/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0379). ');
$ax += cidrblock($address,'204.27.60.147/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0380). ');
$ax += cidrblock($address,'204.85.191.30/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0381). ');
$ax += cidrblock($address,'204.194.29.4/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0382). ');
$ax += cidrblock($address,'205.168.84.133/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0383). ');
$ax += cidrblock($address,'206.248.184.127/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0384). ');
$ax += cidrblock($address,'207.192.69.165/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0385). ');
$ax += cidrblock($address,'207.244.70.35/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0386). ');
$ax += cidrblock($address,'208.113.129.191/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0387). ');
$ax += cidrblock($address,'209.123.234.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0388). ');
$ax += cidrblock($address,'209.126.101.29/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0389). ');
}
if(lmatch($address,'21','')) {
$ax += cidrblock($address,'210.3.102.152/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0390). ');
$ax += cidrblock($address,'210.50.9.88/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0391). ');
$ax += cidrblock($address,'210.140.10.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0392). ');
$ax += cidrblock($address,'212.16.104.33/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0393). ');
$ax += cidrblock($address,'212.19.17.213/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0394). ');
$ax += cidrblock($address,'212.21.66.6/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0395). ');
$ax += cidrblock($address,'212.47.227.114/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0396). ');
$ax += cidrblock($address,'212.47.229.60/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0397). ');
$ax += cidrblock($address,'212.47.246.21/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0398). ');
$ax += cidrblock($address,'212.51.156.234/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0399). ');
$ax += cidrblock($address,'212.81.199.159/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0400). ');
$ax += cidrblock($address,'212.83.40.239/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0401). ');
$ax += cidrblock($address,'212.92.219.15/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0402). ');
$ax += cidrblock($address,'213.95.149.22/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0403). ');
$ax += cidrblock($address,'213.108.105.71/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0404). ');
$ax += cidrblock($address,'213.108.105.92/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0405). ');
$ax += cidrblock($address,'213.252.140.118/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0406). ');
$ax += cidrblock($address,'216.17.101.79/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0407). ');
$ax += cidrblock($address,'216.218.134.12/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0408). ');
$ax += cidrblock($address,'216.218.222.12/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0409). ');
$ax += cidrblock($address,'216.218.222.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0410). ');
$ax += cidrblock($address,'216.239.90.19/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0411). ');
$ax += cidrblock($address,'217.112.131.7/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0412). ');
$ax += cidrblock($address,'217.147.169.75/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0413). ');
$ax += cidrblock($address,'217.170.197.83/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0414). ');
$ax += cidrblock($address,'217.170.197.89/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0415). ');
$ax += cidrblock($address,'217.182.74.145/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0416). ');
$ax += cidrblock($address,'217.182.78.177/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0417). ');
$ax += cidrblock($address,'217.182.95.16/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0418). ');
}
if(lmatch($address,'22','')) {
$ax += cidrblock($address,'220.227.48.213/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0419). ');
$ax += cidrblock($address,'223.26.48.248/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0420). ');
}
if(lmatch($address,'23','')) {
$ax += cidrblock($address,'23.92.27.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0421). ');
$ax += cidrblock($address,'23.92.28.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0422). ');
$ax += cidrblock($address,'23.129.64.101/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0423). ');
$ax += cidrblock($address,'23.129.64.102/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0424). ');
$ax += cidrblock($address,'23.129.64.104/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0425). ');
$ax += cidrblock($address,'23.238.162.11/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0426). ');
}
if(lmatch($address,'24','')) {
$ax += cidrblock($address,'24.3.111.83/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0427). ');
}
if(lmatch($address,'27','')) {
$ax += cidrblock($address,'27.54.89.202/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0428). ');
$ax += cidrblock($address,'27.124.124.126/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0429). ');
}
}
if(lmatch($address,'3','')) {
if(lmatch($address,'31','')) {
$ax += cidrblock($address,'31.31.72.24/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0430). ');
$ax += cidrblock($address,'31.31.74.47/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0431). ');
$ax += cidrblock($address,'31.31.74.131/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0432). ');
$ax += cidrblock($address,'31.131.2.19/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0433). ');
$ax += cidrblock($address,'31.131.4.171/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0434). ');
$ax += cidrblock($address,'31.135.255.209/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0435). ');
$ax += cidrblock($address,'31.185.27.201/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0436). ');
$ax += cidrblock($address,'31.185.104.19/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0437). ');
$ax += cidrblock($address,'31.185.104.20/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0438). ');
$ax += cidrblock($address,'31.220.42.86/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0439). ');
}
if(lmatch($address,'35','')) {
$ax += cidrblock($address,'35.248.27.205/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0440). ');
}
if(lmatch($address,'37','')) {
$ax += cidrblock($address,'37.48.120.196/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0441). ');
$ax += cidrblock($address,'37.59.112.7/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0442). ');
$ax += cidrblock($address,'37.97.228.159/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0443). ');
$ax += cidrblock($address,'37.139.8.104/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0444). ');
$ax += cidrblock($address,'37.139.31.238/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0445). ');
$ax += cidrblock($address,'37.187.7.74/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0446). ');
$ax += cidrblock($address,'37.187.94.86/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0447). ');
$ax += cidrblock($address,'37.187.96.78/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0448). ');
$ax += cidrblock($address,'37.187.99.161/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0449). ');
$ax += cidrblock($address,'37.187.106.108/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0450). ');
$ax += cidrblock($address,'37.187.117.138/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0451). ');
$ax += cidrblock($address,'37.187.180.18/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0452). ');
$ax += cidrblock($address,'37.187.239.8/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0453). ');
$ax += cidrblock($address,'37.200.98.117/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0454). ');
$ax += cidrblock($address,'37.205.10.140/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0455). ');
$ax += cidrblock($address,'37.218.240.21/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0456). ');
$ax += cidrblock($address,'37.218.240.68/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0457). ');
$ax += cidrblock($address,'37.218.240.80/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0458). ');
$ax += cidrblock($address,'37.218.240.110/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0459). ');
$ax += cidrblock($address,'37.218.245.25/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0460). ');
$ax += cidrblock($address,'37.220.35.202/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0461). ');
$ax += cidrblock($address,'37.220.36.240/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0462). ');
$ax += cidrblock($address,'37.228.129.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0463). ');
$ax += cidrblock($address,'37.228.129.20/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0464). ');
$ax += cidrblock($address,'37.233.99.157/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0465). ');
$ax += cidrblock($address,'37.233.102.65/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0466). ');
$ax += cidrblock($address,'37.233.103.114/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0467). ');
}
}
if(lmatch($address,'4','')) {
if(lmatch($address,'40','')) {
$ax += cidrblock($address,'40.69.62.87/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0468). ');
}
if(lmatch($address,'41','')) {
$ax += cidrblock($address,'41.78.128.113/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0469). ');
$ax += cidrblock($address,'41.101.219.239/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0470). ');
}
if(lmatch($address,'43','')) {
$ax += cidrblock($address,'43.252.228.31/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0471). ');
$ax += cidrblock($address,'43.252.230.129/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0472). ');
}
if(lmatch($address,'45','')) {
$ax += cidrblock($address,'45.32.116.97/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0473). ');
$ax += cidrblock($address,'45.33.23.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0474). ');
$ax += cidrblock($address,'45.33.48.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0475). ');
$ax += cidrblock($address,'45.56.105.93/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0476). ');
$ax += cidrblock($address,'45.62.236.62/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0477). ');
$ax += cidrblock($address,'45.62.236.67/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0478). ');
$ax += cidrblock($address,'45.62.245.119/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0479). ');
$ax += cidrblock($address,'45.62.249.195/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0480). ');
$ax += cidrblock($address,'45.62.251.245/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0481). ');
$ax += cidrblock($address,'45.62.253.113/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0482). ');
$ax += cidrblock($address,'45.76.115.159/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0483). ');
$ax += cidrblock($address,'45.76.179.27/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0484). ');
$ax += cidrblock($address,'45.79.73.22/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0485). ');
$ax += cidrblock($address,'45.79.137.11/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0486). ');
$ax += cidrblock($address,'45.79.144.222/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0487). ');
$ax += cidrblock($address,'45.79.152.46/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0488). ');
}
if(lmatch($address,'46','')) {
$ax += cidrblock($address,'46.4.77.210/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0489). ');
$ax += cidrblock($address,'46.4.95.244/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0490). ');
$ax += cidrblock($address,'46.17.40.220/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0491). ');
$ax += cidrblock($address,'46.17.97.112/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0492). ');
$ax += cidrblock($address,'46.29.248.238/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0493). ');
$ax += cidrblock($address,'46.41.150.74/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0494). ');
$ax += cidrblock($address,'46.98.201.91/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0495). ');
$ax += cidrblock($address,'46.98.208.143/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0496). ');
$ax += cidrblock($address,'46.98.208.161/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0497). ');
$ax += cidrblock($address,'46.98.209.146/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0498). ');
$ax += cidrblock($address,'46.98.209.215/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0499). ');
$ax += cidrblock($address,'46.101.127.145/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0500). ');
$ax += cidrblock($address,'46.101.139.248/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0501). ');
$ax += cidrblock($address,'46.101.161.246/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0502). ');
$ax += cidrblock($address,'46.165.230.5/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0503). ');
$ax += cidrblock($address,'46.165.254.166/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0504). ');
$ax += cidrblock($address,'46.166.162.53/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0505). ');
$ax += cidrblock($address,'46.167.245.51/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0506). ');
$ax += cidrblock($address,'46.182.18.29/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0507). ');
$ax += cidrblock($address,'46.182.18.40/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0508). ');
$ax += cidrblock($address,'46.182.19.15/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0509). ');
$ax += cidrblock($address,'46.182.19.219/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0510). ');
$ax += cidrblock($address,'46.182.106.190/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0511). ');
$ax += cidrblock($address,'46.194.0.132/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0512). ');
$ax += cidrblock($address,'46.226.108.26/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0513). ');
$ax += cidrblock($address,'46.233.0.70/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0514). ');
$ax += cidrblock($address,'46.235.227.70/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0515). ');
$ax += cidrblock($address,'46.246.41.68/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0516). ');
$ax += cidrblock($address,'46.246.49.219/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0517). ');
$ax += cidrblock($address,'46.249.37.143/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0518). ');
}
}
if(lmatch($address,'5','')) {
$ax += cidrblock($address,'5.2.64.111/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0519). ');
$ax += cidrblock($address,'5.2.67.179/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0520). ');
$ax += cidrblock($address,'5.2.70.160/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0521). ');
$ax += cidrblock($address,'5.2.72.66/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0522). ');
$ax += cidrblock($address,'5.2.76.139/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0523). ');
$ax += cidrblock($address,'5.2.77.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0524). ');
$ax += cidrblock($address,'5.3.210.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0525). ');
$ax += cidrblock($address,'5.9.158.75/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0526). ');
$ax += cidrblock($address,'5.9.195.140/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0527). ');
$ax += cidrblock($address,'5.39.86.206/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0528). ');
$ax += cidrblock($address,'5.39.217.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0529). ');
$ax += cidrblock($address,'5.61.34.63/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0530). ');
$ax += cidrblock($address,'5.79.68.161/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0531). ');
$ax += cidrblock($address,'5.79.86.15/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0532). ');
$ax += cidrblock($address,'5.79.113.137/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0533). ');
$ax += cidrblock($address,'5.135.65.145/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0534). ');
$ax += cidrblock($address,'5.135.158.101/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0535). ');
$ax += cidrblock($address,'5.165.246.20/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0536). ');
$ax += cidrblock($address,'5.188.10.8/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0537). ');
$ax += cidrblock($address,'5.189.146.133/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0538). ');
$ax += cidrblock($address,'5.189.188.111/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0539). ');
$ax += cidrblock($address,'5.196.0.149/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0540). ');
$ax += cidrblock($address,'5.196.1.129/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0541). ');
$ax += cidrblock($address,'5.196.29.217/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0542). ');
$ax += cidrblock($address,'5.196.66.162/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0543). ');
$ax += cidrblock($address,'5.196.239.114/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0544). ');
$ax += cidrblock($address,'5.199.130.127/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0545). ');
$ax += cidrblock($address,'5.248.10.53/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0546). ');
$ax += cidrblock($address,'5.248.126.242/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0547). ');
$ax += cidrblock($address,'5.254.79.66/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0548). ');
$ax += cidrblock($address,'5.254.112.154/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0549). ');
if(lmatch($address,'50','')) {
$ax += cidrblock($address,'50.7.151.127/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0550). ');
$ax += cidrblock($address,'50.7.176.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0551). ');
$ax += cidrblock($address,'50.99.193.105/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0552). ');
$ax += cidrblock($address,'50.116.30.165/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0553). ');
$ax += cidrblock($address,'50.116.37.141/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0554). ');
$ax += cidrblock($address,'50.247.195.124/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0555). ');
}
if(lmatch($address,'51','')) {
$ax += cidrblock($address,'51.15.3.40/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0556). ');
$ax += cidrblock($address,'51.15.13.245/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0557). ');
$ax += cidrblock($address,'51.15.34.214/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0558). ');
$ax += cidrblock($address,'51.15.34.228/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0559). ');
$ax += cidrblock($address,'51.15.37.97/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0560). ');
$ax += cidrblock($address,'51.15.43.205/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0561). ');
$ax += cidrblock($address,'51.15.49.134/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0562). ');
$ax += cidrblock($address,'51.15.50.134/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0563). ');
$ax += cidrblock($address,'51.15.53.83/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0564). ');
$ax += cidrblock($address,'51.15.53.118/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0565). ');
$ax += cidrblock($address,'51.15.56.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0566). ');
$ax += cidrblock($address,'51.15.63.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0567). ');
$ax += cidrblock($address,'51.15.63.229/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0568). ');
$ax += cidrblock($address,'51.15.64.39/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0569). ');
$ax += cidrblock($address,'51.15.64.212/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0570). ');
$ax += cidrblock($address,'51.15.72.211/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0571). ');
$ax += cidrblock($address,'51.15.76.142/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0572). ');
$ax += cidrblock($address,'51.15.78.21/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0573). ');
$ax += cidrblock($address,'51.15.80.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0574). ');
$ax += cidrblock($address,'51.15.81.183/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0575). ');
$ax += cidrblock($address,'51.15.81.222/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0576). ');
$ax += cidrblock($address,'51.15.82.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0577). ');
$ax += cidrblock($address,'51.15.86.162/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0578). ');
$ax += cidrblock($address,'51.15.143.28/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0579). ');
$ax += cidrblock($address,'51.15.153.164/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0580). ');
$ax += cidrblock($address,'51.15.205.192/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0581). ');
$ax += cidrblock($address,'51.15.209.128/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0582). ');
$ax += cidrblock($address,'51.254.208.245/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0583). ');
$ax += cidrblock($address,'51.255.202.66/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0584). ');
}
if(lmatch($address,'54','')) {
$ax += cidrblock($address,'54.36.222.37/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0585). ');
$ax += cidrblock($address,'54.37.16.241/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0586). ');
$ax += cidrblock($address,'54.37.68.143/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0587). ');
$ax += cidrblock($address,'54.39.59.115/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0588). ');
$ax += cidrblock($address,'54.93.60.149/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0589). ');
}
if(lmatch($address,'58','')) {
$ax += cidrblock($address,'58.138.19.160/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0590). ');
}
if(lmatch($address,'59','')) {
$ax += cidrblock($address,'59.127.163.155/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0591). ');
$ax += cidrblock($address,'59.179.17.196/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0592). ');
}
}
if(lmatch($address,'6','')) {
if(lmatch($address,'60','')) {
$ax += cidrblock($address,'60.248.162.179/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0593). ');
}
if(lmatch($address,'61','')) {
$ax += cidrblock($address,'61.223.71.137/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0594). ');
}
if(lmatch($address,'62','')) {
$ax += cidrblock($address,'62.141.39.47/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0595). ');
$ax += cidrblock($address,'62.148.226.88/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0596). ');
$ax += cidrblock($address,'62.205.133.251/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0597). ');
$ax += cidrblock($address,'62.210.13.58/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0598). ');
$ax += cidrblock($address,'62.210.28.211/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0599). ');
$ax += cidrblock($address,'62.210.37.82/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0600). ');
$ax += cidrblock($address,'62.210.71.205/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0601). ');
$ax += cidrblock($address,'62.210.105.86/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0602). ');
$ax += cidrblock($address,'62.210.105.116/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0603). ');
$ax += cidrblock($address,'62.210.110.181/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0604). ');
$ax += cidrblock($address,'62.210.129.246/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0605). ');
$ax += cidrblock($address,'62.210.157.133/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0606). ');
$ax += cidrblock($address,'62.210.207.52/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0607). ');
$ax += cidrblock($address,'62.212.73.141/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0608). ');
$ax += cidrblock($address,'62.212.95.147/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0609). ');
$ax += cidrblock($address,'62.219.3.47/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0610). ');
}
if(lmatch($address,'64','')) {
$ax += cidrblock($address,'64.27.17.140/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0611). ');
$ax += cidrblock($address,'64.31.37.154/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0612). ');
$ax += cidrblock($address,'64.113.32.29/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0613). ');
$ax += cidrblock($address,'64.137.178.3/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0614). ');
$ax += cidrblock($address,'64.137.225.11/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0615). ');
$ax += cidrblock($address,'64.137.225.138/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0616). ');
$ax += cidrblock($address,'64.137.225.144/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0617). ');
$ax += cidrblock($address,'64.137.234.53/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0618). ');
$ax += cidrblock($address,'64.137.251.218/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0619). ');
$ax += cidrblock($address,'64.188.60.212/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0620). ');
}
if(lmatch($address,'65','')) {
$ax += cidrblock($address,'65.19.167.130/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0621). ');
$ax += cidrblock($address,'65.19.167.132/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0622). ');
$ax += cidrblock($address,'65.117.187.20/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0623). ');
$ax += cidrblock($address,'65.181.123.254/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0624). ');
}
if(lmatch($address,'66','')) {
$ax += cidrblock($address,'66.42.224.235/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0625). ');
$ax += cidrblock($address,'66.70.184.76/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0626). ');
$ax += cidrblock($address,'66.70.217.179/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0627). ');
$ax += cidrblock($address,'66.110.216.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0628). ');
$ax += cidrblock($address,'66.155.4.213/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0629). ');
$ax += cidrblock($address,'66.175.211.27/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0630). ');
$ax += cidrblock($address,'66.220.3.179/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0631). ');
}
if(lmatch($address,'67','')) {
$ax += cidrblock($address,'67.1.154.54/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0632). ');
$ax += cidrblock($address,'67.163.133.203/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0633). ');
$ax += cidrblock($address,'67.205.146.164/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0634). ');
$ax += cidrblock($address,'67.215.255.140/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0635). ');
}
if(lmatch($address,'69','')) {
$ax += cidrblock($address,'69.164.207.234/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0636). ');
}
}
if(lmatch($address,'7','')) {
if(lmatch($address,'70','')) {
$ax += cidrblock($address,'70.39.87.130/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0637). ');
$ax += cidrblock($address,'70.168.93.214/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0638). ');
}
if(lmatch($address,'71','')) {
$ax += cidrblock($address,'71.19.144.106/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0639). ');
$ax += cidrblock($address,'71.46.220.68/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0640). ');
}
if(lmatch($address,'72','')) {
$ax += cidrblock($address,'72.14.179.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0641). ');
$ax += cidrblock($address,'72.52.75.27/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0642). ');
$ax += cidrblock($address,'72.210.252.137/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0643). ');
}
if(lmatch($address,'74','')) {
$ax += cidrblock($address,'74.50.54.69/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0644). ');
}
if(lmatch($address,'76','')) {
$ax += cidrblock($address,'76.96.88.37/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0645). ');
}
if(lmatch($address,'77','')) {
$ax += cidrblock($address,'77.68.42.132/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0646). ');
$ax += cidrblock($address,'77.81.104.124/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0647). ');
$ax += cidrblock($address,'77.81.247.72/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0648). ');
$ax += cidrblock($address,'77.191.6.253/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0649). ');
$ax += cidrblock($address,'77.247.181.162/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0650). ');
$ax += cidrblock($address,'77.247.181.165/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0651). ');
$ax += cidrblock($address,'77.250.227.12/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0652). ');
}
if(lmatch($address,'78','')) {
$ax += cidrblock($address,'78.31.164.41/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0653). ');
$ax += cidrblock($address,'78.41.115.145/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0654). ');
$ax += cidrblock($address,'78.107.237.16/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0655). ');
$ax += cidrblock($address,'78.109.23.1/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0656). ');
$ax += cidrblock($address,'78.129.137.28/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0657). ');
$ax += cidrblock($address,'78.130.128.106/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0658). ');
$ax += cidrblock($address,'78.142.19.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0659). ');
$ax += cidrblock($address,'78.142.175.70/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0660). ');
$ax += cidrblock($address,'78.241.246.179/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0661). ');
}
if(lmatch($address,'79','')) {
$ax += cidrblock($address,'79.124.59.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0662). ');
$ax += cidrblock($address,'79.134.234.247/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0663). ');
$ax += cidrblock($address,'79.137.68.85/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0664). ');
$ax += cidrblock($address,'79.172.193.32/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0665). ');
$ax += cidrblock($address,'79.245.166.164/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0666). ');
}
}
if(lmatch($address,'8','')) {
if(lmatch($address,'80','')) {
$ax += cidrblock($address,'80.67.172.162/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0667). ');
$ax += cidrblock($address,'80.68.92.225/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0668). ');
$ax += cidrblock($address,'80.79.23.7/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0669). ');
$ax += cidrblock($address,'80.85.84.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0670). ');
$ax += cidrblock($address,'80.101.143.242/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0671). ');
$ax += cidrblock($address,'80.110.8.49/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0672). ');
$ax += cidrblock($address,'80.127.116.96/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0673). ');
$ax += cidrblock($address,'80.158.3.182/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0674). ');
$ax += cidrblock($address,'80.169.241.76/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0675). ');
$ax += cidrblock($address,'80.211.164.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0676). ');
$ax += cidrblock($address,'80.241.60.207/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0677). ');
}
if(lmatch($address,'81','')) {
$ax += cidrblock($address,'81.231.177.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0678). ');
}
if(lmatch($address,'82','')) {
$ax += cidrblock($address,'82.1.241.19/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0679). ');
$ax += cidrblock($address,'82.94.132.34/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0680). ');
$ax += cidrblock($address,'82.94.251.227/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0681). ');
$ax += cidrblock($address,'82.118.242.128/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0682). ');
$ax += cidrblock($address,'82.118.242.169/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0683). ');
$ax += cidrblock($address,'82.211.0.201/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0684). ');
$ax += cidrblock($address,'82.211.5.20/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0685). ');
$ax += cidrblock($address,'82.221.101.67/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0686). ');
$ax += cidrblock($address,'82.221.128.217/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0687). ');
$ax += cidrblock($address,'82.221.139.25/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0688). ');
$ax += cidrblock($address,'82.221.139.190/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0689). ');
$ax += cidrblock($address,'82.223.27.82/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0690). ');
$ax += cidrblock($address,'82.228.252.20/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0691). ');
$ax += cidrblock($address,'82.247.198.227/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0692). ');
}
if(lmatch($address,'83','')) {
$ax += cidrblock($address,'83.92.47.99/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0693). ');
$ax += cidrblock($address,'83.149.99.151/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0694). ');
}
if(lmatch($address,'84','')) {
$ax += cidrblock($address,'84.3.10.87/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0695). ');
$ax += cidrblock($address,'84.19.177.100/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0696). ');
$ax += cidrblock($address,'84.19.181.25/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0697). ');
$ax += cidrblock($address,'84.48.199.78/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0698). ');
$ax += cidrblock($address,'84.53.65.151/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0699). ');
$ax += cidrblock($address,'84.53.225.118/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0700). ');
$ax += cidrblock($address,'84.56.81.155/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0701). ');
$ax += cidrblock($address,'84.141.80.17/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0702). ');
$ax += cidrblock($address,'84.195.252.128/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0703). ');
$ax += cidrblock($address,'84.200.50.18/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0704). ');
$ax += cidrblock($address,'84.209.48.106/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0705). ');
}
if(lmatch($address,'85','')) {
$ax += cidrblock($address,'85.25.44.141/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0706). ');
$ax += cidrblock($address,'85.90.244.23/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0707). ');
$ax += cidrblock($address,'85.93.91.98/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0708). ');
$ax += cidrblock($address,'85.93.218.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0709). ');
$ax += cidrblock($address,'85.159.237.210/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0710). ');
$ax += cidrblock($address,'85.166.128.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0711). ');
$ax += cidrblock($address,'85.195.107.250/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0712). ');
$ax += cidrblock($address,'85.229.167.140/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0713). ');
$ax += cidrblock($address,'85.248.227.163/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0714). ');
$ax += cidrblock($address,'85.248.227.164/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0715). ');
}
if(lmatch($address,'86','')) {
$ax += cidrblock($address,'86.107.110.217/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0716). ');
}
if(lmatch($address,'87','')) {
$ax += cidrblock($address,'87.98.178.61/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0717). ');
$ax += cidrblock($address,'87.118.92.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0718). ');
$ax += cidrblock($address,'87.118.95.123/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0719). ');
$ax += cidrblock($address,'87.118.115.176/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0720). ');
$ax += cidrblock($address,'87.118.116.12/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0721). ');
$ax += cidrblock($address,'87.118.116.90/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0722). ');
$ax += cidrblock($address,'87.118.122.30/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0723). ');
$ax += cidrblock($address,'87.118.122.50/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0724). ');
$ax += cidrblock($address,'87.120.254.186/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0725). ');
$ax += cidrblock($address,'87.120.254.204/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0726). ');
$ax += cidrblock($address,'87.122.45.101/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0727). ');
$ax += cidrblock($address,'87.123.98.142/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0728). ');
}
if(lmatch($address,'88','')) {
$ax += cidrblock($address,'88.99.33.103/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0729). ');
}
if(lmatch($address,'89','')) {
$ax += cidrblock($address,'89.31.57.5/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0730). ');
$ax += cidrblock($address,'89.31.96.168/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0731). ');
$ax += cidrblock($address,'89.33.16.215/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0732). ');
$ax += cidrblock($address,'89.34.237.31/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0733). ');
$ax += cidrblock($address,'89.34.237.38/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0734). ');
$ax += cidrblock($address,'89.34.237.42/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0735). ');
$ax += cidrblock($address,'89.34.237.70/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0736). ');
$ax += cidrblock($address,'89.34.237.72/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0737). ');
$ax += cidrblock($address,'89.34.237.139/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0738). ');
$ax += cidrblock($address,'89.34.237.213/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0739). ');
$ax += cidrblock($address,'89.34.237.214/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0740). ');
$ax += cidrblock($address,'89.34.237.223/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0741). ');
$ax += cidrblock($address,'89.35.178.104/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0742). ');
$ax += cidrblock($address,'89.144.12.17/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0743). ');
$ax += cidrblock($address,'89.156.192.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0744). ');
$ax += cidrblock($address,'89.187.143.31/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0745). ');
$ax += cidrblock($address,'89.187.143.81/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0746). ');
$ax += cidrblock($address,'89.187.150.12/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0747). ');
$ax += cidrblock($address,'89.234.157.254/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0748). ');
$ax += cidrblock($address,'89.236.34.117/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0749). ');
}
}
if(lmatch($address,'9','')) {
if(lmatch($address,'91','')) {
$ax += cidrblock($address,'91.64.245.225/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0750). ');
$ax += cidrblock($address,'91.92.109.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0751). ');
$ax += cidrblock($address,'91.92.109.72/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0752). ');
$ax += cidrblock($address,'91.92.109.116/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0753). ');
$ax += cidrblock($address,'91.92.109.119/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0754). ');
$ax += cidrblock($address,'91.117.98.13/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0755). ');
$ax += cidrblock($address,'91.121.192.154/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0756). ');
$ax += cidrblock($address,'91.203.5.146/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0757). ');
$ax += cidrblock($address,'91.203.5.165/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0758). ');
$ax += cidrblock($address,'91.203.145.9/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0759). ');
$ax += cidrblock($address,'91.203.146.126/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0760). ');
$ax += cidrblock($address,'91.213.8.157/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0761). ');
$ax += cidrblock($address,'91.219.236.232/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0762). ');
$ax += cidrblock($address,'91.219.237.229/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0763). ');
$ax += cidrblock($address,'91.219.237.244/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0764). ');
$ax += cidrblock($address,'91.219.239.114/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0765). ');
$ax += cidrblock($address,'91.219.239.229/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0766). ');
$ax += cidrblock($address,'91.236.116.101/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0767). ');
$ax += cidrblock($address,'91.250.241.241/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0768). ');
}
if(lmatch($address,'92','')) {
$ax += cidrblock($address,'92.63.173.28/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0769). ');
$ax += cidrblock($address,'92.222.22.113/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0770). ');
$ax += cidrblock($address,'92.222.38.67/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0771). ');
$ax += cidrblock($address,'92.222.74.226/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0772). ');
$ax += cidrblock($address,'92.222.127.232/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0773). ');
$ax += cidrblock($address,'92.222.180.10/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0774). ');
$ax += cidrblock($address,'92.230.133.243/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0775). ');
$ax += cidrblock($address,'92.243.69.105/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0776). ');
}
if(lmatch($address,'93','')) {
$ax += cidrblock($address,'93.89.101.27/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0777). ');
$ax += cidrblock($address,'93.115.86.4/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0778). ');
$ax += cidrblock($address,'93.115.86.6/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0779). ');
$ax += cidrblock($address,'93.115.86.8/31','No access allowed from Tor Project Exit Nodes. (TPEN-IP0780). ');
$ax += cidrblock($address,'93.115.95.201/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0781). ');
$ax += cidrblock($address,'93.115.95.202/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0782). ');
$ax += cidrblock($address,'93.115.95.204/30','No access allowed from Tor Project Exit Nodes. (TPEN-IP0783). ');
$ax += cidrblock($address,'93.115.241.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0784). ');
$ax += cidrblock($address,'93.158.216.52/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0785). ');
$ax += cidrblock($address,'93.171.248.14/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0786). ');
$ax += cidrblock($address,'93.174.93.71/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0787). ');
$ax += cidrblock($address,'93.174.93.133/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0788). ');
$ax += cidrblock($address,'93.188.162.188/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0789). ');
$ax += cidrblock($address,'93.220.74.158/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0790). ');
}
if(lmatch($address,'94','')) {
$ax += cidrblock($address,'94.16.123.176/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0791). ');
$ax += cidrblock($address,'94.23.201.80/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0792). ');
$ax += cidrblock($address,'94.31.53.203/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0793). ');
$ax += cidrblock($address,'94.100.6.27/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0794). ');
$ax += cidrblock($address,'94.102.51.78/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0795). ');
$ax += cidrblock($address,'94.130.97.8/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0796). ');
$ax += cidrblock($address,'94.130.170.249/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0797). ');
$ax += cidrblock($address,'94.130.182.104/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0798). ');
$ax += cidrblock($address,'94.130.183.184/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0799). ');
$ax += cidrblock($address,'94.142.242.84/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0800). ');
$ax += cidrblock($address,'94.156.77.134/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0801). ');
$ax += cidrblock($address,'94.177.12.102/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0802). ');
$ax += cidrblock($address,'94.177.123.116/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0803). ');
$ax += cidrblock($address,'94.198.100.17/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0804). ');
$ax += cidrblock($address,'94.242.57.2/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0805). ');
$ax += cidrblock($address,'94.248.10.112/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0806). ');
}
if(lmatch($address,'95','')) {
$ax += cidrblock($address,'95.42.120.48/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0807). ');
$ax += cidrblock($address,'95.85.4.94/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0808). ');
$ax += cidrblock($address,'95.128.43.164/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0809). ');
$ax += cidrblock($address,'95.130.10.69/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0810). ');
$ax += cidrblock($address,'95.130.11.170/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0811). ');
$ax += cidrblock($address,'95.130.12.252/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0812). ');
$ax += cidrblock($address,'95.141.35.15/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0813). ');
$ax += cidrblock($address,'95.142.161.63/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0814). ');
$ax += cidrblock($address,'95.211.118.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0815). ');
$ax += cidrblock($address,'95.215.44.194/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0816). ');
}
if(lmatch($address,'96','')) {
$ax += cidrblock($address,'96.66.15.147/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0817). ');
}
if(lmatch($address,'97','')) {
$ax += cidrblock($address,'97.74.237.196/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0818). ');
}
if(lmatch($address,'98','')) {
$ax += cidrblock($address,'98.174.90.43/32','No access allowed from Tor Project Exit Nodes. (TPEN-IP0819). ');
}
}
$ax += inmatch($query,'tpentesttpen','Test function. (TPEN). ');
// End of list