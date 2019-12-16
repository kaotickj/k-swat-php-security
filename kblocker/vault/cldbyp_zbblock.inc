<?php
// *php 5 fix
global $ax;
// Bypasses for Search Engines that gets blocked by cloud-blocklists
// This file is provided "as is" without any warranty.
// You assume the entire risk related to your use of this file.

$zbbversion .= ' / CLDBYP-2018.23.808';
if(substr_count($whyblockout,'AWS-')) if(substr_count($useragent, 'DuckDuckGo-Favicons-Bot')) { $ax--; $whyblockout .= 'DuckDuckGo Favicon Bot Bypass. (CLDBYP-AWS-01) ';}
if(substr_count($whyblockout,'MSAZ-')) if(preg_match("%\.search\.msn\.com$%",$hoster)) if(preg_match("%(?i)(?:(?:msn|adix|bing)bot\/|bingpreview)%",$lcuseragent)) { $ax--; $whyblockout .= 'BingBot Bypass. (CLDBYP-MSAZ-01) ';}
if(substr_count($whyblockout,'EOLB-')) if(preg_match("%\.google\.com$%",$hoster)) if(substr_count($useragent,'Google Favicon')) { $ax--; $whyblockout .= 'Google Favicon Bypass. (CLDBYP-EOLB-01) ';}
if(substr_count($query,'cldbyptestcldbyp')) { $ax++; $whyblockout .= 'Test function. (CLDBYP). ';}
// End of list