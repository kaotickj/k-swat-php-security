<?php
/**
 * EOL Browser module
 *
 * This file is an optional module for the CIDRAM package.
 * It will block browsers that has reached EOL more or less recently.
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
 * Version EOLB-2019.270.443
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
$Trigger(preg_match('%(?!.*opera (?:mini\/|mobi).*)(?:Edge\/1(?:2\.(?:[02-9]|1(?:0[01346-9]|[1-9]))|3\.(?:[02-9]|1(?:0[0-46-9]|[1-9]))|4\.(?:[02-9]|1(?:4[0-24-9]|[0-35-9]))|5\.(?:0|1[0-4]))|MSIE\s[7-9]\.|OPR\/(?:(?:2|3|4)\d|5[0-7])\.)%',$CIDRAM['BlockInfo']['UA']),'Old outdated browser (E/MSIE/OPR)');
$Trigger(preg_match('%^(?i)(?!.*opera (?:mini\/|mobi).*)(?=.*opera\/9\.80).*(?:version\/|opera[\s\/])(?:10\.\d|12\.0|12\.1[0-57])(?:.*)$%',$CIDRAM['BlockInfo']['UA']),'Old outdated browser (O)');
if(preg_match('%(?:^.*(?<!googlebot|google)\.com$|^.*(?<=proxy))%',$CIDRAM['Hostname'])) $Trigger(preg_match('%^(?!(?:^Mozilla.*Windows.*AppleWebKit.*KHTML.*Chrome.*Safari.*Edge.*|.*SeaMonkey))(?i)(?!.*(?:google(?:bot\/| web preview)|emo{2}n\/|mobile|android).*).*(?:chrom(?:e|ium)\/(?:6\d|7[0-4])\.|firefox\/(?:60\.[1-9]|(?:5\d|6[1-6])\.)).*$%',$CIDRAM['BlockInfo']['UA']),'Old outdated browser (C/FF)');
$Trigger(preg_match('%^(?=.*Safari\/)(?!.*Kindle\/.*)(?i)(?!.*mobile.*)(?!.*googlebot*)(?!.*android*).*version\/(?:[4-9]|10\.0|11\.0).*$%',$CIDRAM['BlockInfo']['UA']),'Old outdated browser (S)');
