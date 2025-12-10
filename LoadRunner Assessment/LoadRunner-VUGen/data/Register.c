Register()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("styles.css", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("responsive.css", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/responsive.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("jquery-ui-1.10.3.custom.min.css", 
		"URL=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/jquery-ui-1.10.3.custom.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("nivo-slider.css", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/nivo-slider.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("default.css", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("jquery.validate.min.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/jquery.validate.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("jquery.validate.unobtrusive.min.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/jquery.validate.unobtrusive.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("jquery-ui-1.10.3.custom.min.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/jquery-ui-1.10.3.custom.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("jquery-migrate-1.2.1.min.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/jquery-migrate-1.2.1.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("public.common.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/public.common.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("jquery.nivo.slider.js", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Scripts/jquery.nivo.slider.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("public.ajaxcart.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/public.ajaxcart.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("jquery-1.10.2.min.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/jquery-1.10.2.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("logo.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("0000240.png", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000240.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("0000215.png", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000215.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("0000015_25-virtual-gift-card_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000015_25-virtual-gift-card_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("0000172_build-your-own-cheap-computer_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000172_build-your-own-cheap-computer_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("0000224_141-inch-laptop_125.png", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000224_141-inch-laptop_125.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("0000031_build-your-own-computer_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000031_build-your-own-computer_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("0000201_build-your-own-expensive-computer_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000201_build-your-own-expensive-computer_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("0000204_simple-computer_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000204_simple-computer_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t46.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("top-menu-divider.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-divider.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("loading.gif", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("bullet-right.gif", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/bullet-right.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("star-x-inactive.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/star-x-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("star-x-active.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/star-x-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("ga.js", 
		"URL=https://ssl.google-analytics.com/ga.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t39.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("ui-bg_flat_75_ffffff_40x100.png", 
		"URL=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/images/ui-bg_flat_75_ffffff_40x100.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/jquery-ui-1.10.3.custom.min.css", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("__utm.gif", 
		"URL=https://ssl.google-analytics.com/r/__utm.gif?utmwv=5.7.2&utms=1&utmn=2045491780&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x644&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop&utmhid=1788890567&utmr=-&utmp=%2F&utmht=1765358812973&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=823865070&utmredir=1&utmu="
		"qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("arrows.png", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/arrows.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("bullets.png", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/bullets.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", 
		"Snapshot=t45.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	web_url("top-menu-triangle.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-triangle.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("Register", 
		"URL=https://demowebshop.tricentis.com/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("__utm.gif_2", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=2&utmn=497766168&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop.%20Register&utmhid=1595463785&utmr=0&utmp=%2Fregister&utmht=1765358817958&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu="
		"qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t49.inf", 
		LAST);

	web_submit_data("register", 
		"Action=https://demowebshop.tricentis.com/register", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/register", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value=8vl4rSSfr-01nX8H0_g1ui5z5KchyKqYEVUi_lY5cj_oKF6Q-90jcJFs3ewgoKzgiaKtMBHxq5Pc7l2d86B--P9jLfOSf33yFZ5kG-Jw_6k1", ENDITEM, 
		"Name=Gender", "Value=M", ENDITEM, 
		"Name=FirstName", "Value=userfn", ENDITEM, 
		"Name=LastName", "Value=userln", ENDITEM, 
		"Name=Email", "Value=testuser1002@test.com", ENDITEM, 
		"Name=Password", "Value=password", ENDITEM, 
		"Name=ConfirmPassword", "Value=password", ENDITEM, 
		"Name=register-button", "Value=Register", ENDITEM, 
		LAST);

	web_url("__utm.gif_3", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=3&utmn=233746063&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop.%20Register&utmhid=1250911851&utmr=0&utmp=%2Fregisterresult%2F1&utmht=1765358876446&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu"
		"=qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t51.inf", 
		LAST);

	lr_think_time(4);

	web_url("Tricentis Demo Web Shop", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/registerresult/1", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("__utm.gif_4", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=4&utmn=1420459430&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop&utmhid=9003364&utmr=0&utmp=%2F&utmht=1765358881322&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t53.inf", 
		LAST);

	return 0;
}
