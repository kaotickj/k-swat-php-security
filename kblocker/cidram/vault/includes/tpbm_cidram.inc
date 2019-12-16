<?php
/**
 * Tor Project Block Module
 *
 * This file is an optional module for the CIDRAM package.
 * It will block access from the TOR Network
 * https://check.torproject.org/exit-addresses
 *
 * COPYRIGHT 2018 by D. MacMathan.
 *
 * License: GNU/GPLv2
 *
 * It is not allowed to use this file in whole or part with WEBDEFENSE WEB ALARM or any XYZER Products due to VIOLATIONS OF THE GNU/GPL V.2
 * Due to massive domain- and business-hopping it is not allowed to use this file in whole or part with products by Strobel.systems, Quierschied
 *
 * THIS FILE IS PROVIDED AS-IS without any warranty.
 * You assume the entire risk related to your use of this file.
 * Version: TPBM-2018.91.728
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
if(substr_count($CIDRAM['BlockInfo']['IPAddr'],':')) {
	$addr = inet_pton($CIDRAM['BlockInfo']['IPAddr']);
	$unpack = unpack('H*hex', $addr);
	$hex = $unpack['hex'];
	$Trigger((gethostbyname(implode('.', array_reverse(str_split($hex))).'.torexit.dan.me.uk')=='127.0.0.100'),'TOR Project exit node');
	unset($addr,$unpack,$hex);
}
else {
	$addr = explode('.',$CIDRAM['BlockInfo']['IPAddr']);
	$Trigger((gethostbyname(implode('.', array_reverse($addr)).'.torexit.dan.me.uk')=='127.0.0.100'),'TOR Project exit node');
	unset($addr);
}
$Trigger(preg_match('%(?i)^(?:tor(?:(\d)?\.|[-_]?(?:exit|node|cloud|[a-z]{3}\.))|.*\.(?:gtor|tor[-]?(?:relays|servers|proxy))\.|exit\d*\.tor).*%',$CIDRAM['Hostname']),'Access from what looks like a TOR Project exit node.');
