<?php
// *php 5 fix
global $ax;
// Cloudflare Netblocks
// https://www.cloudflare.com/ips/
// Last updated 2017-06-09 22:39
// Adapted to work with ZB Block by macmathan
$zbbversion .= ' / CFRP-2017.159.902';

if(lmatch($address,'1','')) {
$ax += cidrblock($address,'103.21.244.0/22','No access allowed from Cloudflare. (CFRP-IP0001). ');
$ax += cidrblock($address,'103.22.200.0/22','No access allowed from Cloudflare. (CFRP-IP0002). ');
$ax += cidrblock($address,'103.31.4.0/22','No access allowed from Cloudflare. (CFRP-IP0003). ');
$ax += cidrblock($address,'104.16.0.0/12','No access allowed from Cloudflare. (CFRP-IP0004). ');
$ax += cidrblock($address,'108.162.192.0/18','No access allowed from Cloudflare. (CFRP-IP0005). ');
$ax += cidrblock($address,'131.0.72.0/22','No access allowed from Cloudflare. (CFRP-IP0006). ');
$ax += cidrblock($address,'141.101.64.0/18','No access allowed from Cloudflare. (CFRP-IP0007). ');
$ax += cidrblock($address,'162.158.0.0/15','No access allowed from Cloudflare. (CFRP-IP0008). ');
$ax += cidrblock($address,'172.64.0.0/13','No access allowed from Cloudflare. (CFRP-IP0009). ');
$ax += cidrblock($address,'173.245.48.0/20','No access allowed from Cloudflare. (CFRP-IP0010). ');
$ax += cidrblock($address,'188.114.96.0/20','No access allowed from Cloudflare. (CFRP-IP0011). ');
$ax += cidrblock($address,'190.93.240.0/20','No access allowed from Cloudflare. (CFRP-IP0012). ');
$ax += cidrblock($address,'197.234.240.0/22','No access allowed from Cloudflare. (CFRP-IP0013). ');
$ax += cidrblock($address,'198.41.128.0/17','No access allowed from Cloudflare. (CFRP-IP0014). ');
}
$ax += inmatch($query,'cfrptestcfrp','Test function. (CFRP). ');
// End of list