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
 * This file: Arabic language data for the front-end (last modified: 2018.05.08).
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}

foreach (['IPv4', 'IPv6'] as $CIDRAM['IPvX']) {
    $CIDRAM['Pre'] = 'تواقيع القياسية ' . $CIDRAM['IPvX'] . ' وشملت عادة مع الحزمة. ';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX']] = $CIDRAM['Pre'] . 'بحجبه نقاط الوصول غير البشرية و الخدمات السحابية غير المرغوب فيها.';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX'] . '-Bogons'] = $CIDRAM['Pre'] . 'بحجبه bogon/المريخ CIDRs.';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX'] . '-ISPs'] = $CIDRAM['Pre'] . 'بحجبه مزودي خدمات الإنترنت خطيرة ومزعجة.';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX'] . '-Other'] = $CIDRAM['Pre'] . 'بحجبه CIDRs الوكلاء، والشبكات الخاصة الإفتراضية، وغيرها من الخدمات غير المرغوب فيها المتنوعة.';
    $CIDRAM['Pre'] = 'عناوين ' . $CIDRAM['IPvX'] . ' ملف التوقيعات (%s).';
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX']] = sprintf($CIDRAM['Pre'], 'نقاط الوصول غير البشرية و الخدمات السحابية غير المرغوب فيها');
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX'] . '-Bogons'] = sprintf($CIDRAM['Pre'], 'bogon/المريخ CIDRs');
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX'] . '-ISPs'] = sprintf($CIDRAM['Pre'], 'مزودي خدمات الإنترنت خطيرة ومزعجة');
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX'] . '-Other'] = sprintf($CIDRAM['Pre'], 'CIDRs الوكلاء، والشبكات الخاصة الإفتراضية، وغيرها من الخدمات غير المرغوب فيها المتنوعة');
}
unset($CIDRAM['Pre'], $CIDRAM['IPvX']);

