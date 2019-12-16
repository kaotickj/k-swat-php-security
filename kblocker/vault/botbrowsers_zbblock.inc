<?php
// Blocking of browsers that old that no one uses them
// COPYRIGHT 2017 GNU/GPL V.2 BY D. MACMATHAN
// Some of the sources:
// http://googlechromereleases.blogspot.com/
// https://www.mozilla.org/en-US/firefox/releases/
// https://www.microsoft.com/en-us/WindowsForBusiness/End-of-IE-support
// https://support.microsoft.com/en-us/lifecycle/search?sort=PN&alpha=internet%20explorer
// https://developer.microsoft.com/en-us/microsoft-edge/platform/changelog/
// https://blogs.windows.com/msedgedev/2015/09/21/understanding-versions-in-an-evergreen-browser/
// http://www.opera.com/docs/history/
// http://www.opera.com/docs/history/presto
// FOR USE WITH ZB BLOCK OR ANY GNU/GPL V.2 COMPLIANT DERIVATIVE
// It is not allowed to use this file in whole or part with WEBDEFENSE WEB ALARM or any XYZER Products due to VIOLATIONS OF THE GNU/GPL V.2
// Due to massive domain- and business-hopping it is not allowed to use this file in whole or part with products by Strobel.systems, Quierschied
// THIS FILE IS PROVIDED AS-IS
global $whyblockout, $ax;
$zbbversion .= ' / BOTB-2017.130.771';
$ax += regexmatch($useragent,"(?i)(?=.*opera)(?=.*(?:firefox|msie)).*",'Ambiguos browser ID (BOTB-99001). ');
$ax += regexmatch($useragent,"(?i)(?=.*firefox)(?=.*(?:chrom(?:e|ium)|msie)).*",'Ambiguos browser ID (BOTB-99002). ');
$ax += regexmatch($useragent,"(?i:(?=(?:.*)(?:mozilla.*){2,})|(?=.*(?:msie.*){2,})).*",'Ambiguos User-Agent (BOTB-99003). ');
if(preg_match('%^.*(?<!googlebot\.com|google\.com)$%',$hoster))$ax += regexmatch($useragent,"^(?i)(?!.*opera (?:mini\/|mobi).*)(?!.*(?:google(?:bot\/| web preview)|(android.*(?:version|samsungbrowser)\/)).*).*(?:chrom(?:e|ium)\/(?:[123]?\d|4[0-4]|99)\.)|msie\s(?:[0-6]|[2-9]\d)|(?:fire(?:bird\/|fox\/(?:\d|[12]\d|3[02-79]|40|99)\.))|(?:netscape|mozilla\/(?:[0-3]\.|4\.0[24568]\s\[|4\.[578]|\d\d))|(?:opera[\s\/](?:[0-8]\.|9\.[1-7]|bork-edition|10\.00|11\.[234789]|12\.19|12\.[2-9]|1[3-9]\.|[2-9]\d\.))|(?:safari\/(?:[1-4]\d\d\.\d|[89]\d\.\d|999\.\d)|safari\/(?:.*)version\/3)(?:.*)$",'Robot probe or scraper (C/IE/FF/NS/O/S) (BOTB-99004). ');
$ax += regexmatch($useragent,"(?: Edge\/(?:\d|1[01])\.|Microsoft Internet Explorer|OPR\/1?\d\.|ft NT (?:[12789]|[2-9]\d)\.)",'Robot probe or scraper (E/OPR/NT) (BOTB-99005). ');
$ax += regexmatch($useragent,"(?i)(?=.*opera\/9\.80).*(?:version\/|opera[\s\/])11\.[0156](?:.*)",'Robot probe or scraper (O) (BOTB-99006). ');
$ax += inmatch($query,'botbtestbotb','Test Trigger to test function (BOTBTEST). ');