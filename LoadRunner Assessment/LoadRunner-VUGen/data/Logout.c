Logout()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(8);

	web_url("logout_2", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("__utm.gif_10", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=10&utmn=1864545672&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop&utmhid=1038922631&utmr=0&utmp=%2F&utmht=1765358989019&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("0000131_health-book_32.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000131_health-book_32.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t83.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}