<?php
/**
 * ZB Block loader module
 *
 * This file is an optional module for the ZB Block package.
 * It will make it possible to use the optional CIDRAM signature lists 
 * provided by me together with ZB Block by acting as the glue between
 * the different file formats.
 *
 * CIDRAM: https://cidram.github.io/
 * ZB Block legacy: http://www.spambotsecurity.com/
 * ZB Block fork: https://zb-block.net/
 *
 * COPYRIGHT 2018 by David MacMathan (macmathan).
 * https://github.com/macmathan
 *
 * License: GNU/GPLv2
 *
 * Version ZBBLM-2018.124.589
 */

if (!function_exists('cidrblock')) {
    die('It does not seem like the ZB Block main file is properly included.');
}
global $whyblockout, $ax;
$zbbversion .= ' / McMCLPM';
$McMExcludeList = array('.','..');
$McMFiles = array_diff(@scandir(dirname(__FILE__)),$McMExcludeList);
foreach($McMFiles as $Num => $File) {
	if ($ax >= $zbheavyhit) { return false; } // Abort if we reach Heavy Hit - As requested by JamesC
	if(preg_match("%^(?:[A-Z]{2}|aws|cfrp|gcp|msaz|tpen)_cidram\.inc%",$File)) {
		$FullFile = dirname(__FILE__).'/'.$File;
		if (!is_file($FullFile) || !is_readable($FullFile)) {
			return false;
		}
		$Lines = file($FullFile, FILE_IGNORE_NEW_LINES);
		if (!is_array($Lines)) {
			$Lines = [$Lines];
		}
		$Lines = array_filter($Lines);
		foreach($Lines as $LN => $Line) {
			if(preg_match("%(?:^Origin|\*)%",$Line)){
				continue;
			}
			$AL = explode(' ',$Line,3);
			$FD = explode('_',$File,2);
			$ax += cidrblock($address,$AL[0],$AL[2].' ('.strtoupper($FD[0]).':L'.($LN + 1).'). ');
		}
		unset($LN,$Lines,$AL,$FD);
		if(preg_match("%^aws_cidram\.inc%",$File)) if(substr_count($whyblockout,'AWS:')) if(substr_count($useragent, 'DuckDuckGo-Favicons-Bot')) { $ax--; $whyblockout .= 'DuckDuckGo Favicon Bot Bypass. (AWS:B01) ';}
		if(preg_match("%^msaz_cidram\.inc%",$File)) if(substr_count($whyblockout,'MSAZ:')) if(preg_match("%\.search\.msn\.com$%",$hoster)) if(preg_match("%(?i)(?:(?:msn|adix|bing)bot\/|bingpreview)%",$lcuseragent)) { $ax--; $whyblockout .= 'BingBot Bypass. (MSAZ:B01) ';}
	}
	unset($Num,$File);
}
unset($McMFiles,$McMExcludeList);
