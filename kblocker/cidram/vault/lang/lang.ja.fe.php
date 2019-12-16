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
 * This file: Japanese language data for the front-end (last modified: 2018.05.08).
 */

/** Prevents execution from outside of CIDRAM. */
if (!defined('CIDRAM')) {
    die('[CIDRAM] This should not be accessed directly.');
}

foreach (['IPv4', 'IPv6'] as $CIDRAM['IPvX']) {
    $CIDRAM['Pre'] = 'デフォルト' . $CIDRAM['IPvX'] . '署名、​通常はメインパッケージに含まれています。​';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX']] = $CIDRAM['Pre'] . '不要なクラウドサービスと非人のエンドポイントをブロックします。';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX'] . '-Bogons'] = $CIDRAM['Pre'] . 'ボゴン/火星ＣＩＤＲをブロックします。';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX'] . '-ISPs'] = $CIDRAM['Pre'] . 'スパマーを持つ危険なＩＳＰをブロックします。';
    $CIDRAM['lang']['Extended Description: ' . $CIDRAM['IPvX'] . '-Other'] = $CIDRAM['Pre'] . 'プロキシ、​ＶＰＮ、​およびその他の不要なサービスのＣＩＤＲをブロックします。';
    $CIDRAM['Pre'] = $CIDRAM['IPvX'] . 'のシグネチャファイル​（%s）。';
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX']] = sprintf($CIDRAM['Pre'], '不要なクラウドサービスと非人のエンドポイント');
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX'] . '-Bogons'] = sprintf($CIDRAM['Pre'], 'ボゴン/火星ＣＩＤＲ');
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX'] . '-ISPs'] = sprintf($CIDRAM['Pre'], 'スパマーを持つ危険なＩＳＰ');
    $CIDRAM['lang']['Name: ' . $CIDRAM['IPvX'] . '-Other'] = sprintf($CIDRAM['Pre'], 'プロキシ、ＶＰＮ、およびその他の不要なサービスのＣＩＤＲ');
}
unset($CIDRAM['Pre'], $CIDRAM['IPvX']);