$CIDRAM['lang']['Extended Description: Bypasses'] = 'ملفات الالتفافية التوقيع القياسية المدرجة عادة مع الحزمة الرئيسية.';
$CIDRAM['lang']['Extended Description: CIDRAM'] = 'حزمة الابتدائية (ناقص التوقيعات، وثائق، والتكوين).';
$CIDRAM['lang']['Extended Description: module_badhosts.php'] = 'كتل المضيفات التي يتم استخدامها بشكل متكرر من قبل مرسلي المحتوى غير المرغوب فيه والمتسللين والكيانات الشائنة الأخرى.';
$CIDRAM['lang']['Extended Description: module_badhosts_isps.php'] = 'كتل المضيفين الذين ينتمون إلى مقدمي خدمات الإنترنت، التي يتم استخدامها بشكل متكرر من قبل مرسلي المحتوى غير المرغوب فيه والمتسللين والكيانات الشائنة الأخرى.';
$CIDRAM['lang']['Extended Description: module_badtlds.php'] = 'كتل المضيفين التي تنتمي إلى TLD، التي يتم استخدامها بشكل متكرر من قبل مرسلي المحتوى غير المرغوب فيه والمتسللين والكيانات الشائنة الأخرى.';
$CIDRAM['lang']['Extended Description: module_cookies.php'] = 'يوفر بعض الحماية المحدودة ضد ملفات تعريف الارتباط الخطيرة.';
$CIDRAM['lang']['Extended Description: module_extras.php'] = 'يوفر بعض الحماية محدودة ضد مختلف ناقلات هجوم تستخدم عادة في طلبات.';
$CIDRAM['lang']['Extended Description: module_sfs.php'] = 'يحمي تسجيل صفحات ضد عناوين IP المدرجة من قبل SFS.';
$CIDRAM['lang']['Name: Bypasses'] = 'يتجاوز توقيع قياسي.';
$CIDRAM['lang']['Name: module_badhosts.php'] = 'سيئة المضيفين وحدة مانع';
$CIDRAM['lang']['Name: module_badhosts_isps.php'] = 'سيئة المضيفين وحدة مانع (ISP)';
$CIDRAM['lang']['Name: module_badtlds.php'] = 'وحدة حجب TLD سيئة';
$CIDRAM['lang']['Name: module_baidublocker.php'] = 'بايدو وحدة مانع';
$CIDRAM['lang']['Name: module_cookies.php'] = 'كوكي الماسح الضوئي';
$CIDRAM['lang']['Name: module_extras.php'] = 'وحدة اشياء الأمن اختياري';
$CIDRAM['lang']['Name: module_sfs.php'] = 'Stop Forum Spam وحدة';
$CIDRAM['lang']['Name: module_yandexblocker.php'] = 'بايدو وحدة مانع';
$CIDRAM['lang']['bNav_home_logout'] = '<a href="?">الرئيسية</a> | <a href="?cidram-page=logout">خروج</a>';
$CIDRAM['lang']['bNav_logout'] = '<a href="?cidram-page=logout">خروج</a>';
$CIDRAM['lang']['config_general_FrontEndLog'] = 'ملف لتسجيل محاولات الدخول الأمامية. تحديد اسم الملف، أو اتركه فارغا لتعطيل.';
$CIDRAM['lang']['config_general_allow_gethostbyaddr_lookup'] = 'السماح بعمليات البحث gethostbyaddr عندما يكون UDP غير متوفر؟ True = نعم [افتراضي]؛ False = لا.';
$CIDRAM['lang']['config_general_ban_override'] = 'تجاوز "forbid_on_block" متى "infraction_limit" تجاوزت؟ عندما تجاوز: الطلبات الممنوعة بإرجاع صفحة فارغة (لا يتم استخدام ملفات قالب). 200 = لا تجاوز [الافتراضي]؛ 403 = تجاوز مع "403 Forbidden"; 503 = تجاوز مع "503 Service unavailable".';
$CIDRAM['lang']['config_general_default_algo'] = 'يحدد الخوارزمية التي سيتم استخدامها لكل كلمات المرور والجلسات المستقبلية. خيارات: PASSWORD_DEFAULT (افتراضي)، PASSWORD_BCRYPT، PASSWORD_ARGON2I (يتطلب PHP &gt;= 7.2.0).';
$CIDRAM['lang']['config_general_default_dns'] = 'قائمة بفواصل من خوادم DNS لاستخدامها في عمليات البحث عن اسم المضيف. الافتراضي = "8.8.8.8,8.8.4.4" (Google DNS). تحذير: لا تغير هذا إلا إذا كنت تعرف ما تفعلونه!';
$CIDRAM['lang']['config_general_disable_cli'] = 'وضع تعطيل CLI؟ يتم تمكين وضع CLI افتراضيا، ولكن يمكن أن تتداخل أحيانا مع بعض أدوات الاختبار (مثل PHPUnit، على سبيل المثال) وغيرها من التطبيقات القائمة على المبادرة القطرية. إذا كنت لا تحتاج إلى تعطيل وضع CLI، يجب تجاهل هذا التوجيه. خاطئة = تمكين وضع CLI [الافتراضي]. صحيح = وضع تعطيل CLI.';
$CIDRAM['lang']['config_general_disable_frontend'] = 'تعطيل وصول front-end؟ وصول front-end يستطيع جعل CIDRAM أكثر قابلية للإدارة، ولكن يمكن أيضا أن تكون مخاطر أمنية محتملة. من المستحسن لإدارة CIDRAM عبر back-end متى أمكن، لكن وصول front-end متوفر عندما لم يكن ممكنا. يبقيه المعوقين إلا إذا كنت في حاجة إليها. False = تمكين وصول front-end؛ True = تعطيل وصول front-end [الافتراضي].';
$CIDRAM['lang']['config_general_disable_webfonts'] = 'هل تريد تعطيل ويبفونتس؟ True = نعم؛ False = لا [افتراضي].';
$CIDRAM['lang']['config_general_emailaddr'] = 'لو كنت تريد، يمكنك توفير عنوان البريد الإلكتروني هنا أن تعطى للمستخدمين عند أنها ممنوعة، بالنسبة لهم لاستخدامها كنقطة اتصال للحصول على الدعم والمساعدة لفي حال منهم سدت طريق الخطأ أو في ضلال. تحذير: أي عنوان البريد الإلكتروني الذي تزويد هنا وبالتأكيد سيتم شراؤها من قبل المتطفلين و برامج التطفل وكاشطات خلال المستخدمة هنا، و حينئذ، انها المستحسن أن إذا اخترت توفير عنوان البريد الإلكتروني هنا، يمكنك التأكد من أن عنوان البريد الإلكتروني الذي نورد هنا يمكن التخلص منها و/أو عنوان أنك لا تمانع في أن محتوى غير مرغوب فيه (بعبارات أخرى، وربما كنت لا تريد استخدام الرئيسية عناوين البريد الإلكتروني التجارية أو العناوين الشخصية الرئيسية الخاصة بك).';
$CIDRAM['lang']['config_general_emailaddr_display_style'] = 'كيف تفضل أن يتم تقديم عنوان البريد الإلكتروني إلى المستخدمين؟';
$CIDRAM['lang']['config_general_forbid_on_block'] = 'الذي رؤوس ينبغي CIDRAM الرد عندما حظر طلبات؟';
$CIDRAM['lang']['config_general_force_hostname_lookup'] = 'فرض بحث اسم المضيف؟ True = نعم؛ False = لا [افتراضي]. يتم إجراء عمليات البحث عن اسم المضيف عادة على أساس "حسب الحاجة"، ولكن يمكن إجبارها على جميع الطلبات. وقد يكون القيام بذلك مفيدا كوسيلة لتوفير معلومات أكثر تفصيلا في السجلات، ولكن قد يكون له أيضا أثر سلبي طفيف على الأداء.';
$CIDRAM['lang']['config_general_hide_version'] = 'إخفاء معلومات الإصدار من السجلات وإخراج الصفحة؟ True = نعم؛ False = لا [افتراضي].';
$CIDRAM['lang']['config_general_ipaddr'] = 'أين يمكن العثور على عنوان IP لربط الطلبات؟ (مفيدة للخدمات مثل لايتكلاود و مثلها). الافتراضي = REMOTE_ADDR. تحذير: لا تغير هذا إلا إذا كنت تعرف ما تفعلونه!';
$CIDRAM['lang']['config_general_lang'] = 'تحديد اللغة الافتراضية الخاصة بـ CIDRAM.';
$CIDRAM['lang']['config_general_log_banned_ips'] = 'من IP المحظورة في ملفات السجل؟ True = نعم [افتراضي]؛ False = لا.';
$CIDRAM['lang']['config_general_log_rotation_action'] = 'يحدد تدوير السجل عدد ملفات السجل التي يجب أن تكون موجودة في أي وقت. عند إنشاء ملفات السجل الجديدة، إذا تجاوز العدد الإجمالي لبيانات السجل الحد المحدد، فسيتم تنفيذ الإجراء المحدد. يمكنك تحديد الإجراء المطلوب هنا. Delete = احذف أقدم السجلات، حتى لا يتم تجاوز الحد. Archive = أرشفة أولاً، ثم احذف أقدم السجلات، حتى لا يتم تجاوز الحد.';
$CIDRAM['lang']['config_general_log_rotation_limit'] = 'يحدد تدوير السجل عدد ملفات السجل التي يجب أن تكون موجودة في أي وقت. عند إنشاء ملفات السجل الجديدة، إذا تجاوز العدد الإجمالي لبيانات السجل الحد المحدد، فسيتم تنفيذ الإجراء المحدد. يمكنك تحديد الحد المرغوب هنا. ستعمل القيمة 0 على تعطيل تدوير السجل.';
$CIDRAM['lang']['config_general_logfile'] = 'ملف يمكن قراءته بالعين لتسجيل كل محاولات الوصول سدت. تحديد اسم الملف، أو اتركه فارغا لتعطيل.';
$CIDRAM['lang']['config_general_logfileApache'] = 'ملف على غرار أباتشي لتسجيل كل محاولات الوصول سدت. تحديد اسم الملف، أو اتركه فارغا لتعطيل.';
$CIDRAM['lang']['config_general_logfileSerialized'] = 'ملف تسلسل لتسجيل كل محاولات الوصول سدت. تحديد اسم الملف، أو اتركه فارغا لتعطيل.';
$CIDRAM['lang']['config_general_maintenance_mode'] = 'هل تريد تمكين وضع الصيانة؟ True = نعم؛ False = لا [افتراضي]. تعطيل كل شيء بخلاف front-end. قد تكون مفيدة أحيانا عند تحديث نظام إدارة المحتوى والأطر وما إلى ذلك.';
$CIDRAM['lang']['config_general_max_login_attempts'] = 'الحد الأقصى لعدد محاولات تسجيل الدخول.';
$CIDRAM['lang']['config_general_numbers'] = 'كيف تفضل الأرقام ليتم عرضها؟ حدد المثال الذي يبدو أكثر صحيح لك.';
$CIDRAM['lang']['config_general_protect_frontend'] = 'يحدد ما إذا كانت الحماية التي توفرها عادة CIDRAM يجب أن تطبق الfront-end. True = نعم [افتراضي]؛ False = لا.';
$CIDRAM['lang']['config_general_search_engine_verification'] = 'محاولة للتحقق من طلبات من محركات البحث؟ التحقق من محركات البحث يضمن أنها لن تكون محظورة نتيجة لتجاوز الحد مخالفة (منع محركات البحث من موقع الويب الخاص بك عادة ما يكون لها تأثير سلبي على محرك البحث الترتيب، كبار المسئولين الاقتصاديين، إلخ). عند تمكين التحقق، محركات البحث يمكن أن يكون قد تم حظره، ولكن ليس محظورة. عند تعطيل التحقق، أنها يمكن أن تكون محظورة إذا تجاوزت الحد مخالفة. بالإضافة إلى، التحقق محرك البحث يحمي ضد الكيانات الخبيثة يتنكر في محركات البحث (سيتم حجب هذه الطلبات). True = تمكين التحقق محرك البحث [افتراضي]؛ False = تعطيل التحقق محرك البحث.';
$CIDRAM['lang']['config_general_silent_mode'] = 'يجب CIDRAM إعادة توجيه بصمت محاولات وصول مرفوض بدلا من عرض الصفحة "تم رفض الوصول"؟ اذا نعم، تحديد الموقع لإعادة توجيه محاولات وصول مرفوض. ان لم، ترك هذا الحقل فارغا.';
$CIDRAM['lang']['config_general_statistics'] = 'هل تريد تتبع إحصاءات استخدام CIDRAM؟ True = نعم؛ False = لا [افتراضي].';
$CIDRAM['lang']['config_general_timeFormat'] = 'شكل التواريخ المستخدم من قبل CIDRAM. ويمكن إضافة خيارات إضافية عند الطلب.';
$CIDRAM['lang']['config_general_timeOffset'] = 'المنطقة الزمنية تعويض في غضون دقائق.';
$CIDRAM['lang']['config_general_timezone'] = 'المنطقة الزمنية.';
$CIDRAM['lang']['config_general_truncate'] = 'اقتطاع ملفات السجل عندما تصل إلى حجم معين؟ القيمة هي الحجم الأقصى في بايت/كيلوبايت/ميغابايت/غيغابايت/تيرابايت الذي قد ينمو ملفات السجل إلى قبل اقتطاعه. القيمة الافتراضية 0KB تعطيل اقتطاع (ملفات السجل يمكن أن تنمو إلى أجل غير مسمى). ملاحظة: ينطبق على ملفات السجل الفردية! ولا يعتبر حجمها جماعيا.';
$CIDRAM['lang']['config_recaptcha_api'] = 'أي API لاستخدام؟ V2 أو Invisible؟';
$CIDRAM['lang']['config_recaptcha_expiry'] = 'عدد الساعات لنتذكر حالات اختبار reCAPTCHA.';
$CIDRAM['lang']['config_recaptcha_lockip'] = 'القفل reCAPTCHA إلى IP؟';
$CIDRAM['lang']['config_recaptcha_lockuser'] = 'القفل reCAPTCHA إلى المستخدمين؟';
$CIDRAM['lang']['config_recaptcha_logfile'] = 'تسجيل جميع محاولات اختبار reCAPTCHA؟ إذا كانت الإجابة بنعم، حدد اسم لاستخدامه في ملف السجل. ان لم، ترك هذا الحقل فارغا.';
$CIDRAM['lang']['config_recaptcha_secret'] = 'يجب أن تتطابق هذه القيمة إلى "secret key" لاختبار reCAPTCHA الخاص بك، التي يمكن العثور عليها داخل لوحة التحكم اختبار reCAPTCHA.';
$CIDRAM['lang']['config_recaptcha_signature_limit'] = 'الحد الأقصى لعدد التوقيعات المسموح بتشغيلها عند تقديم مثال reCAPTCHA. افتراضي = 1. إذا تم تجاوز هذا الرقم لأي طلب معين، لن يتم عرض مثال reCAPTCHA.';
$CIDRAM['lang']['config_recaptcha_sitekey'] = 'يجب أن تتطابق هذه القيمة إلى "site key" لاختبار reCAPTCHA الخاص بك، التي يمكن العثور عليها داخل لوحة التحكم اختبار reCAPTCHA.';
$CIDRAM['lang']['config_recaptcha_usemode'] = 'هذا ويعرف كيفية CIDRAM يجب استخدام اختبار reCAPTCHA (راجع وثائق).';
$CIDRAM['lang']['config_signatures_block_bogons'] = 'منع CIDRs المريخ/bogon؟ إذا كنت تتوقع اتصالات إلى موقع الويب الخاص بك من خلال الشبكة المحلية، هذا يجب أن يتم تعيين إلى false. ان لم، هذا يجب أن يتم تعيين إلى true.';
$CIDRAM['lang']['config_signatures_block_cloud'] = 'منع CIDRs التي تم تحديدها على أنها تنتمي إلى خدمات سحابية/الاستضافة؟ إذا كنت تعمل على خدمة API من موقع الويب الخاص بك، أو إذا كنت تتوقع مواقع أخرى للاتصال موقع الويب الخاص بك، هذا يجب أن يتم تعيين إلى false. إذا لم تقم بذلك، ثم، فإنه يجب تعيين إلى true.';
$CIDRAM['lang']['config_signatures_block_generic'] = 'منع CIDRs الموصى بها عموما للالقائمة السوداء؟ وهذا يشمل أي التوقيعات التي ليست جزءا من الفئات الأخرى.';
$CIDRAM['lang']['config_signatures_block_legal'] = 'حظر CIDRs ردا على الالتزامات القانونية؟ لا يجب أن يكون لهذا التوجيه عادة أي تأثير، لأن CIDRAM لا تربط أي CIDR مع "التزامات قانونية"، ولكنها موجودة كإجراء تحكم إضافي لصالح أي ملفات أو وحدات توقيع مخصصة قد تكون موجودة لأسباب قانونية.';
$CIDRAM['lang']['config_signatures_block_malware'] = 'حظر عناوين IP المرتبطة بالبرامج الضارة؟ وهذا يشمل خوادم C&C، والآلات المصابة، والآلات المستخدمة في توزيع البرامج الضارة، وما إلى ذلك.';
$CIDRAM['lang']['config_signatures_block_proxies'] = 'منع CIDRs التي تم تحديدها على أنها تنتمي إلى خدمات وكيل أو شبكات VPN؟ إذا كنت تحتاج إلى أن يكون المستخدمون قادرين على الوصول إلى موقع الويب الخاص بك من خدمات بروكسي أو شبكات VPN، هذا يجب أن يتم تعيين إلى false. ان لم، هذا يجب تعيين إلى true كوسيلة لتحسين الأمن.';
$CIDRAM['lang']['config_signatures_block_spam'] = 'منع CIDRs التي تم تحديدها على أنها مخاطر البريد المزعج؟ عندما يكون ذلك ممكنا، عموما، وهذا ينبغي دائما أن يتم تعيين إلى true.';
$CIDRAM['lang']['config_signatures_default_tracktime'] = 'كم ثانية لتعقب IP حظرت من قبل وحدات. افتراضي = 604800 (1 أسبوع).';
$CIDRAM['lang']['config_signatures_infraction_limit'] = 'يسمح الحد الأقصى لعدد المخالفات IP يمكن أن تتكبد قبل أن يتم حظره من قبل تتبع IP. افتراضي = 10.';
$CIDRAM['lang']['config_signatures_ipv4'] = 'وهناك قائمة من الملفات توقيع عناوين IPv4 التي CIDRAM يجب أن تحاول معالجة، مفصولة بفواصل.';
$CIDRAM['lang']['config_signatures_ipv6'] = 'وهناك قائمة من الملفات توقيع عناوين IPv6 التي CIDRAM يجب أن تحاول معالجة، مفصولة بفواصل.';
$CIDRAM['lang']['config_signatures_modules'] = 'قائمة الملفات وحدة لتحميل بعد التحقق من التوقيعات IPv4/IPv6، مفصولة بفواصل.';
$CIDRAM['lang']['config_signatures_track_mode'] = 'متى يجب أن تحسب المخالفات؟ False = عندما IP تم حظره من قبل وحدات. True = عندما IP يتم حظر لأي سبب من الأسباب.';
$CIDRAM['lang']['config_template_data_Magnification'] = 'تكبير الخط. افتراضي = 1.';
$CIDRAM['lang']['config_template_data_css_url'] = 'URL ملف CSS لمواضيع مخصصة.';
$CIDRAM['lang']['config_template_data_theme'] = 'الموضوع الافتراضي لاستخدام CIDRAM.';
$CIDRAM['lang']['field_activate'] = 'جعله نشطة';
$CIDRAM['lang']['field_banned'] = 'محظور';
$CIDRAM['lang']['field_blocked'] = 'مسدود';
$CIDRAM['lang']['field_clear'] = 'إلغاء';
$CIDRAM['lang']['field_clear_all'] = 'امسح الكل';
$CIDRAM['lang']['field_clickable_link'] = 'رابط قابل للنقر';
$CIDRAM['lang']['field_component'] = 'وحدة';
$CIDRAM['lang']['field_create_new_account'] = 'إنشاء حساب جديد';
$CIDRAM['lang']['field_deactivate'] = 'جعلها غير نشطة';
$CIDRAM['lang']['field_delete_account'] = 'حذف حساب';
$CIDRAM['lang']['field_delete_file'] = 'حذف';
$CIDRAM['lang']['field_download_file'] = 'تحميل';
$CIDRAM['lang']['field_edit_file'] = 'تحرير';
$CIDRAM['lang']['field_expiry'] = 'انقضاء';
$CIDRAM['lang']['field_false'] = 'False (خاطئة)';
$CIDRAM['lang']['field_file'] = 'ملف';
$CIDRAM['lang']['field_filename'] = 'اسم الملف: ';
$CIDRAM['lang']['field_filetype_directory'] = 'مجلد';
$CIDRAM['lang']['field_filetype_info'] = 'ملف {EXT}';
$CIDRAM['lang']['field_filetype_unknown'] = 'غير معروف';
$CIDRAM['lang']['field_first_seen'] = 'الروية الأولى';
$CIDRAM['lang']['field_infractions'] = 'مخالفات';
$CIDRAM['lang']['field_install'] = 'تثبيت';
$CIDRAM['lang']['field_ip_address'] = 'عنوان IP';
$CIDRAM['lang']['field_latest_version'] = 'احدث اصدار';
$CIDRAM['lang']['field_log_in'] = 'تسجيل الدخول';
$CIDRAM['lang']['field_new_name'] = 'اسم جديد:';
$CIDRAM['lang']['field_nonclickable_text'] = 'نص غير قابل للنقر';
$CIDRAM['lang']['field_ok'] = 'حسنا';
$CIDRAM['lang']['field_options'] = 'خيارات';
$CIDRAM['lang']['field_password'] = 'كلمه السر';
$CIDRAM['lang']['field_permissions'] = 'أذونات';
$CIDRAM['lang']['field_range'] = 'نطاق (الأول – الاخير)';
$CIDRAM['lang']['field_rename_file'] = 'إعادة تسمية';
$CIDRAM['lang']['field_reset'] = 'إعادة تعيين';
$CIDRAM['lang']['field_set_new_password'] = 'تحديد جديد كلمه السر';
$CIDRAM['lang']['field_size'] = 'الحجم الإجمالي: ';
$CIDRAM['lang']['field_size_GB'] = 'GB';
$CIDRAM['lang']['field_size_KB'] = 'KB';
$CIDRAM['lang']['field_size_MB'] = 'MB';
$CIDRAM['lang']['field_size_TB'] = 'TB';
$CIDRAM['lang']['field_size_bytes'] = 'بايت';
$CIDRAM['lang']['field_status'] = 'الحالة';
$CIDRAM['lang']['field_system_timezone'] = 'استخدام المنطقة الزمنية الافتراضية للنظام.';
$CIDRAM['lang']['field_tracking'] = 'التتبع';
$CIDRAM['lang']['field_true'] = 'True (صحيح)';
$CIDRAM['lang']['field_uninstall'] = 'الغاء التثبيت';
$CIDRAM['lang']['field_update'] = 'تحديث';
$CIDRAM['lang']['field_update_all'] = 'تحديث الجميع';
$CIDRAM['lang']['field_upload_file'] = 'تحميل ملف جديد';
$CIDRAM['lang']['field_username'] = 'اسم المستخدم';
$CIDRAM['lang']['field_verify'] = 'التحقق';
$CIDRAM['lang']['field_verify_all'] = 'التحقق من الكل';
$CIDRAM['lang']['field_your_version'] = 'الإصدار الخاص بك';
$CIDRAM['lang']['header_login'] = 'الرجاء تسجيل الدخول للمتابعة.';
$CIDRAM['lang']['label_active_config_file'] = 'ملف التكوين النشط: ';
$CIDRAM['lang']['label_banned'] = 'طلبات محظورة ';
$CIDRAM['lang']['label_blocked'] = 'الطلبات المحظورة';
$CIDRAM['lang']['label_branch'] = 'فرع أحدث مستقرة:';
$CIDRAM['lang']['label_check_modules'] = 'أيضا اختبار ضد وحدات.';
$CIDRAM['lang']['label_cidram'] = 'النسخة CIDRAM المستخدمة:';
$CIDRAM['lang']['label_clientinfo'] = 'معلومات المستخدممعلومات المستخدم:';
$CIDRAM['lang']['label_displaying'] = 'عرض <span class="txtRd">%s</span> إدخالات.';
$CIDRAM['lang']['label_displaying_that_cite'] = 'عرض <span class="txtRd">%1$s</span> إدخالات تشير إلى "%2$s".';
$CIDRAM['lang']['label_expires'] = 'تنتهي: ';
$CIDRAM['lang']['label_false_positive_risk'] = 'خطر إيجابية كاذبة: ';
$CIDRAM['lang']['label_fmgr_cache_data'] = 'بيانات ذاكرة التخزين المؤقت والملفات المؤقتة';
$CIDRAM['lang']['label_fmgr_disk_usage'] = 'CIDRAM إستخدام القرص: ';
$CIDRAM['lang']['label_fmgr_free_space'] = 'مساحة حرة: ';
$CIDRAM['lang']['label_fmgr_total_disk_usage'] = 'إجمالي استخدام القرص: ';
$CIDRAM['lang']['label_fmgr_total_space'] = 'إجمالي مساحة القرص: ';
$CIDRAM['lang']['label_fmgr_updates_metadata'] = 'تحديثات البيانات الوصفية للمكون';
$CIDRAM['lang']['label_hide'] = 'إخفائه';
$CIDRAM['lang']['label_never'] = 'أبدا';
$CIDRAM['lang']['label_os'] = 'نظام التشغيل المستخدمة:';
$CIDRAM['lang']['label_other'] = 'آخر';
$CIDRAM['lang']['label_other-ActiveIPv4'] = 'ملفات التوقيع IPv4 النشطة';
$CIDRAM['lang']['label_other-ActiveIPv6'] = 'ملفات التوقيع IPv6 النشطة';
$CIDRAM['lang']['label_other-ActiveModules'] = 'وحدات نشطة';
$CIDRAM['lang']['label_other-Since'] = 'تاريخ البدء';
$CIDRAM['lang']['label_php'] = 'النسخة PHP المستخدمة:';
$CIDRAM['lang']['label_reCAPTCHA'] = 'محاولات reCAPTCHA';
$CIDRAM['lang']['label_results'] = 'النتائج (%s في – %s مرفوض – %s قبلت – %s اندمجت – %s خارج):';
$CIDRAM['lang']['label_sapi'] = 'SAPI المستخدمة:';
$CIDRAM['lang']['label_show'] = 'اظهره';
$CIDRAM['lang']['label_signature_type'] = 'نوع التوقيع:';
$CIDRAM['lang']['label_stable'] = 'أحدث مستقرة:';
$CIDRAM['lang']['label_sysinfo'] = 'معلومات النظام:';
$CIDRAM['lang']['label_tests'] = 'اختبارات:';
$CIDRAM['lang']['label_total'] = 'مجموع';
$CIDRAM['lang']['label_unstable'] = 'أحدث غير مستقرة:';
$CIDRAM['lang']['label_used_with'] = 'يستعمل مع: ';
$CIDRAM['lang']['label_your_ip'] = 'عنوان IP الخاص بك:';
$CIDRAM['lang']['label_your_ua'] = 'وكيل المستخدم الخاص بك:';
$CIDRAM['lang']['link_accounts'] = 'حسابات';
$CIDRAM['lang']['link_cache_data'] = 'بيانات ذاكرة التخزين المؤقت';
$CIDRAM['lang']['link_cidr_calc'] = 'CIDR حاسبة';
$CIDRAM['lang']['link_config'] = 'التكوين';
$CIDRAM['lang']['link_documentation'] = 'توثيق';
$CIDRAM['lang']['link_file_manager'] = 'مدير الملفات';
$CIDRAM['lang']['link_home'] = 'الرئيسية';
$CIDRAM['lang']['link_ip_aggregator'] = 'IP Aggregator';
$CIDRAM['lang']['link_ip_test'] = 'اختبار IP';
$CIDRAM['lang']['link_ip_tracking'] = 'التتبع IP';
$CIDRAM['lang']['link_logs'] = 'سجلات';
$CIDRAM['lang']['link_range'] = 'جداول الشبكة الفرعية';
$CIDRAM['lang']['link_sections_list'] = 'قائمة الأقسام';
$CIDRAM['lang']['link_statistics'] = 'الإحصاء';
$CIDRAM['lang']['link_textmode'] = 'تنسيق النص: <a href="%1$sfalse%2$s">بسيط</a> – <a href="%1$strue%2$s">تهيئتها</a> – <a href="%1$stally%2$s">عد</a>';
$CIDRAM['lang']['link_updates'] = 'التحديثات';
$CIDRAM['lang']['logs_logfile_doesnt_exist'] = 'هذا سجل غير موجود!';
$CIDRAM['lang']['logs_no_logfile_selected'] = 'لا سجلات مختار.';
$CIDRAM['lang']['logs_no_logfiles_available'] = 'لا سجلات متاح.';
$CIDRAM['lang']['max_login_attempts_exceeded'] = 'تجاوز الحد الأقصى لعدد محاولات تسجيل الدخول؛ تم رفض الوصول.';
$CIDRAM['lang']['previewer_days'] = 'أيام';
$CIDRAM['lang']['previewer_hours'] = 'ساعات';
$CIDRAM['lang']['previewer_minutes'] = 'الدقائق';
$CIDRAM['lang']['previewer_months'] = 'الشهور';
$CIDRAM['lang']['previewer_seconds'] = 'ثواني';
$CIDRAM['lang']['previewer_weeks'] = 'أسابيع';
$CIDRAM['lang']['previewer_years'] = 'سنوات';
$CIDRAM['lang']['response_accounts_already_exists'] = 'اسم المستخدم موجود بالفعل!';
$CIDRAM['lang']['response_accounts_created'] = 'تم انشاء الحساب بنجاح!';
$CIDRAM['lang']['response_accounts_deleted'] = 'تم حذف الحساب بنجاح!';
$CIDRAM['lang']['response_accounts_doesnt_exist'] = 'حساب غير موجود.';
$CIDRAM['lang']['response_accounts_password_updated'] = 'تم تحديث كلمه السر بنجاح!';
$CIDRAM['lang']['response_activated'] = 'نجحت في جعل نشطة';
$CIDRAM['lang']['response_activation_failed'] = 'فشلت في جعله نشطة!';
$CIDRAM['lang']['response_checksum_error'] = 'خطأ أختباري! تم رفض الملف!';
$CIDRAM['lang']['response_component_successfully_installed'] = 'تم تثبيت الوحدة بنجاح';
$CIDRAM['lang']['response_component_successfully_uninstalled'] = 'تم الغاء تثبيت الوحدة بنجاح';
$CIDRAM['lang']['response_component_successfully_updated'] = 'تم تحديث الوحدة بنجاح';
$CIDRAM['lang']['response_component_uninstall_error'] = 'حدث خطأ أثناء محاولة إلغاء تثبيت الوحدة.';
$CIDRAM['lang']['response_configuration_updated'] = 'تم تحديث التكوين بنجاح';
$CIDRAM['lang']['response_deactivated'] = 'نجحت في جعل غير نشطة';
$CIDRAM['lang']['response_deactivation_failed'] = 'فشلت في جعله غير نشطة!';
$CIDRAM['lang']['response_delete_error'] = 'فشلت في حذف!';
$CIDRAM['lang']['response_directory_deleted'] = 'تم حذف الدليل بنجاح!';
$CIDRAM['lang']['response_directory_renamed'] = 'تم اعادة تسمية الدليل بنجاح!';
$CIDRAM['lang']['response_error'] = 'خطأ';
$CIDRAM['lang']['response_failed_to_install'] = 'فشل التثبيت!';
$CIDRAM['lang']['response_failed_to_update'] = 'فشل التحديث!';
$CIDRAM['lang']['response_file_deleted'] = 'ملف حذف بنجاح!';
$CIDRAM['lang']['response_file_edited'] = 'ملف تعديل بنجاح!';
$CIDRAM['lang']['response_file_renamed'] = 'ملف إعادة تسمية بنجاح!';
$CIDRAM['lang']['response_file_uploaded'] = 'ملف تحميلها بنجاح!';
$CIDRAM['lang']['response_login_invalid_password'] = 'فشل تسجيل الدخول! كلمة السر غير صالحة!';
$CIDRAM['lang']['response_login_invalid_username'] = 'فشل تسجيل الدخول! اسم المستخدم غير موجود!';
$CIDRAM['lang']['response_login_password_field_empty'] = 'كلمه السر حقل فارغ!';
$CIDRAM['lang']['response_login_username_field_empty'] = 'اسم المستخدم حقل فارغ!';
$CIDRAM['lang']['response_login_wrong_endpoint'] = 'نقطة نهاية خاطئة!';
$CIDRAM['lang']['response_no'] = 'لا';
$CIDRAM['lang']['response_possible_problem_found'] = 'تم العثور على مشكلة محتملة.';
$CIDRAM['lang']['response_rename_error'] = 'فشل في إعادة تسمية!';
$CIDRAM['lang']['response_statistics_cleared'] = 'تم مسح الإحصاءات.';
$CIDRAM['lang']['response_tracking_cleared'] = 'التتبع ألغيت.';
$CIDRAM['lang']['response_updates_already_up_to_date'] = 'تحديث غير مطلوب.';
$CIDRAM['lang']['response_updates_not_installed'] = 'وحدة غير مثبت!';
$CIDRAM['lang']['response_updates_not_installed_php'] = 'وحدة غير مثبت (يتطلب PHP &gt;= {V})!';
$CIDRAM['lang']['response_updates_outdated'] = 'عفا عليها الزمن!';
$CIDRAM['lang']['response_updates_outdated_manually'] = 'عفا عليها الزمن (يرجى تحديث يدويا)!';
$CIDRAM['lang']['response_updates_outdated_php_version'] = 'عفا عليها الزمن (يتطلب PHP &gt;= {V})!';
$CIDRAM['lang']['response_updates_unable_to_determine'] = 'غير قادر على تحديد.';
$CIDRAM['lang']['response_upload_error'] = 'فشل لتحميل!';
$CIDRAM['lang']['response_verification_failed'] = 'فشل التحقق! يمكن أن يكون المكون تالفا.';
$CIDRAM['lang']['response_verification_success'] = 'نجاح التحقق! لم يتم العثور على أية مشاكل.';
$CIDRAM['lang']['response_yes'] = 'نعم';
$CIDRAM['lang']['state_async_deny'] = 'أذونات غير كافية لأداء طلبات غير متزامنة. حاول تسجيل الدخول مرة أخرى.';
$CIDRAM['lang']['state_cache_is_empty'] = 'ذاكرة التخزين المؤقت فارغة.';
$CIDRAM['lang']['state_complete_access'] = 'الوصول كامل';
$CIDRAM['lang']['state_component_is_active'] = 'وحدة نشطة.';
$CIDRAM['lang']['state_component_is_inactive'] = 'وحدة غير نشطة.';
$CIDRAM['lang']['state_component_is_provisional'] = 'وحدة نشطة جزئيا.';
$CIDRAM['lang']['state_default_password'] = 'تحذير: يستخدم الافتراضي كلمه السر!';
$CIDRAM['lang']['state_ignored'] = 'تجاهل';
$CIDRAM['lang']['state_loading'] = 'جار التحميل...';
$CIDRAM['lang']['state_loadtime'] = 'اكتمل طلب الصفحة خلال <span class="txtRd">%s</span> ثوان.';
$CIDRAM['lang']['state_logged_in'] = 'حاليا على.';
$CIDRAM['lang']['state_logs_access_only'] = 'سجلات الوصول فقط';
$CIDRAM['lang']['state_maintenance_mode'] = 'تحذير: تم تمكين وضع الصيانة!';
$CIDRAM['lang']['state_password_not_valid'] = ' تحذير: هذا الحساب لا يستخدم كلمه السر صالحة !';
$CIDRAM['lang']['state_risk_high'] = 'عالية';
$CIDRAM['lang']['state_risk_low'] = 'قليل';
$CIDRAM['lang']['state_risk_medium'] = 'متوسطة';
$CIDRAM['lang']['state_sl_totals'] = 'المجاميع (التوقيعات: <span class="txtRd">%s</span> – أقسام التوقيع: <span class="txtRd">%s</span> – ملفات التوقيع: <span class="txtRd">%s</span>).';
$CIDRAM['lang']['state_tracking'] = 'تتبع حاليا %s عناوين IP.';
$CIDRAM['lang']['switch-hide-non-outdated-set-false'] = 'لا يخفون غير عفا عليها الزمن';
$CIDRAM['lang']['switch-hide-non-outdated-set-true'] = 'يخفون غير عفا عليها الزمن';
$CIDRAM['lang']['switch-hide-unused-set-false'] = 'لا يخفون غير مستعمل';
$CIDRAM['lang']['switch-hide-unused-set-true'] = 'يخفون غير مستعمل';
$CIDRAM['lang']['switch-tracking-blocked-already-set-false'] = 'لا تحقق من ملفات التوقيع';
$CIDRAM['lang']['switch-tracking-blocked-already-set-true'] = 'تحقق من ملفات التوقيع';
$CIDRAM['lang']['switch-tracking-hide-banned-blocked-set-false'] = 'لا تخفي عناوين IP المحظورة';
$CIDRAM['lang']['switch-tracking-hide-banned-blocked-set-true'] = 'تخفي عناوين IP المحظورة';
$CIDRAM['lang']['tip_accounts'] = 'مرحبا، {username}.<br />الصفحة حسابات يسمح لك للسيطرة على الذي يمكن الوصول ألfront-end CIDRAM.';
$CIDRAM['lang']['tip_cache_data'] = 'مرحبا، {username}.<br />هنا يمكنك مراجعة محتويات ذاكرة التخزين المؤقت.';
$CIDRAM['lang']['tip_cidr_calc'] = 'مرحبا، {username}.<br />آلة حاسبة CIDR يسمح لك لحساب CIDRs حيث عنوان IP هو عامل.';
$CIDRAM['lang']['tip_config'] = 'مرحبا، {username}.<br />الصفحة التكوين يسمح لك لتعديل التكوين CIDRAM عن طريق ألfront-end.';
$CIDRAM['lang']['tip_custom_ua'] = 'أدخل وكيل المستخدم (user agent) هنا (انها اختيارية).';
$CIDRAM['lang']['tip_donate'] = 'CIDRAM يتم توفير مجانا، ولكن إذا كنت تريد التبرع للمشروع، يمكنك القيام بذلك عن طريق النقر على زر التبرع.';
$CIDRAM['lang']['tip_enter_ip_here'] = 'أدخل IP هنا.';
$CIDRAM['lang']['tip_enter_ips_here'] = 'أدخل IPs هنا.';
$CIDRAM['lang']['tip_fe_cookie_warning'] = 'الملاحظة: يستخدم CIDRAM ملف تعريف ارتباط لمصادقة تسجيلات الدخول. من خلال تسجيل الدخول، فإنك تعطي موافقتك على إنشاء ملف تعريف ارتباط وتخزينه بواسطة المتصفح.';
$CIDRAM['lang']['tip_file_manager'] = 'مرحبا، {username}.<br />مدير الملفات يسمح لك لحذف، تعديل، وتحميل الملفات. استخدام بحذر (هل يمكن كسر التثبيت مع هذا).';
$CIDRAM['lang']['tip_home'] = 'مرحبا، {username}.<br />هذا هو الصفحة رئيسية ألfront-end CIDRAM. اختر ارتباط من قائمة التنقل على اليمين للمتابعة.';
$CIDRAM['lang']['tip_ip_aggregator'] = 'مرحبا، {username}.<br />IP aggregator يسمح لك للتعبير عن IP و CIDR في أصغر طريقة ممكنة. أدخل البيانات التي سيتم تجميعها واضغط على "حسنا".';
$CIDRAM['lang']['tip_ip_test'] = 'مرحبا، {username}.<br />الصفحة اختبار IP يسمح لك لاختبار سواء عناوين IP مسدودة من التوقيعات المثبتة حاليا.';
$CIDRAM['lang']['tip_ip_test_module_switch'] = '(عند عدم تحديده، سيتم اختبار ملفات التوقيع فقط).';
$CIDRAM['lang']['tip_ip_tracking'] = 'مرحبا، {username}.<br />التتبع IP يسمح لك للتحقق من حالة تتبع عناوين IP، تحقق محظورة، و إلغاء تتبع إذا كنت تريد أن تفعل ذلك.';
$CIDRAM['lang']['tip_login'] = 'الافتراضي اسم المستخدم: <span class="txtRd">admin</span> – الافتراضي كلمه السر: <span class="txtRd">password</span>';
$CIDRAM['lang']['tip_logs'] = 'مرحبا، {username}.<br />اختار سجلات من القائمة أدناه لعرضها.';
$CIDRAM['lang']['tip_range'] = 'مرحبا، {username}.<br />تعرض هذه الصفحة بعض المعلومات الإحصائية الأساسية حول نطاقات IP التي تغطيها ملفات التوقيع النشطة حاليًا.';
$CIDRAM['lang']['tip_sections_list'] = 'مرحبا، {username}.<br />تسرد هذه الصفحة الأقسام الموجودة في ملفات التوقيع النشطة حاليا.';
$CIDRAM['lang']['tip_see_the_documentation'] = 'راجع <a href="https://github.com/CIDRAM/CIDRAM/blob/master/_docs/readme.ar.md#SECTION6">وثائق</a> للحصول على معلومات حول مختلف توجيهات التكوين ونيتهم.';
$CIDRAM['lang']['tip_statistics'] = 'مرحبا، {username}.<br />تعرض هذه الصفحة بعض إحصاءات الاستخدام الأساسية المتعلقة بتثبيت CIDRAM.';
$CIDRAM['lang']['tip_statistics_disabled'] = 'ملاحظة: يتم تعطيل تتبع الإحصاءات حاليا، ولكن يمكن تمكينه عبر صفحة التكوين.';
$CIDRAM['lang']['tip_updates'] = 'مرحبا، {username}.<br />الصفحة تحديثات يسمح لك لتثبيت، إلغاء، ولتحديث المكونات المختلفة CIDRAM (حزمة الأساسية، التوقيعات، الملفات L10N، إلخ).';
$CIDRAM['lang']['title_accounts'] = 'CIDRAM – حسابات';
$CIDRAM['lang']['title_cache_data'] = 'CIDRAM – بيانات ذاكرة التخزين المؤقت';
$CIDRAM['lang']['title_cidr_calc'] = 'CIDRAM – CIDR حاسبة';
$CIDRAM['lang']['title_config'] = 'CIDRAM – التكوين';
$CIDRAM['lang']['title_file_manager'] = 'CIDRAM – مدير الملفات';
$CIDRAM['lang']['title_home'] = 'CIDRAM – الرئيسية';
$CIDRAM['lang']['title_ip_aggregator'] = 'CIDRAM – IP Aggregator';
$CIDRAM['lang']['title_ip_test'] = 'CIDRAM – اختبار IP';
$CIDRAM['lang']['title_ip_tracking'] = 'CIDRAM – التتبع IP';
$CIDRAM['lang']['title_login'] = 'CIDRAM – تسجيل الدخول';
$CIDRAM['lang']['title_logs'] = 'CIDRAM – سجلات';
$CIDRAM['lang']['title_range'] = 'CIDRAM – جداول الشبكة الفرعية';
$CIDRAM['lang']['title_sections_list'] = 'CIDRAM – قائمة الأقسام';
$CIDRAM['lang']['title_statistics'] = 'CIDRAM – الإحصاء';
$CIDRAM['lang']['title_updates'] = 'CIDRAM – التحديثات';
$CIDRAM['lang']['warning'] = 'تحذيرات:';
$CIDRAM['lang']['warning_php_1'] = 'لم يتم دعم إصدار PHP الخاص بك بشكل نشط بعد الآن! يوصى بالتحديث!';
$CIDRAM['lang']['warning_php_2'] = 'إصدار PHP الخاص بك معرض للخطر بشدة! ينصح بشدة تحديث!';
$CIDRAM['lang']['warning_signatures_1'] = 'لا ملفات التوقيع نشطة!';

