<?php
/**
 * Search engine bypasses
 *
 * This file is an optional module for the CIDRAM package.
 * It will provide bypasses for Search enginges that gets
 * caught by cloud-blocklists.
 *
 * COPYRIGHT 2019 by David MacMathan (macmathan).
 * https://bitbucket.org/macmathan
 *
 * License: GNU/GPLv2
 *
 * Version: CLDBYP-2019.130.593
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}
/** Inherit trigger closure (see functions.php). */
$Bypass = $CIDRAM['Bypass'];
/** Fetch hostname. */
if (empty($CIDRAM['Hostname'])) {
    $CIDRAM['Hostname'] = $CIDRAM['DNS-Reverse']($CIDRAM['BlockInfo']['IPAddr']);
}
/** Signatures start from here. */
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'aws_cidram')) $Bypass(substr_count($CIDRAM['BlockInfo']['UA'], 'DuckDuckGo-Favicons-Bot'), 'DuckDuckGo Favicons Bot AWS Bypass.');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'aws_cidram')) $Bypass(substr_count($CIDRAM['BlockInfo']['UA'], 'DuckDuckBot/'), 'DuckDuckBot AWS Bypass.');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'msaz_cidram')) if(preg_match("%\.search\.msn\.com$%",$CIDRAM['Hostname'])) $Bypass(preg_match("%(?i)(?:(?:msn|adix|bing)bot\/|bingpreview)%",$CIDRAM['BlockInfo']['UA']),'BingBot MSAZ Bypass');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'Azure')) if(preg_match("%\.search\.msn\.com$%",$CIDRAM['Hostname'])) $Bypass(preg_match("%(?i)(?:(?:msn|adix|bing)bot\/|bingpreview)%",$CIDRAM['BlockInfo']['UA']),'BingBot Azure Bypass');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'Old outdated browser (C/FF)')) if(preg_match("%\.google\.com$%",$CIDRAM['Hostname'])) $Bypass(substr_count($CIDRAM['BlockInfo']['UA'],'Google Favicon'),'Google Favicon Bypass');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'Suspected bot detected!')) if(preg_match("%^17\.%",$CIDRAM['BlockInfo']['IPAddr'])) if(preg_match("%\.applebot\.apple\.com$%",$CIDRAM['Hostname'])) $Bypass(substr_count($CIDRAM['BlockInfo']['UA'], 'Applebot'), 'Applebot Bypass #1.');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'Old outdated browser (S)')) if(preg_match("%^17\.%",$CIDRAM['BlockInfo']['IPAddr'])) if(preg_match("%\.applebot\.apple\.com$%",$CIDRAM['Hostname'])) $Bypass(substr_count($CIDRAM['BlockInfo']['UA'], 'Applebot'), 'Applebot Bypass #2.');
if(substr_count($CIDRAM['BlockInfo']['WhyReason'],'Malformed UA (S)')) if(preg_match("%\.search\.msn\.com$%",$CIDRAM['Hostname'])) if(preg_match("%iPhone;%",$CIDRAM['BlockInfo']['UA'])) if(preg_match("%Mobile\/\d%",$CIDRAM['BlockInfo']['UA'])) $Bypass(preg_match("%Safari\/\d{4}\.\d{2}%",$CIDRAM['BlockInfo']['UA']),'BingBot UA (S) Bypass');