$CIDRAM['lang']['Extended Description: Bypasses'] = 'デフォルト署名バイパス、​通常はメインパッケージに含まれています。';
$CIDRAM['lang']['Extended Description: CIDRAM'] = 'メインパッケージ​（署名、​ドキュメンテーション、​コンフィギュレーション、​は含まれません）。';
$CIDRAM['lang']['Extended Description: module_badhosts.php'] = 'スパマー、ハッカー、およびその他の悪意のあるエンティティによって頻繁に使用されるホストをブロックします。';
$CIDRAM['lang']['Extended Description: module_badhosts_isps.php'] = 'スパマー、ハッカー、その他の悪意のあるエンティティによって頻繁に使用されるＩＳＰに属するホストをブロックします。';
$CIDRAM['lang']['Extended Description: module_badtlds.php'] = 'スパマー、ハッカー、その他の悪意のあるエンティティによって頻繁に使用されるＴＬＤに属するホストをブロックします。';
$CIDRAM['lang']['Extended Description: module_cookies.php'] = '危険なクッキーに対するいくつかの限定された保護を提供します。';
$CIDRAM['lang']['Extended Description: module_extras.php'] = 'リクエストでよく使用される攻撃経路に対して、​いくつかの制限された保護を提供します。';
$CIDRAM['lang']['Extended Description: module_sfs.php'] = 'ＳＦＳによってリストされたＩＰに対して登録ページとログインページを保護します。';
$CIDRAM['lang']['Name: Bypasses'] = 'デフォルト署名バイパス。';
$CIDRAM['lang']['Name: module_badhosts.php'] = '危険なホスト・ブロッカーモジュール';
$CIDRAM['lang']['Name: module_badhosts_isps.php'] = '危険なホスト・ブロッカーモジュール（ＩＳＰ）';
$CIDRAM['lang']['Name: module_badtlds.php'] = '危険なホストＴＬＤブロッカーモジュール';
$CIDRAM['lang']['Name: module_baidublocker.php'] = 'Baiduブロッカーモジュール';
$CIDRAM['lang']['Name: module_cookies.php'] = 'オプショナル・クッキー・スキャナ・モジュール';
$CIDRAM['lang']['Name: module_extras.php'] = 'オプショナル・セキュリティ・エクストラス・モジュール';
$CIDRAM['lang']['Name: module_sfs.php'] = 'Stop Forum Spam モジュール';
$CIDRAM['lang']['Name: module_yandexblocker.php'] = 'Yandexブロッカーモジュール';
$CIDRAM['lang']['bNav_home_logout'] = '<a href="?">ホーム</a> | <a href="?cidram-page=logout">ログアウト</a>';
$CIDRAM['lang']['bNav_logout'] = '<a href="?cidram-page=logout">ログアウト</a>';
$CIDRAM['lang']['config_general_FrontEndLog'] = 'フロントエンド・ログインの試みを記録するためのファイル。​ファイル名指定するか、​無効にしたい場合は空白のままにして下さい。';
$CIDRAM['lang']['config_general_allow_gethostbyaddr_lookup'] = 'ＵＤＰが利用できない場合、gethostbyaddrルックアップを許可しますか？​True = はい（Default/デフォルルト）；​False = いいえ。';
$CIDRAM['lang']['config_general_ban_override'] = '「infraction_limit」を超えたときに「forbid_on_block」を上書きしますか？​上書きするとき：ブロックされたリクエストは空白のページを返します（テンプレートファイルは使用されません）。​２００ = 上書きしない（Default/デフォルルト）；​４０３ = 「403 Forbidden」で上書きする；​５０３ = 「503 Service unavailable」で上書きする。';
$CIDRAM['lang']['config_general_default_algo'] = '将来のすべてのパスワードとセッションに使用するアルゴリズムを定義します。​オプション：​PASSWORD_DEFAULT（Default/デフォルルト）、​PASSWORD_BCRYPT、​PASSWORD_ARGON2I ​（ＰＨＰ >= 7.2.0 が必要）。';
$CIDRAM['lang']['config_general_default_dns'] = 'ホスト名検索に使用する、​ＤＮＳ（ドメイン・ネーム・システム）サーバーのカンマ区切りリスト。​Default（デフォルルト） = "8.8.8.8,8.8.4.4" （Google DNS）。​注意：あなたが何をしているのか、​分からない限り、​これを変更しないでください。';
$CIDRAM['lang']['config_general_disable_cli'] = 'ＣＬＩモードを無効にするか？​ＣＬＩモード（シーエルアイ・モード）はデフォルトでは有効になっていますが、​テストツール（PHPUnit等）やＣＬＩベースのアプリケーションと干渉しあう可能性が無いとは言い切れません。​ＣＬＩモードを無効にする必要がなければ、​このデレクティブは無視してもらって結構です。​<code>false</code>（偽） = ＣＬＩモードを有効にします（Default/デフォルルト）；​<code>true</code>（真） = ＣＬＩモードを無効にします。';
$CIDRAM['lang']['config_general_disable_frontend'] = 'フロントエンドへのアクセスを無効にするか？​フロントエンドへのアクセスは、​CIDRAMをより管理しやすくすることができます。​前記、​それはまた、​潜在的なセキュリティリスクになる可能性があります。​バックエンドを経由して管理することをお勧めします、​しかし、​これが不可能な場合、​フロントエンドへのアクセスが提供され。​あなたがそれを必要としない限り、​それを無効にします。​<code>false</code>（偽） = フロントエンドへのアクセスを有効にします；​<code>true</code>（真） = フロントエンドへのアクセスを無効にします（Default/デフォルルト）。';
$CIDRAM['lang']['config_general_disable_webfonts'] = 'ウェブフォンツを無効にしますか？​True = はい；​False = いいえ（Default/デフォルルト）。';
$CIDRAM['lang']['config_general_emailaddr'] = 'ここにＥメールアドレスを入力して、​ユーザーがブロックされているときにユーザーに送信することができます。​これはサポートと支援に使用できます（誤ってブロックされた場合、​等）。​警告：​ここに入力された電子Ｅメールアドレスは、​おそらくスパムロボットによって取得されます。​ここで提供される電子Ｅメールアドレスは、​すべて使い捨てにすることを強く推奨します（例えば、​プライマリ個人アドレスまたはビジネスアドレスを使用しない、​等）。';
$CIDRAM['lang']['config_general_emailaddr_display_style'] = 'ユーザーに電子Ｅメール・アドレスを提示することをどのように希望しますか？';
$CIDRAM['lang']['config_general_forbid_on_block'] = '何ヘッダー使用する必要がありますか（リクエストをブロックしたとき）？';
$CIDRAM['lang']['config_general_force_hostname_lookup'] = 'ホスト名検索を強制しますか？​True = はい；​False = いいえ（Default/デフォルルト）。​ホスト名検索は、通常、「必要に応じて」実行されますが、すべてのリクエストに対して強制することができます。​これは、より詳細な情報をログファイルに提供する手段として有用ですが、パフォーマンスに多少の悪影響を及ぼすこともあります。';
$CIDRAM['lang']['config_general_hide_version'] = 'ログとページ出力からバージョン情報を隠すか？​True = はい；​False = いいえ（Default/デフォルルト）。';
$CIDRAM['lang']['config_general_ipaddr'] = '接続リクエストのＩＰアドレスをどこで見つけるべきかについて（Cloudflareのようなサービスに対して有効）。​Default（デフォルト設定） = REMOTE_ADDR。​注意：あなたが何をしているのか、​分からない限り、​これを変更しないでください。';
$CIDRAM['lang']['config_general_lang'] = 'CIDRAMのデフォルト言語を設定します。';
$CIDRAM['lang']['config_general_log_banned_ips'] = '禁止されたＩＰからブロックされたリクエストをログファイルに含めますか？​True = はい（Default/デフォルルト）；​False = いいえ。';
$CIDRAM['lang']['config_general_log_rotation_action'] = 'ログ・ローテーションは、一度に存在する必要があるログ・ファイルの数を制限します。​新しいログ・ファイルが作成されると、ログ・ファイルの総数が指定された制限を超えると、指定されたアクションが実行されます。​ここで希望のアクションを指定できます。 「Delete」 = 最も古いログ・ファイルを削除して、制限を超過しないようにします。 「Archive」 = 最初にアーカイブしてから、最も古いログ・ファイルを削除して、制限を超過しないようにします。';
$CIDRAM['lang']['config_general_log_rotation_limit'] = 'ログ・ローテーションは、一度に存在する必要があるログ・ファイルの数を制限します。​新しいログ・ファイルが作成されると、ログ・ファイルの総数が指定された制限を超えると、指定されたアクションが実行されます。​ここで希望の制限を指定することができます。​値「0」は、ログ・ローテーションを無効にします。';
$CIDRAM['lang']['config_general_logfile'] = 'アクセス試行阻止の記録、​人間によって読み取り可能。​ファイル名指定するか、​無効にしたい場合は空白のままにして下さい。';
$CIDRAM['lang']['config_general_logfileApache'] = 'アクセス試行阻止の記録、​Apacheスタイル。​ファイル名指定するか、​無効にしたい場合は空白のままにして下さい。';
$CIDRAM['lang']['config_general_logfileSerialized'] = 'アクセス試行阻止の記録、​シリアル化されました。​ファイル名指定するか、​無効にしたい場合は空白のままにして下さい。';
$CIDRAM['lang']['config_general_maintenance_mode'] = 'メンテナンス・モードを有効にしますか？​True = はい；​False = いいえ（Default/デフォルルト）。​フロントエンド以外のすべてを無効にします。​ＣＭＳ、フレームワークなどを更新するときに便利です。';
$CIDRAM['lang']['config_general_max_login_attempts'] = 'ログイン試行の最大回数（フロントエンド）。';
$CIDRAM['lang']['config_general_numbers'] = 'どのように数字を表示するのが好きですか？​あなたに一番正しい例を選択してください。';
$CIDRAM['lang']['config_general_protect_frontend'] = 'CIDRAMによって通常提供される保護をフロントエンドに適用するかどうかを指定します。​True = はい（Default/デフォルルト）；​False = いいえ。';
$CIDRAM['lang']['config_general_search_engine_verification'] = '検索エンジンからのリクエストを確認する必要がありますか？​検索エンジンを確認することで、​違反の最大数を超えたために検索エンジンが禁止されないことが保証されます（検索エンジンを禁止することは、​通常、​検索エンジンランキング、​ＳＥＯなどに悪影響を及ぼします）。​確認されると、​検索エンジンがブロックされることがありますが、​しかしは禁止されません。​検証されていない場合は、​違反の最大を超えた結果、​禁止される可能性があります。​さらに、​検索エンジンの検証は、​詐称された検索エンジンから保護します （これらのリクエストはブロックされます）。​True = 検索エンジンの検証を有効にする（Default/デフォルルト）；​False = 検索エンジンの検証を無効にする。';
$CIDRAM['lang']['config_general_silent_mode'] = '「アクセス拒否」ページを表示する代わりに、​CIDRAMはブロックされたアクセス試行を自動的にリダイレクトする必要がありますか？​はいの場合は、​リダイレクトの場所を指定します。​いいえの場合は、​この変数を空白のままにします。';
$CIDRAM['lang']['config_general_statistics'] = 'CIDRAM使用統計を追跡しますか？​True = はい；​False = いいえ（Default/デフォルルト）。';
$CIDRAM['lang']['config_general_timeFormat'] = 'CIDRAMで使用される日付表記形式。​追加のオプションがリクエストに応じて追加される場合があります。';
$CIDRAM['lang']['config_general_timeOffset'] = 'タイムゾーンオフセット（分）。';
$CIDRAM['lang']['config_general_timezone'] = 'あなたのタイムゾーン。';
$CIDRAM['lang']['config_general_truncate'] = 'ログファイルが一定のサイズに達したら切り詰めますか？​値は、​ログファイルが切り捨てられる前に大きくなる可能性があるＢ/ＫＢ/ＭＢ/ＧＢ/ＴＢ単位の最大サイズです。​デフォルト値の０ＫＢは切り捨てを無効にします （ログファイルは無期限に拡張できます）。​注：個々のログファイルに適用されます。​ログファイルのサイズは一括して考慮されません。';
$CIDRAM['lang']['config_recaptcha_api'] = 'どのＡＰＩを使用するのですか？​「V2」または「invisible」？';
$CIDRAM['lang']['config_recaptcha_expiry'] = 'reCAPTCHAインスタンスを覚えておく時間数。';
$CIDRAM['lang']['config_recaptcha_lockip'] = 'reCAPTCHAをＩＰにロックしますか？';
$CIDRAM['lang']['config_recaptcha_lockuser'] = 'reCAPTCHAをユーザーにロックしますか？';
$CIDRAM['lang']['config_recaptcha_logfile'] = 'reCAPTCHA試行の記録。​ファイル名指定するか、​無効にしたい場合は空白のままにして下さい。';
$CIDRAM['lang']['config_recaptcha_secret'] = 'この値は、​あなたのreCAPTCHAのための「secret key」に対応している必要があり；​これは、​reCAPTCHAのダッシュボードの中に見つけることができます。';
$CIDRAM['lang']['config_recaptcha_signature_limit'] = 'reCAPTCHAインスタンスが提供されるときにトリガされることができるシグネチャの最大数。​Default/デフォルルト = １。​特定のリクエストに対してこの数を超えると、reCAPTCHAインスタンスは提供されません。';
$CIDRAM['lang']['config_recaptcha_sitekey'] = 'この値は、​あなたのreCAPTCHAのための「site key」に対応している必要があり；​これは、​reCAPTCHAのダッシュボードの中に見つけることができます。';
$CIDRAM['lang']['config_recaptcha_usemode'] = 'reCAPTCHAをCIDRAMで使用する方法（ドキュメントを参照してください）。';
$CIDRAM['lang']['config_signatures_block_bogons'] = '火星の\ぼごんからのＣＩＤＲをブロックする必要がありますか？​あなたがローカルホストから、​またはお使いのＬＡＮから、​ローカルネットワーク内からの接続を受信した場合、​これはfalseに設定する必要があります。​ない場合は、​これをtrueに設定する必要があります。';
$CIDRAM['lang']['config_signatures_block_cloud'] = 'クラウドサービスからのＣＩＤＲをブロックする必要がありますか？​あなたのウェブサイトからのＡＰＩサービスを操作する場合、​または、​あなたがウェブサイトツーサイト接続が予想される場合、​これはfalseに設定する必要があります。​ない場合は、​これをtrueに設定する必要があります。';
$CIDRAM['lang']['config_signatures_block_generic'] = '一般的なＣＩＤＲをブロックする必要がありますか？​（他のオプションに固有ではないもの）。';
$CIDRAM['lang']['config_signatures_block_legal'] = '法的義務に対応してＣＩＤＲをブロックするか？​CIDRAMは、どんなＣＩＤＲをデフォルトで「法的義務」に関連付けることはないため、このディレクティブは通常は効果がありません。​しかし、それは法的理由のために存在する可能性のある任意のカスタム・シグネチャ・ファイルまたはモジュールの利益のための追加の制御手段として存在する。';
$CIDRAM['lang']['config_signatures_block_malware'] = 'マルウェアに関連するＩＰをブロックするか？​これには、Ｃ＆Ｃサーバー、感染マシン、マルウェア配布に関係するマシンなどが含まれます。';
$CIDRAM['lang']['config_signatures_block_proxies'] = 'プロキシサービスまたはＶＰＮからのＣＩＤＲをブロックする必要がありますか？​プロキシサービスまたはＶＰＮが必要な場合は、​これをfalseに設定する必要があります。​ない場合は、​セキュリティを向上させるために、​これをtrueに設定する必要があります。';
$CIDRAM['lang']['config_signatures_block_spam'] = 'スパムのため、​ＣＩＤＲをブロックする必要がありますか？​問題がある場合を除き、​一般的には、​これをtrueに設定する必要があります。';
$CIDRAM['lang']['config_signatures_default_tracktime'] = 'モジュールによって禁止されているＩＰを追跡する秒数。​Default（デフォルト設定） = ６０４８００（１週間）。';
$CIDRAM['lang']['config_signatures_infraction_limit'] = 'ＩＰがＩＰトラッキングによって禁止される前に発生することが、​許される違反の最大数。​Default（デフォルト設定） = １０。';
$CIDRAM['lang']['config_signatures_ipv4'] = 'ＩＰｖ４のシグネチャファイルのリスト（CIDRAMは、​これを使用します）。​これは、​カンマで区切られています。​必要に応じて、​項目を追加することができます。';
$CIDRAM['lang']['config_signatures_ipv6'] = 'ＩＰｖ６のシグネチャファイルのリスト（CIDRAMは、​これを使用します）。​これは、​カンマで区切られています。​必要に応じて、​項目を追加することができます。';
$CIDRAM['lang']['config_signatures_modules'] = 'ＩＰｖ４/ＩＰｖ６シグネチャをチェックした後にロードするモジュールファイルのリスト。​これは、​カンマで区切られています。';
$CIDRAM['lang']['config_signatures_track_mode'] = '違反はいつカウントされるべきですか？​False = ＩＰがモジュールによってブロックされている場合。​True = なんでもの理由でＩＰがブロックされた場合。';
$CIDRAM['lang']['config_template_data_Magnification'] = 'フォントの倍率。​Default/デフォルルト = １。';
$CIDRAM['lang']['config_template_data_css_url'] = 'カスタムテーマのＣＳＳファイルＵＲＬ。';
$CIDRAM['lang']['config_template_data_theme'] = 'CIDRAMに使用するデフォルトテーマ。';
$CIDRAM['lang']['field_activate'] = 'アクティブにする';
$CIDRAM['lang']['field_banned'] = '禁止された';
$CIDRAM['lang']['field_blocked'] = 'ブロックされましたか？';
$CIDRAM['lang']['field_clear'] = 'キャンセル';
$CIDRAM['lang']['field_clear_all'] = 'すべてキャンセル';
$CIDRAM['lang']['field_clickable_link'] = 'クリック可能なリンク';
$CIDRAM['lang']['field_component'] = 'コンポーネント';
$CIDRAM['lang']['field_create_new_account'] = '新しいアカウントを作成する';
$CIDRAM['lang']['field_deactivate'] = '非アクティブにする';
$CIDRAM['lang']['field_delete_account'] = 'アカウントを削除する';
$CIDRAM['lang']['field_delete_file'] = '削除';
$CIDRAM['lang']['field_download_file'] = 'ダウンロード';
$CIDRAM['lang']['field_edit_file'] = '編集';
$CIDRAM['lang']['field_expiry'] = '満了';
$CIDRAM['lang']['field_false'] = 'False （偽）';
$CIDRAM['lang']['field_file'] = 'ファイル';
$CIDRAM['lang']['field_filename'] = 'ファイル名：';
$CIDRAM['lang']['field_filetype_directory'] = 'ディレクトリ';
$CIDRAM['lang']['field_filetype_info'] = '{EXT}ファイル';
$CIDRAM['lang']['field_filetype_unknown'] = '不明です';
$CIDRAM['lang']['field_first_seen'] = '最初に見たとき';
$CIDRAM['lang']['field_infractions'] = '違反';
$CIDRAM['lang']['field_install'] = 'インストール';
$CIDRAM['lang']['field_ip_address'] = 'ＩＰアドレス';
$CIDRAM['lang']['field_latest_version'] = '最新バージョン';
$CIDRAM['lang']['field_log_in'] = 'ログイン';
$CIDRAM['lang']['field_new_name'] = '新しい名前：';
$CIDRAM['lang']['field_nonclickable_text'] = 'クリックできないテキスト';
$CIDRAM['lang']['field_ok'] = 'ＯＫ';
$CIDRAM['lang']['field_options'] = 'オプション';
$CIDRAM['lang']['field_password'] = 'パスワード';
$CIDRAM['lang']['field_permissions'] = 'パーミッション';
$CIDRAM['lang']['field_range'] = '範囲 （最初 – 最後）';
$CIDRAM['lang']['field_rename_file'] = '名前を変更する';
$CIDRAM['lang']['field_reset'] = 'リセット';
$CIDRAM['lang']['field_set_new_password'] = '新しいパスワードを設定します';
$CIDRAM['lang']['field_size'] = '合計サイズ：';
$CIDRAM['lang']['field_size_GB'] = 'GB';
$CIDRAM['lang']['field_size_KB'] = 'KB';
$CIDRAM['lang']['field_size_MB'] = 'MB';
$CIDRAM['lang']['field_size_TB'] = 'TB';
$CIDRAM['lang']['field_size_bytes'] = 'バイト';
$CIDRAM['lang']['field_status'] = '状態';
$CIDRAM['lang']['field_system_timezone'] = 'システムのデフォルトタイムゾーンを使用します。';
$CIDRAM['lang']['field_tracking'] = 'トラッキング';
$CIDRAM['lang']['field_true'] = 'True （真）';
$CIDRAM['lang']['field_uninstall'] = 'アンインストール';
$CIDRAM['lang']['field_update'] = 'アップデート';
$CIDRAM['lang']['field_update_all'] = 'すべてアップデートする';
$CIDRAM['lang']['field_upload_file'] = '新しいファイルをアップロードする';
$CIDRAM['lang']['field_username'] = 'ユーザー名';
$CIDRAM['lang']['field_verify'] = '検証する';
$CIDRAM['lang']['field_verify_all'] = 'すべてを検証する';
$CIDRAM['lang']['field_your_version'] = 'お使いのバージョン';
$CIDRAM['lang']['header_login'] = '継続するには、​ログインしてください。';
$CIDRAM['lang']['label_active_config_file'] = 'アクティブ・コンフィグレーション・ファイル：';
$CIDRAM['lang']['label_banned'] = '禁止されたリクエスト';
$CIDRAM['lang']['label_blocked'] = 'ブロックされたリクエスト';
$CIDRAM['lang']['label_branch'] = 'ブランチ最新安定：';
$CIDRAM['lang']['label_check_modules'] = 'モジュールに対してもテストします。';
$CIDRAM['lang']['label_cidram'] = '使用されたCIDRAMバージョン：';
$CIDRAM['lang']['label_clientinfo'] = 'クライアント情報：';
$CIDRAM['lang']['label_displaying'] = '<span class="txtRd">%s</span>エントリが表示されます。';
$CIDRAM['lang']['label_displaying_that_cite'] = '「%2$s」を含む<span class="txtRd">%1$s</span>つのエントリが表示されます。';
$CIDRAM['lang']['label_expires'] = '有効期限： ';
$CIDRAM['lang']['label_false_positive_risk'] = 'オプション： ';
$CIDRAM['lang']['label_fmgr_cache_data'] = 'キャッシュ・データとテンポラリ・ファイル';
$CIDRAM['lang']['label_fmgr_disk_usage'] = 'CIDRAMディスク使用量： ';
$CIDRAM['lang']['label_fmgr_free_space'] = '空きディスク容量：  ';
$CIDRAM['lang']['label_fmgr_total_disk_usage'] = 'ディスク使用量の合計： ';
$CIDRAM['lang']['label_fmgr_total_space'] = 'ディスク容量の合計： ';
$CIDRAM['lang']['label_fmgr_updates_metadata'] = 'コンポーネント・アップデート・メタデータ';
$CIDRAM['lang']['label_hide'] = '隠す';
$CIDRAM['lang']['label_never'] = '決して';
$CIDRAM['lang']['label_os'] = '使用されたオペレーティングシステム：';
$CIDRAM['lang']['label_other'] = 'その他';
$CIDRAM['lang']['label_other-ActiveIPv4'] = 'アクティブなＩＰｖ４シグネチャ・ファイル';
$CIDRAM['lang']['label_other-ActiveIPv6'] = 'アクティブなＩＰｖ６シグネチャ・ファイル';
$CIDRAM['lang']['label_other-ActiveModules'] = 'アクティブな・モジュール';
$CIDRAM['lang']['label_other-Since'] = '開始日';
$CIDRAM['lang']['label_php'] = '使用されたPHPバージョン：';
$CIDRAM['lang']['label_reCAPTCHA'] = 'reCAPTCHAの試み';
$CIDRAM['lang']['label_results'] = '結果 （%s が入力された – %s が拒否された – %s が受け入れられた – %s が合併した – %s 出力された）：';
$CIDRAM['lang']['label_sapi'] = '使用されたSAPI：';
$CIDRAM['lang']['label_show'] = '表示する';
$CIDRAM['lang']['label_signature_type'] = 'シグネチャ・タイプ：';
$CIDRAM['lang']['label_stable'] = '最新安定：';
$CIDRAM['lang']['label_sysinfo'] = 'システムインフォメーション：';
$CIDRAM['lang']['label_tests'] = 'テスト：';
$CIDRAM['lang']['label_total'] = '合計';
$CIDRAM['lang']['label_unstable'] = '最新不安定：';
$CIDRAM['lang']['label_used_with'] = '使用法：';
$CIDRAM['lang']['label_your_ip'] = 'あなたのＩＰ：';
$CIDRAM['lang']['label_your_ua'] = 'あなたのＵＡ：';
$CIDRAM['lang']['link_accounts'] = 'アカウント';
$CIDRAM['lang']['link_cache_data'] = 'キャッシュ・データ';
$CIDRAM['lang']['link_cidr_calc'] = 'ＣＩＤＲ計算機';
$CIDRAM['lang']['link_config'] = 'コンフィギュレーション';
$CIDRAM['lang']['link_documentation'] = 'ドキュメンテーション';
$CIDRAM['lang']['link_file_manager'] = 'ファイル・マネージャー';
$CIDRAM['lang']['link_home'] = 'ホーム';
$CIDRAM['lang']['link_ip_aggregator'] = 'ＩＰアグリゲータ';
$CIDRAM['lang']['link_ip_test'] = 'ＩＰテスト';
$CIDRAM['lang']['link_ip_tracking'] = 'ＩＰトラッキング';
$CIDRAM['lang']['link_logs'] = 'ロゴス';
$CIDRAM['lang']['link_range'] = '範囲テーブル';
$CIDRAM['lang']['link_sections_list'] = 'セクション・リスト';
$CIDRAM['lang']['link_statistics'] = '統計';
$CIDRAM['lang']['link_textmode'] = 'テキスト・フォーマット： <a href="%1$sfalse%2$s">シンプル</a> – <a href="%1$strue%2$s">ファンシー</a> – <a href="%1$stally%2$s">集計</a>';
$CIDRAM['lang']['link_updates'] = 'アップデート';
$CIDRAM['lang']['logs_logfile_doesnt_exist'] = '選択したログは存在しません！';
$CIDRAM['lang']['logs_no_logfile_selected'] = 'ログが選択されていません。';
$CIDRAM['lang']['logs_no_logfiles_available'] = 'いいえログが利用可能。';
$CIDRAM['lang']['max_login_attempts_exceeded'] = 'ログイン試行の最大回数を超えました；アクセス拒否。';
$CIDRAM['lang']['previewer_days'] = '日';
$CIDRAM['lang']['previewer_hours'] = '時';
$CIDRAM['lang']['previewer_minutes'] = '分';
$CIDRAM['lang']['previewer_months'] = '月';
$CIDRAM['lang']['previewer_seconds'] = '秒';
$CIDRAM['lang']['previewer_weeks'] = '週';
$CIDRAM['lang']['previewer_years'] = '年';
$CIDRAM['lang']['response_accounts_already_exists'] = 'そのアカウントはすでに存在します！';
$CIDRAM['lang']['response_accounts_created'] = 'アカウントを作成に成功しました！';
$CIDRAM['lang']['response_accounts_deleted'] = 'アカウントを削除が成功しました！';
$CIDRAM['lang']['response_accounts_doesnt_exist'] = 'そのアカウントは存在しません。';
$CIDRAM['lang']['response_accounts_password_updated'] = 'パスワードの更新が成功しました！';
$CIDRAM['lang']['response_activated'] = 'アクティブにしました。';
$CIDRAM['lang']['response_activation_failed'] = 'アクティブ化に失敗しました！';
$CIDRAM['lang']['response_checksum_error'] = 'チェックサム・エラー！​ファイルが拒否されました！';
$CIDRAM['lang']['response_component_successfully_installed'] = 'コンポーネントのインストールに成功しました。';
$CIDRAM['lang']['response_component_successfully_uninstalled'] = 'コンポーネントのアンインストールは成功しました。';
$CIDRAM['lang']['response_component_successfully_updated'] = 'コンポーネントのアップデートに成功しました！';
$CIDRAM['lang']['response_component_uninstall_error'] = 'コンポーネントのアンインストール中にエラーが発生しました。';
$CIDRAM['lang']['response_configuration_updated'] = 'コンフィギュレーションの更新が成功しました。';
$CIDRAM['lang']['response_deactivated'] = '非アクティブにしました。';
$CIDRAM['lang']['response_deactivation_failed'] = '非アクティブ化に失敗しました！';
$CIDRAM['lang']['response_delete_error'] = '削除に失敗しました！';
$CIDRAM['lang']['response_directory_deleted'] = 'ディレクトリが正常に削除されました！';
$CIDRAM['lang']['response_directory_renamed'] = 'ディレクトリの名前が変更されました！';
$CIDRAM['lang']['response_error'] = 'エラー';
$CIDRAM['lang']['response_failed_to_install'] = 'インストールに失敗しました！';
$CIDRAM['lang']['response_failed_to_update'] = 'アップデートに失敗しました！';
$CIDRAM['lang']['response_file_deleted'] = 'ファイルを削除が成功しました！';
$CIDRAM['lang']['response_file_edited'] = 'ファイルは正常に変更されました！';
$CIDRAM['lang']['response_file_renamed'] = 'ファイルの名前が変更されました！';
$CIDRAM['lang']['response_file_uploaded'] = 'ファイルは正常にアップロードされました！';
$CIDRAM['lang']['response_login_invalid_password'] = 'ログイン失敗！​無効なパスワード！';
$CIDRAM['lang']['response_login_invalid_username'] = 'ログイン失敗！​ユーザー名は存在しません！';
$CIDRAM['lang']['response_login_password_field_empty'] = 'パスワード入力は空です！';
$CIDRAM['lang']['response_login_username_field_empty'] = 'ユーザー名入力は空です！';
$CIDRAM['lang']['response_login_wrong_endpoint'] = '間違ったエンドポイント！';
$CIDRAM['lang']['response_no'] = 'いいえ';
$CIDRAM['lang']['response_possible_problem_found'] = '考えられる問題が見つかりました。';
$CIDRAM['lang']['response_rename_error'] = '名前を変更できませんでした！';
$CIDRAM['lang']['response_statistics_cleared'] = '統計はクリアされました。';
$CIDRAM['lang']['response_tracking_cleared'] = 'トラッキングがキャンセルされました。';
$CIDRAM['lang']['response_updates_already_up_to_date'] = 'すでに最新の状態です。';
$CIDRAM['lang']['response_updates_not_installed'] = 'コンポーネントのインストールされていません！';
$CIDRAM['lang']['response_updates_not_installed_php'] = 'コンポーネントのインストールされていません（PHP &gt;= {V}が必要です）！';
$CIDRAM['lang']['response_updates_outdated'] = '時代遅れです！';
$CIDRAM['lang']['response_updates_outdated_manually'] = '時代遅れです（手動でアップデートしてください）！';
$CIDRAM['lang']['response_updates_outdated_php_version'] = '時代遅れです（PHP &gt;= {V}が必要です）！';
$CIDRAM['lang']['response_updates_unable_to_determine'] = '決定することができません。';
$CIDRAM['lang']['response_upload_error'] = 'アップロードに失敗しました！';
$CIDRAM['lang']['response_verification_failed'] = '確認に失敗！​コンポーネントが破損している可能性があります。';
$CIDRAM['lang']['response_verification_success'] = '検証の成功！​問題は見つかりませんでした。';
$CIDRAM['lang']['response_yes'] = 'はい';
$CIDRAM['lang']['state_async_deny'] = 'あなたのパーミッションは、非同期要求を実行するのに十分ではありません。​もう一度ログインしてみてください。';
$CIDRAM['lang']['state_cache_is_empty'] = 'キャッシュは空です。';
$CIDRAM['lang']['state_complete_access'] = '完全なアクセス';
$CIDRAM['lang']['state_component_is_active'] = 'コンポーネントがアクティブです。';
$CIDRAM['lang']['state_component_is_inactive'] = 'コンポーネントが非アクティブです。';
$CIDRAM['lang']['state_component_is_provisional'] = 'コンポーネントが暫定的です。';
$CIDRAM['lang']['state_default_password'] = '警告：デフォルトのパスワードを使用して！';
$CIDRAM['lang']['state_ignored'] = '無視された';
$CIDRAM['lang']['state_loading'] = '読み込んでいます...';
$CIDRAM['lang']['state_loadtime'] = 'ページ要求は<span class="txtRd">%s</span>秒後に完了しました。';
$CIDRAM['lang']['state_logged_in'] = 'ログインしています。';
$CIDRAM['lang']['state_logs_access_only'] = 'ログのみにアクセス';
$CIDRAM['lang']['state_maintenance_mode'] = '警告：メンテナンス・モードが有効になっています！';
$CIDRAM['lang']['state_password_not_valid'] = '警告：このアカウントには有効なパスワードを使用していません！';
$CIDRAM['lang']['state_risk_high'] = '高い';
$CIDRAM['lang']['state_risk_low'] = '低い';
$CIDRAM['lang']['state_risk_medium'] = '中程度';
$CIDRAM['lang']['state_sl_totals'] = '合計（シグネチャ： <span class="txtRd">%s</span> – シグネチャ・セクション： <span class="txtRd">%s</span> – シグネチャ・ファイル： <span class="txtRd">%s</span>）。';
$CIDRAM['lang']['state_tracking'] = '現在、%s個のIPをトラッキングしています。';
$CIDRAM['lang']['switch-hide-non-outdated-set-false'] = '非時代遅れを隠さないで';
$CIDRAM['lang']['switch-hide-non-outdated-set-true'] = '非時代遅れを隠す';
$CIDRAM['lang']['switch-hide-unused-set-false'] = '未使用を隠さないで';
$CIDRAM['lang']['switch-hide-unused-set-true'] = '未使用を隠す';
$CIDRAM['lang']['switch-tracking-blocked-already-set-false'] = 'シグネチャ・ファイルをチェックしない';
$CIDRAM['lang']['switch-tracking-blocked-already-set-true'] = 'シグネチャ・ファイルをチェックする';
$CIDRAM['lang']['switch-tracking-hide-banned-blocked-set-false'] = '禁止/ブロックされたＩＰを隠さないでください';
$CIDRAM['lang']['switch-tracking-hide-banned-blocked-set-true'] = '禁止/ブロックされたＩＰを隠す';
$CIDRAM['lang']['tip_accounts'] = 'こんにちは、​{username}。​<br />アカウント・ページは、​CIDRAMフロントエンドにアクセスできるユーザーを制御できます。';
$CIDRAM['lang']['tip_cache_data'] = 'こんにちは、​{username}。<br />ここでは、キャッシュの内容を確認できます。';
$CIDRAM['lang']['tip_cidr_calc'] = 'こんにちは、​{username}。​<br />ＣＩＤＲ計算機では、​ＩＰアドレスがどのＣＩＤＲに属しているかを計算できます。';
$CIDRAM['lang']['tip_config'] = 'こんにちは、​{username}。​<br />コンフィグレーション・ページは、​フロントエンドからCIDRAMの設定を変更することができます。';
$CIDRAM['lang']['tip_custom_ua'] = 'ここに、ユーザー・エージェント（user agent）を入力してください （オプションです）。';
$CIDRAM['lang']['tip_donate'] = 'CIDRAMは無料で提供されています、​しかし、​あなたがしたい場合、​寄付ボタンをクリックすると、​プロジェクトに寄付することができます。';
$CIDRAM['lang']['tip_enter_ip_here'] = 'ここにＩＰを入力してください。';
$CIDRAM['lang']['tip_enter_ips_here'] = 'ここにＩＰを入力してください。';
$CIDRAM['lang']['tip_fe_cookie_warning'] = '注意：CIDRAMは、Cookieを使用してログインを認証します。​ログインすると、ブラウザでCookieを作成して保存することに同意したことになります。';
$CIDRAM['lang']['tip_file_manager'] = 'こんにちは、​{username}。​<br />ファイル・マネージャを使用する、​ファイルを削除、​編集、​アップロード、​ダウンロードができます。​慎重に使用する（これを使って、​インストールを壊すことができます）。';
$CIDRAM['lang']['tip_home'] = 'こんにちは、​{username}。​<br />これはCIDRAMフロントエンドのホームページです。​続行するには、​左側のナビゲーションメニューからリンクを選択します。';
$CIDRAM['lang']['tip_ip_aggregator'] = 'こんにちは、​{username}。​<br />ＩＰアグリゲータを使用すると、最小限の方法でＩＰとＣＩＤＲを表現できます。​集計するデータを入力し、「ＯＫ」を押します。';
$CIDRAM['lang']['tip_ip_test'] = 'こんにちは、​{username}。​<br />ＩＰテスト・ページは、​ＩＰアドレスがブロックされているかどうかをテストできます。';
$CIDRAM['lang']['tip_ip_test_module_switch'] = '（選択されていない場合は、​シグネチャ・ファイルのみがテストされます）。';
$CIDRAM['lang']['tip_ip_tracking'] = 'こんにちは、​{username}。​<br />ＩＰトラッキング・ページでは、​ＩＰアドレスのトラッキングステータスを確認できます。​あなたは禁止されているものを確認することができ、​望むならばあなたはトラッキングをキャンセルことができます。';
$CIDRAM['lang']['tip_login'] = 'デフォルト・ユーザ名：​<span class="txtRd">admin</span> – デフォルト・パスワード：​<span class="txtRd">password</span>';
$CIDRAM['lang']['tip_logs'] = 'こんにちは、​{username}。​<br />そのログの内容を表示するために、​次のリストからログを選択します。';
$CIDRAM['lang']['tip_range'] = 'こんにちは、​{username}。​<br />このページには、現在アクティブな・シグネチャ・ファイルが対象とするＩＰ範囲に関する基本的な統計情報が表示されます。';
$CIDRAM['lang']['tip_sections_list'] = 'こんにちは、​{username}。<br />このページには、現在アクティブなシグネチャ・ファイルに存在するセクションが一覧表示されます。';
$CIDRAM['lang']['tip_see_the_documentation'] = '設定ディレクティブの詳細については、​<a href="https://github.com/CIDRAM/CIDRAM/blob/master/_docs/readme.ja.md#SECTION6">ドキュメント</a>を参照してください。';
$CIDRAM['lang']['tip_statistics'] = 'こんにちは、​{username}。​<br />このページには、CIDRAMのインストールに関する基本的な使用状況の統計情報が表示されます。';
$CIDRAM['lang']['tip_statistics_disabled'] = '注意：統計トラッキングは現在オフラインですが、コンフィギュレーション・ページで有効にすることができます。';
$CIDRAM['lang']['tip_updates'] = 'こんにちは、​{username}。​<br />アップデート・ページは、​CIDRAMのさまざまなコンポーネントはインストール、​アンインストール、​更新が可能です（コアパッケージ、​シグネチャ、​Ｌ１０Ｎファイル、​等）。';
$CIDRAM['lang']['title_accounts'] = 'CIDRAM – アカウント';
$CIDRAM['lang']['title_cache_data'] = 'CIDRAM – キャッシュ・データ';
$CIDRAM['lang']['title_cidr_calc'] = 'CIDRAM – ＣＩＤＲ計算機';
$CIDRAM['lang']['title_config'] = 'CIDRAM – コンフィギュレーション';
$CIDRAM['lang']['title_file_manager'] = 'CIDRAM – ファイル・マネージャー';
$CIDRAM['lang']['title_home'] = 'CIDRAM – ホーム';
$CIDRAM['lang']['title_ip_aggregator'] = 'CIDRAM – ＩＰアグリゲータ';
$CIDRAM['lang']['title_ip_test'] = 'CIDRAM – ＩＰテスト';
$CIDRAM['lang']['title_ip_tracking'] = 'CIDRAM – ＩＰトラッキング';
$CIDRAM['lang']['title_login'] = 'CIDRAM – ログイン';
$CIDRAM['lang']['title_logs'] = 'CIDRAM – ロゴス';
$CIDRAM['lang']['title_range'] = 'CIDRAM – 範囲テーブル';
$CIDRAM['lang']['title_sections_list'] = 'CIDRAM – セクション・リスト';
$CIDRAM['lang']['title_statistics'] = 'CIDRAM – 統計';
$CIDRAM['lang']['title_updates'] = 'CIDRAM – アップデート';
$CIDRAM['lang']['warning'] = '警告：';
$CIDRAM['lang']['warning_php_1'] = 'あなたのＰＨＰバージョンはもはや積極的にサポートされていません！​​アップデートおすすめします！';
$CIDRAM['lang']['warning_php_2'] = 'あなたのＰＨＰバージョンは深刻な脆弱性を持っています！​​アップデートを強くおすすめします！';
$CIDRAM['lang']['warning_signatures_1'] = 'アクティブ・シグネチャ・ファイルはありません！';

