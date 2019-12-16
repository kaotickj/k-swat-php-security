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
 * This file: Italian language data for CLI (last modified: 2018.01.20).
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}

$CIDRAM['lang']['CLI_H'] = "
 CIDRAM CLI modalità aiuto.

 Uso:
 php.exe /cidram/loader.php -Flag (Ingresso)

 Flags: -h Visualizzare queste informazioni di aiuto.
        -c Verificare se un indirizzo IP è bloccato dalle firme di CIDRAM.
        -g Generare CIDRs da un indirizzo IP.
        -v Convalidare un file di firma.
        -f Correggere un file di firma.

 Esempi:
 php.exe /cidram/loader.php -c 192.168.0.0
 php.exe /cidram/loader.php -c 2001:db8::
 php.exe /cidram/loader.php -g 1.2.3.4
 php.exe /cidram/loader.php -g ::1
 php.exe /cidram/loader.php -f signatures.dat
 php.exe /cidram/loader.php -v signatures.dat

";

$CIDRAM['lang']['CLI_Bad_IP'] = ' L\'indirizzo IP specificato, "{IP}", non è un indirizzo IPv4 o IPv6 valido!';
$CIDRAM['lang']['CLI_IP_Blocked'] = ' L\'indirizzo IP specificato, "{IP}", è bloccato da uno o più delle firme di CIDRAM.';
$CIDRAM['lang']['CLI_IP_Not_Blocked'] = ' L\'indirizzo IP specificato, "{IP}", *NON* è bloccato da una delle firme di CIDRAM.';

$CIDRAM['lang']['CLI_F_Finished'] = 'Fissatore di firme è finita, con %s cambiamenti effettuate per %s operazioni (%s).';
$CIDRAM['lang']['CLI_F_Started'] = 'Fissatore di firme è iniziata (%s).';
$CIDRAM['lang']['CLI_VF_Empty'] = 'File di firme specificato è vuoto o non esiste.';
$CIDRAM['lang']['CLI_VF_Level_0'] = 'Preavviso';
$CIDRAM['lang']['CLI_VF_Level_1'] = 'Avvertimento';
$CIDRAM['lang']['CLI_VF_Level_2'] = 'Errore';
$CIDRAM['lang']['CLI_VF_Level_3'] = 'Errore Fatale';

$CIDRAM['lang']['CLI_V_CRLF'] = 'Rilevato CR/CRLF nel file di firme; Questi sono ammesse e non causerà problemi, ma LF è preferibile.';
$CIDRAM['lang']['CLI_V_Finished'] = 'Validatore di firme è finita (%s). Se non ci fossero avvisi o errori, il file di firme è *probabilmente* bene. :-)';
$CIDRAM['lang']['CLI_V_LineByLine'] = 'Convalida riga per riga è iniziata.';
$CIDRAM['lang']['CLI_V_Started'] = 'Validatore di firme è iniziata (%s).';
$CIDRAM['lang']['CLI_V_Terminal_LF'] = 'File di firme dovrebbe terminare con una interruzione di riga LF.';

$CIDRAM['lang']['CLI_VL_CC'] = 'L%s: Rilevati caratteri di controllo; Ciò potrebbe indicare la corruzione e dovrebbe essere esaminati.';
$CIDRAM['lang']['CLI_VL_Duplicated'] = 'L%s: Firma "%s" è duplicata (%s conti)!';
$CIDRAM['lang']['CLI_VL_Expiry'] = 'L%s: Etichetta di scadenza non contiene una valida ISO 8601 data/tempo!';
$CIDRAM['lang']['CLI_VL_Invalid'] = 'L%s: "%s" *NON* è un indirizzo IPv4 o IPv6 valida!';
$CIDRAM['lang']['CLI_VL_L120'] = 'L%s: La lunghezza della riga è maggiore di 120 byte; Lunghezza della riga dovrebbe essere limitato a 120 byte per una leggibilità ottimale.';
$CIDRAM['lang']['CLI_VL_Mergeable'] = 'L%s e L%s sono identici, e quindi, unificabile.';
$CIDRAM['lang']['CLI_VL_Missing'] = 'L%s: [Function] é mancante; Firma sembra essere incompleta.';
$CIDRAM['lang']['CLI_VL_Nontriggerable'] = 'L%s: "%s" non può essere attivato! La sua base non corrisponde l\'inizio della sua gamma! Prova sostituendolo con "%s".';
$CIDRAM['lang']['CLI_VL_Nontriggerable_Range'] = 'L%s: "%s" non può essere attivato! "%s" non è un gamma valida!';
$CIDRAM['lang']['CLI_VL_Origin'] = 'L%s: Etichette di origine non contiene un codice ISO 3166-1 Alpha-2 valido!';
$CIDRAM['lang']['CLI_VL_Subordinate'] = 'L%s: "%s" è subordinata alla già esistente firma "%s".';
$CIDRAM['lang']['CLI_VL_Superset'] = 'L%s: "%s" è un sovrainsieme alla già esistente firma "%s".';
$CIDRAM['lang']['CLI_VL_Syntax'] = 'L%s: Non sintatticamente preciso.';
$CIDRAM['lang']['CLI_VL_Tabs'] = 'L%s: Tabulazioni rilevati; Spazi sono preferiti sopra tabulazioni per una leggibilità ottimale.';
$CIDRAM['lang']['CLI_VL_Tags'] = 'L%s: Etichetta della sezione è maggiore di 20 byte; Etichetta della sezione dovrebbe essere chiaro e conciso.';
$CIDRAM['lang']['CLI_VL_Unrecognised'] = 'L%s: [Function] non riconosciuta; Firma potrebbe essere rotto.';
$CIDRAM['lang']['CLI_VL_Whitespace'] = 'L%s: L\'eccesso di spazio bianco in coda rilevato su questa riga.';
$CIDRAM['lang']['CLI_VL_YAML'] = 'L%s: Dati simili a YAML rilevati, ma non poteva elaborarlo.';
