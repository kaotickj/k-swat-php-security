<?php
/**
 * Bot-Browser module
 *
 * This file is an optional module for the CIDRAM package.
 * It will block browsers that is that old that no one should use them.
 *
 * COPYRIGHT 2019 by David MacMathan (macmathan).
 * https://bitbucket.org/macmathan/
 *
 * This file is distributed under the Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0) License
 * http://creativecommons.org/licenses/by-nc-sa/4.0/
 *
 * Some of the sources:
 * http://googlechromereleases.blogspot.com/
 * https://www.mozilla.org/en-US/firefox/releases/
 * https://www.microsoft.com/en-us/WindowsForBusiness/End-of-IE-support
 * https://support.microsoft.com/en-us/lifecycle/search?sort=PN&alpha=internet%20explorer
 * https://developer.microsoft.com/en-us/microsoft-edge/platform/changelog/
 * https://blogs.windows.com/msedgedev/2015/09/21/understanding-versions-in-an-evergreen-browser/
 * http://www.opera.com/docs/history/
 * http://www.opera.com/docs/history/presto
 *
 * Version BOTB-2019.345.786
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}

/** Inherit trigger closure (see functions.php). */
$Trigger = $CIDRAM['Trigger'];

/** Fetch hostname. */
if (empty($CIDRAM['Hostname'])) {
    $CIDRAM['Hostname'] = $CIDRAM['DNS-Reverse']($CIDRAM['BlockInfo']['IPAddr']);
}
/** Signatures start from here. */
$Trigger(preg_match('%(?i)(?=.*opera)(?=.*(?:firefox|msie)).*%',$CIDRAM['BlockInfo']['UA']),'Ambiguos browser ID (OFM)');
$Trigger(preg_match('%(?i)(?=.*firefox)(?=.*(?:chrom(?:e|ium)|msie)).*%',$CIDRAM['BlockInfo']['UA']),'Ambiguos browser ID (FCM)');
$Trigger(preg_match('%(?i:(?=(?:.*)(?:mozilla.*){2,})|(?=.*(?:msie.*){2,})).*%',$CIDRAM['BlockInfo']['UA']),'Ambiguos browser ID (MM)');
$Trigger(preg_match('%(?i)(?=.*gecko\/\d*)(?=.*rv:([\d\.]*)).*firefox\/(?!\1)%',$CIDRAM['BlockInfo']['UA']),'Malformed UA (FF)');
$Trigger(preg_match('%(?i)(?!.*gecko\/20100101).*rv:([\d\.]*).*gecko\/(?!\1)%',$CIDRAM['BlockInfo']['UA']),'Malformed UA (MZ)');
$Trigger(preg_match('%(?:.* Chrome\/(\d*\.)).* Edg\/(?!\1)%',$CIDRAM['BlockInfo']['UA']),'Malformed UA (EC)');
$Trigger(preg_match('%(?i)(?!.*safari\/\d\d\d\.\d)(?=.*safari).*%',$CIDRAM['BlockInfo']['UA']),'Malformed UA (S)');
if(!preg_match('%(?:^.*google(bot)?\.com$)%',$CIDRAM['Hostname']) || preg_match('%^.*(?<=proxy)%',CIDRAM['Hostname'])) $Trigger(preg_match('%^(?i)(?!.*opera (?:mini\/|mobi).*)(?!.*(?:google(?:bot\/| web preview)|(android.*(?:version|samsungbrowser)\/)).*).*chrom(?:e|ium)\/(?:[1-5]?\d|99)\.|msie\s?(?:[0-6]|1[2-9]|[2-9]\d)\.|fire(?:bird\/|fox\/(?:\d|[1-4]\d|99)\.)|(?:netscape|mozilla\/(?:[0-3]\.|4\.0[24568]\s\[|4\.[578]|[7-9]\.|\d{2,}\.))|opera[\s\/](?:[0-8]\.|9\.[1-7]|bork-edition|10\.00|11\.[234789]|12\.19|12\.[2-9]|1[3-9]\.|[2-9]\d\.)|(?:safari\/(?:[1-4]\d\d\.\d|[89]\d\.\d|999\.\d)|safari\/(?:.*)version\/3)(?:.*)$%',$CIDRAM['BlockInfo']['UA']),'Robot probe or scraper (C/IE/FF/NS/O/S)');
$Trigger(preg_match('%(?: Edge\/(?:(?:\d|1[01])\.|[02-9])| Edg\/(?:\d|[0-6]\d)\.|Microsoft Internet Explorer|OPR\/1?\d\.|ft NT (?:[12789]|[2-9]\d)\.)%',$CIDRAM['BlockInfo']['UA']),'Robot probe or scraper (E/OPR/NT)');
$Trigger(preg_match('%(?i)(?=.*opera\/9\.80).*(?:version\/|opera[\s\/])11\.[0156](?:.*)%',$CIDRAM['BlockInfo']['UA']),'Robot probe or scraper (O)');
