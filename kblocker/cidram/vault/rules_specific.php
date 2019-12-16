<?php
/**
 * This file is a part of the CIDRAM package.
 * Homepage: https://cidram.github.io/
 *
 * CIDRAM COPYRIGHT 2016 and beyond by Caleb Mazalevskis (Maikuolan).
 *
 * License: GNU/GPLv2
 * @see LICENSE.txt
 *
 * This file: Custom rules file for some specific CIDRs (last modified: 2018.04.25).
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}

/** Prevents execution from outside of the CheckFactors closure. */
if (!isset($Factors[$FactorIndex])) {
    die('[CIDRAM] This should not be accessed directly.');
}

/** Safety. */
if (!isset($CIDRAM['RunParamResCache'])) {
    $CIDRAM['RunParamResCache'] = [];
}

/** Define object for these rules for later recall. */
$CIDRAM['RunParamResCache']['rules_specific.php'] = function ($Factors = [], $FactorIndex = 0, $LN = 0, $Tag = '') use (&$CIDRAM) {

    /** Skip further processing if the "block_cloud" directive is false, or if no section tag has been defined. */
    if (!$CIDRAM['Config']['signatures']['block_cloud'] || !$Tag) {
        return;
    }

    /** Bingbot bypasses. */
    if ($Tag === 'Azure' && preg_match('~(?:msn|bing)bot|bingpreview~', $CIDRAM['BlockInfo']['UALC'])) {
        $CIDRAM['Flag-Bypass-Bingbot-Check'] = true;
        return 2;
    }

    /** Bypass for "googlealert.com", "gigaalert.com", "copyscape.com". **/
    if ($Tag === 'Rackspace Hosting' && $Factors[31] === '162.13.83.46/32') {
        return;
    }

    /** Ensure the 38.0.0.0/8 in PSINet only triggers ONCE! Multiple triggers cause problems for some CDN bypasses. */
    if ($Tag === 'PSINet, Inc' && $CIDRAM['BlockInfo']['SignatureCount'] > 0) {
        return;
    }

    /** Ensure that Jetpack isn't blocked via Automattic. */
    if ($Tag === 'Automattic' && strpos($CIDRAM['BlockInfo']['UALC'], 'jetpack') !== false) {
        return;
    }

    if (!$CIDRAM['CIDRAM_sapi']) {
        $CIDRAM['BlockInfo']['ReasonMessage'] = $CIDRAM['lang']['ReasonMessage_Cloud'];
        if (!empty($CIDRAM['BlockInfo']['WhyReason'])) {
            $CIDRAM['BlockInfo']['WhyReason'] .= ', ';
        }
        $CIDRAM['BlockInfo']['WhyReason'] .= $CIDRAM['lang']['Short_Cloud'] . $LN;
        if (!empty($CIDRAM['BlockInfo']['Signatures'])) {
            $CIDRAM['BlockInfo']['Signatures'] .= ', ';
        }
    }
    $CIDRAM['BlockInfo']['Signatures'] .= $Factors[$FactorIndex];
    $CIDRAM['BlockInfo']['SignatureCount']++;

};

/** Execute object. */
$RunExitCode = $CIDRAM['RunParamResCache']['rules_specific.php']($Factors, $FactorIndex, $LN, $Tag);