$CIDRAM['lang']['info_some_useful_links'] = '役に立つリンク：<ul>
            <li><a href="https://github.com/CIDRAM/CIDRAM/issues">CIDRAMの問題 ＠ GitHub</a> – CIDRAMの問題ページ（サポート、​援助、​など）。</li>
            <li><a href="https://wordpress.org/plugins/cidram/">CIDRAM ＠ WordPress.org</a> – CIDRAMのWordPressプラグイン。</li>
            <li><a href="https://sourceforge.net/projects/cidram/">CIDRAM ＠ SourceForge</a> – CIDRAMの代替ダウンロードミラー。</li>
            <li><a href="https://websectools.com/">WebSecTools.com</a> – ウェブサイトを保護するための簡単なウェブマスターツールのコレクション。</li>
            <li><a href="https://macmathan.info/blocklists">MacMathan.infoのレンジ・ブロック</a> – 不要な国があなたのウェブサイトにアクセスするのをブロックのために、​CIDRAMに追加できるオプションの範囲ブロックが含まれています。</li>
            <li><a href="https://www.facebook.com/groups/2204685680/">Global PHP Group の Facebook</a> – PHP学習リソースとディスカッション。</li>
            <li><a href="https://php.earth/">PHP.earth</a> – PHP学習リソースとディスカッション。</li>
            <li><a href="http://bgp.he.net/">Hurricane Electric BGP Toolkit</a> – ＡＳＮからＣＩＤＲを取得する、​ＡＳＮ関係を決定する、​ネットワーク名に基づいてＡＳＮを検出する、​等。</li>
            <li><a href="https://www.stopforumspam.com/forum/">フォーラム の Stop Forum Spam</a> – フォーラムスパムの停止に関する便利なディスカッションフォーラム。</li>
            <li><a href="https://radar.qrator.net/">QratorのRadar</a> – ＡＳＮの接続性をチェックするのに便利なツール；​ＡＳＮに関するその他の様々な情報。</li>
            <li><a href="http://www.ipdeny.com/ipblocks/">IPdenyのＩＰカントリー・ブロック</a> – 国全体のシグネチャを生成するための素晴らしい、​正確なサービス。</li>
            <li><a href="https://www.google.com/transparencyreport/safebrowsing/malware/">Google Malware Dashboard</a> – ＡＳＮのマルウェア感染率に関するレポートを表示します。</li>
            <li><a href="https://www.spamhaus.org/statistics/botnet-asn/">Spamhausプロジェクト</a> – ＡＳＮのボットネット感染率に関するレポートを表示します。</li>
            <li><a href="https://www.abuseat.org/public/asn.html">Abuseat.orgの複合・ブロック・リスト</a> – ＡＳＮのボットネット感染率に関するレポートを表示します。</li>
            <li><a href="https://abuseipdb.com/">AbuseIPDB</a> – 既知危険なＩＰアドレスのデータベースを維持します；​ＩＰアドレスを確認と報告するためのＡＰＩを提供します。</li>
            <li><a href="https://www.megarbl.net/index.php">MegaRBL.net</a> – 既知のスパマーリストを維持する；​ＩＰ/ＡＳＮスパム活動のチェックに役立ちます。</li>
            <li><a href="https://maikuolan.github.io/Vulnerability-Charts/">脆弱性チャート</a> – さまざまなパッケージの安全で安全でないバージョンを一覧表示する（HHVM、PHP、phpMyAdmin、Python等）。</li>
            <li><a href="https://maikuolan.github.io/Compatibility-Charts/">互換性チャート</a> – さまざまなパッケージの互換性情報を一覧表示します（CIDRAM、phpMussel、等）。</li>
        </ul>';
