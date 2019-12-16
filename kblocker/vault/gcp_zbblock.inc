<?php
// *php 5 fix
global $ax;
// Google Appengine Netblocks
// https://cloud.google.com/appengine/kb/#static-ip
// Last updated 
// Adapted to work with ZB Block by macmathan and provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / GCP-2018.15.898';
if(lmatch($address,'1','')) {
if(lmatch($address,'10','')) {
$ax += cidrblock($address,'104.154.0.0/15','No access allowed from Google App Engine (GCP-IP0001). ');
$ax += cidrblock($address,'104.196.0.0/14','No access allowed from Google App Engine (GCP-IP0002). ');
$ax += cidrblock($address,'107.167.160.0/19','No access allowed from Google App Engine (GCP-IP0003). ');
$ax += cidrblock($address,'107.178.192.0/18','No access allowed from Google App Engine (GCP-IP0004). ');
$ax += cidrblock($address,'108.59.80.0/20','No access allowed from Google App Engine (GCP-IP0005). ');
$ax += cidrblock($address,'108.170.192.0/20','No access allowed from Google App Engine (GCP-IP0006). ');
$ax += cidrblock($address,'108.170.208.0/21','No access allowed from Google App Engine (GCP-IP0007). ');
$ax += cidrblock($address,'108.170.216.0/22','No access allowed from Google App Engine (GCP-IP0008). ');
$ax += cidrblock($address,'108.170.220.0/23','No access allowed from Google App Engine (GCP-IP0009). ');
$ax += cidrblock($address,'108.170.222.0/24','No access allowed from Google App Engine (GCP-IP0010). ');
}
if(lmatch($address,'13','')) {
$ax += cidrblock($address,'130.211.8.0/21','No access allowed from Google App Engine (GCP-IP0011). ');
$ax += cidrblock($address,'130.211.16.0/20','No access allowed from Google App Engine (GCP-IP0012). ');
$ax += cidrblock($address,'130.211.32.0/19','No access allowed from Google App Engine (GCP-IP0013). ');
$ax += cidrblock($address,'130.211.64.0/18','No access allowed from Google App Engine (GCP-IP0014). ');
$ax += cidrblock($address,'130.211.128.0/17','No access allowed from Google App Engine (GCP-IP0015). ');
}
if(lmatch($address,'14','')) {
$ax += cidrblock($address,'146.148.2.0/23','No access allowed from Google App Engine (GCP-IP0016). ');
$ax += cidrblock($address,'146.148.4.0/22','No access allowed from Google App Engine (GCP-IP0017). ');
$ax += cidrblock($address,'146.148.8.0/21','No access allowed from Google App Engine (GCP-IP0018). ');
$ax += cidrblock($address,'146.148.16.0/20','No access allowed from Google App Engine (GCP-IP0019). ');
$ax += cidrblock($address,'146.148.32.0/19','No access allowed from Google App Engine (GCP-IP0020). ');
$ax += cidrblock($address,'146.148.64.0/18','No access allowed from Google App Engine (GCP-IP0021). ');
}
if(lmatch($address,'16','')) {
$ax += cidrblock($address,'162.216.148.0/22','No access allowed from Google App Engine (GCP-IP0022). ');
$ax += cidrblock($address,'162.222.176.0/21','No access allowed from Google App Engine (GCP-IP0023). ');
}
if(lmatch($address,'17','')) {
$ax += cidrblock($address,'173.255.112.0/20','No access allowed from Google App Engine (GCP-IP0024). ');
}
if(lmatch($address,'19','')) {
$ax += cidrblock($address,'192.158.28.0/22','No access allowed from Google App Engine (GCP-IP0025). ');
$ax += cidrblock($address,'199.192.112.0/22','No access allowed from Google App Engine (GCP-IP0026). ');
$ax += cidrblock($address,'199.223.232.0/22','No access allowed from Google App Engine (GCP-IP0027). ');
$ax += cidrblock($address,'199.223.236.0/23','No access allowed from Google App Engine (GCP-IP0028). ');
}
}
if(lmatch($address,'2','')) {
$ax += cidrblock($address,'23.236.48.0/20','No access allowed from Google App Engine (GCP-IP0029). ');
$ax += cidrblock($address,'23.251.128.0/19','No access allowed from Google App Engine (GCP-IP0030). ');
$ax += cidrblock($address,'208.68.108.0/23','No access allowed from Google App Engine (GCP-IP0031). ');
}
if(lmatch($address,'3','')) {
$ax += cidrblock($address,'35.184.0.0/14','No access allowed from Google App Engine (GCP-IP0032). ');
$ax += cidrblock($address,'35.188.0.0/15','No access allowed from Google App Engine (GCP-IP0033). ');
$ax += cidrblock($address,'35.190.0.0/17','No access allowed from Google App Engine (GCP-IP0034). ');
$ax += cidrblock($address,'35.190.128.0/18','No access allowed from Google App Engine (GCP-IP0035). ');
$ax += cidrblock($address,'35.190.192.0/19','No access allowed from Google App Engine (GCP-IP0036). ');
$ax += cidrblock($address,'35.190.224.0/20','No access allowed from Google App Engine (GCP-IP0037). ');
$ax += cidrblock($address,'35.192.0.0/14','No access allowed from Google App Engine (GCP-IP0038). ');
$ax += cidrblock($address,'35.196.0.0/15','No access allowed from Google App Engine (GCP-IP0039). ');
$ax += cidrblock($address,'35.198.0.0/16','No access allowed from Google App Engine (GCP-IP0040). ');
$ax += cidrblock($address,'35.199.0.0/17','No access allowed from Google App Engine (GCP-IP0041). ');
$ax += cidrblock($address,'35.199.128.0/18','No access allowed from Google App Engine (GCP-IP0042). ');
$ax += cidrblock($address,'35.200.0.0/15','No access allowed from Google App Engine (GCP-IP0043). ');
$ax += cidrblock($address,'35.202.0.0/16','No access allowed from Google App Engine (GCP-IP0044). ');
$ax += cidrblock($address,'35.203.0.0/17','No access allowed from Google App Engine (GCP-IP0045). ');
$ax += cidrblock($address,'35.203.128.0/18','No access allowed from Google App Engine (GCP-IP0046). ');
$ax += cidrblock($address,'35.203.192.0/19','No access allowed from Google App Engine (GCP-IP0047). ');
$ax += cidrblock($address,'35.203.240.0/20','No access allowed from Google App Engine (GCP-IP0048). ');
$ax += cidrblock($address,'35.204.0.0/15','No access allowed from Google App Engine (GCP-IP0049). ');
$ax += cidrblock($address,'35.206.64.0/18','No access allowed from Google App Engine (GCP-IP0050). ');
$ax += cidrblock($address,'35.224.0.0/14','No access allowed from Google App Engine (GCP-IP0051). ');
$ax += cidrblock($address,'35.228.0.0/15','No access allowed from Google App Engine (GCP-IP0052). ');
}
if(lmatch($address,'8','')) {
$ax += cidrblock($address,'8.34.208.0/20','No access allowed from Google App Engine (GCP-IP0053). ');
$ax += cidrblock($address,'8.35.192.0/21','No access allowed from Google App Engine (GCP-IP0054). ');
$ax += cidrblock($address,'8.35.200.0/23','No access allowed from Google App Engine (GCP-IP0055). ');
}
$ax += inmatch($query,'gcptestgcp','Test function. (GCP). ');
// End of list