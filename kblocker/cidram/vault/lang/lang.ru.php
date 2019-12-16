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
 * This file: Russian language data (last modified: 2018.05.04).
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}

/** Language plurality rule. */
$CIDRAM['Plural-Rule'] = function ($Num) {
    if ($Num % 10 === 1 && $Num % 100 !== 11) {
        return 0;
    }
    return $Num % 10 >= 2 && $Num % 10 <= 4 && ($Num % 100 < 10 || $Num % 100 >= 20) ? 1 : 2;
};

$CIDRAM['lang']['Error_WriteCache'] = 'Невозможно записать в кэш! Пожалуйста проверьте ваш CHMOD!';
$CIDRAM['lang']['MoreInfo'] = 'Чтобы получить больше информации:';
$CIDRAM['lang']['ReasonMessage_BadIP'] = 'Ваш доступ к этой странице было отказано потому что Вы попытались получить доступ к этой странице используя неверный IP-адрес.';
$CIDRAM['lang']['ReasonMessage_Banned'] = 'Ваш доступ к этой странице было отказано из-за предыдущего плохого поведения с вашего IP-адреса.';
$CIDRAM['lang']['ReasonMessage_Bogon'] = 'Ваш доступ к этой странице было отказано потому что ваш IP-адрес распознается как адрес bogon/марсианин, и подключения от bogons/марсиане к этому сайту не допускается.';
$CIDRAM['lang']['ReasonMessage_Cloud'] = 'Ваш доступ к этой странице было отказано потому что ваш IP-адрес признается принадлежность к облачной службе, и подключение к этому сайту из облачных сервисов не допускается.';
$CIDRAM['lang']['ReasonMessage_Generic'] = 'Ваш доступ к этой странице было отказано потому что ваш IP-адрес принадлежит к сети, перечисленные в черном списке используемый этим сайтом.';
$CIDRAM['lang']['ReasonMessage_Legal'] = 'Ваш доступ к этой странице было отказано из-за юридическими обязательствами.';
$CIDRAM['lang']['ReasonMessage_Malware'] = 'Ваш доступ к этой странице было отказано из-за вредоносных программ, связанных с вашим IP-адресом.';
$CIDRAM['lang']['ReasonMessage_Proxy'] = 'Ваш доступ к этой странице было отказано потому что ваш IP-адрес распознается как принадлежность к прокси-сервис, и подключение к этому сайту от прокси-серверов не допускается.';
$CIDRAM['lang']['ReasonMessage_Spam'] = 'Ваш доступ к этой странице было отказано потому что ваш IP-адрес принадлежит к сети считается высоким риском для спама.';
$CIDRAM['lang']['Short_BadIP'] = 'Неверный IP';
$CIDRAM['lang']['Short_Banned'] = 'Запрещенный';
$CIDRAM['lang']['Short_Bogon'] = 'Bogon/Марсианин IP';
$CIDRAM['lang']['Short_Cloud'] = 'Облачный сервис';
$CIDRAM['lang']['Short_Generic'] = 'Общий';
$CIDRAM['lang']['Short_Legal'] = 'Юридический';
$CIDRAM['lang']['Short_Malware'] = 'Вредоносные программы';
$CIDRAM['lang']['Short_Proxy'] = 'Прокси';
$CIDRAM['lang']['Short_Spam'] = 'Спам риск';
$CIDRAM['lang']['Support_Email'] = 'Если Вы считаете, что это ошибка, или для того, попросить о помощи, {ClickHereLink}, чтобы отправить билет поддержки по электронной почте его на веб-мастеру этого сайта (пожалуйста, не изменить преамбулу или электронная почта тема линия).';
$CIDRAM['lang']['Support_Email_2'] = 'Если Вы считаете, что это ошибка, отправьте электронное письмо в {EmailAddr}, чтобы обратиться за помощью.';
$CIDRAM['lang']['click_here'] = 'кликните сюда';
$CIDRAM['lang']['denied'] = 'Доступ Закрыт!';
$CIDRAM['lang']['fake_ua'] = 'Поддельный {ua}';
$CIDRAM['lang']['field_datetime'] = 'Дата/Время: ';
$CIDRAM['lang']['field_hostname'] = 'Имя хоста: ';
$CIDRAM['lang']['field_id'] = 'ИД: ';
$CIDRAM['lang']['field_ipaddr'] = 'IP Адрес: ';
$CIDRAM['lang']['field_ipaddr_resolved'] = 'IP Адрес (Постановили): ';
$CIDRAM['lang']['field_query'] = 'Запрос/Query: ';
$CIDRAM['lang']['field_rURI'] = 'Реконструированный URI: ';
$CIDRAM['lang']['field_reCAPTCHA_state'] = 'Статус reCAPTCHA: ';
$CIDRAM['lang']['field_referrer'] = 'От (Referer): ';
$CIDRAM['lang']['field_scriptversion'] = 'Скрипт Версия: ';
$CIDRAM['lang']['field_sigcount'] = 'Количество подписей: ';
$CIDRAM['lang']['field_sigref'] = 'Идентификаторы для подписей: ';
$CIDRAM['lang']['field_ua'] = 'Агент пользователя (User Agent): ';
$CIDRAM['lang']['field_whyreason'] = 'Почему Заблокированные: ';
$CIDRAM['lang']['generated_by'] = 'Генерируется от';
$CIDRAM['lang']['preamble'] = '-- Конец преамбулы. Добавьте ваши вопросы или комментарии после этой строки. --';
$CIDRAM['lang']['recaptcha_cookie_warning'] = 'Заметка: CIDRAM использует куки чтобы помнить когда пользователи завершения CAPTCHA. Заполнив CAPTCHA, Вы даете свое согласие на куки, которые будут созданы и сохранены в вашем браузере.';
$CIDRAM['lang']['recaptcha_disabled'] = 'Отключается.';
$CIDRAM['lang']['recaptcha_enabled'] = 'Включается.';
$CIDRAM['lang']['recaptcha_failed'] = 'Не успех!';
$CIDRAM['lang']['recaptcha_message'] = 'Чтобы вновь получить доступ к этой странице, пожалуйста, заполните ниже CAPTCHA, и нажмите кнопку отправить.';
$CIDRAM['lang']['recaptcha_message_invisible'] = 'Для большинства пользователей, страница должна перезагружать и восстанавливать обычный доступ. В некоторых случаях вам может потребоваться выполнить вызов CAPTCHA.';
$CIDRAM['lang']['recaptcha_passed'] = 'Успех!';
$CIDRAM['lang']['recaptcha_submit'] = 'Отправить';
