Login()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("logout", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("__utm.gif_5", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=5&utmn=738267739&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop&utmhid=782707711&utmr=0&utmp=%2F&utmht=1765358895414&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t55.inf", 
		LAST);

	lr_think_time(4);

	web_url("Log in", 
		"URL=https://demowebshop.tricentis.com/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("__utm.gif_6", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=6&utmn=740438139&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop.%20Login&utmhid=1075199164&utmr=0&utmp=%2Flogin&utmht=1765358900609&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu="
		"qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t57.inf", 
		LAST);

	web_submit_data("login", 
		"Action=https://demowebshop.tricentis.com/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value={email}", ENDITEM, 
		"Name=Password", "Value={{password}}", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	web_url("__utm.gif_7", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=7&utmn=499567640&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop&utmhid=38060375&utmr=0&utmp=%2F&utmht=1765358932762&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t59.inf", 
		LAST);

	return 0;
}