$CIDRAM['lang']['info_some_useful_links'] = 'بعض الروابط المفيدة:<ul>
            <li><a href="https://github.com/CIDRAM/CIDRAM/issues" dir="ltr">CIDRAM Issues @ GitHub</a> – صفحة المشكلات لCIDRAM (الدعم والمساعدة، الخ).</li>
            <li><a href="https://wordpress.org/plugins/cidram/" dir="ltr">CIDRAM @ WordPress.org</a> – WordPress البرنامج المساعد ل CIDRAM.</li>
            <li><a href="https://sourceforge.net/projects/cidram/" dir="ltr">CIDRAM @ SourceForge</a> – بديلة حمل مرآة للCIDRAM.</li>
            <li><a href="https://websectools.com/" dir="ltr">WebSecTools.com</a> – بعض الأدوات البسيطة ل جعل المواقع آمنة.</li>
            <li><a href="https://macmathan.info/blocklists" dir="ltr">MacMathan.info Range Blocks</a> – يحتوي على كتل مجموعة اختيارية التي يمكن أن تضاف إلى CIDRAM لمنع أي بلد غير المرغوب فيها من الوصول إلى موقع الويب الخاص بك.</li>
            <li><a href="https://www.facebook.com/groups/2204685680/" dir="ltr">Global PHP Group @ Facebook</a> – PHP مصادر التعلم والمناقشة.</li>
            <li><a href="https://php.earth/" dir="ltr">PHP.earth</a> – PHP مصادر التعلم والمناقشة.</li>
            <li><a href="http://bgp.he.net/" dir="ltr">Hurricane Electric BGP Toolkit</a> – الحصول على CIDRs من ل ASNs، تحديد العلاقات ASN، اكتشف ل ASNs استنادا إلى أسماء الشبكات، إلخ.</li>
            <li><a href="https://www.stopforumspam.com/forum/" dir="ltr">Forum @ Stop Forum Spam</a> – منتدى للنقاش مفيد حول وقف منتدى المزعج.</li>
            <li><a href="https://radar.qrator.net/" dir="ltr">Radar by Qrator</a> – أداة مفيدة للتحقق من الاتصال من ل ASNs فضلا عن العديد من المعلومات الأخرى حول ل ASNs.</li>
            <li><a href="http://www.ipdeny.com/ipblocks/" dir="ltr">IPdeny IP country blocks</a> – خدمة لتوليد التواقيع في جميع أنحاء البلاد.</li>
            <li><a href="https://www.google.com/transparencyreport/safebrowsing/malware/" dir="ltr">Google Malware Dashboard</a> – تقارير يعرض بخصوص معدلات الإصابة الخبيثة أجل ASNs.</li>
            <li><a href="https://www.spamhaus.org/statistics/botnet-asn/" dir="ltr">The Spamhaus Project</a> – تقارير يعرض بخصوص معدلات الإصابة الروبوتات أجل ASNs.</li>
            <li><a href="https://www.abuseat.org/public/asn.html" dir="ltr">Abuseat.org\'s Composite Blocking List</a> – تقارير يعرض بخصوص معدلات الإصابة الروبوتات أجل ASNs.</li>
            <li><a href="https://abuseipdb.com/" dir="ltr">AbuseIPDB</a> – تحتفظ بقاعدة بيانات من عناوين IP المسيئة المعروفة؛ يوفر API لفحص والإبلاغ عناوين IP.</li>
            <li><a href="https://www.megarbl.net/index.php" dir="ltr">MegaRBL.net</a> – يحافظ المعروضة من الاطر المعروفة؛ مفيدة لفحص أنشطة ASN/IP البريد المزعج.</li>
            <li><a href="https://maikuolan.github.io/Vulnerability-Charts/" dir="ltr">Vulnerability Charts</a> – يسرد نسخ آمنة وغير آمنة من مختلف الحزم (HHVM، PHP، phpMyAdmin، Python، إلخ).</li>
            <li><a href="https://maikuolan.github.io/Compatibility-Charts/" dir="ltr">Compatibility Charts</a> – قوائم معلومات التوافق لمختلف الحزم (CIDRAM، phpMussel، إلخ).</li>
        </ul>';
