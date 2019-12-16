<?php
// Blocking of browsers that has reached EOL more or less recently
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
$zbbversion .= ' / EOLB-2017.130.771';
$ax += regexmatch($useragent,"(?:Edge\/1(?:2\.(?:[02-9]|1(?:0[01346-9]|[1-9]))|3\.(?:[02-9]|1(?:0[0-46-9]|[1-9]))|4\.(?:[02-9]|1(?:4[0-24-9]|[0-35-9]))|5\.(?:0|1[0-4]))|MSIE\s[7-9]\.|OPR\/(?:(?:2|3)\d|40)\.)",'Old outdated browser (E/MSIE/OPR) (EOLB-99101). ');
$ax += regexmatch($useragent,"^(?i)(?!.*opera (?:mini\/|mobi).*)(?=.*opera\/9\.80).*(?:version\/|opera[\s\/])(?:10\.\d|12\.0|12\.1[0-57])(?:.*)$",'Old outdated browser (O) (EOLB-99102). ');
if(preg_match('%^.*(?<!googlebot\.com|google\.com)$%',$hoster))$ax += regexmatch($useragent,"^(?!(?:^Mozilla.*Windows.*AppleWebKit.*KHTML.*Chrome.*Safari.*Edge.*|.*SeaMonkey))(?i)(?!.*(?:google(?:bot\/| web preview)|emo{2}n\/|mobile|android).*).*(?:chrom(?:e|ium)\/(?:4[5-9]|5[0-5])\.|firefox\/(?:3[18]|4[1-46-9]|50)\.).*$",'Old outdated browser (C/FF) (EOLB-99103). ');
$ax += regexmatch($useragent,"^(?=.*Safari\/)(?!.*Kindle\/.*)(?i)(?!.*mobile.*)(?!.*googlebot*)(?!.*android*).*version\/(?:[4-8]|9\.0).*$",'Old outdated browser (S) (EOLB-99104). ');
$ax += inmatch($query,'eolbtesteolb','Test Trigger to test function (EOLBTEST). ');