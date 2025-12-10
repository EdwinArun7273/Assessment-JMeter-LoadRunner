SearchForItem()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=HealthB
	https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=Health+
	https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=Health+Book

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=HealthB", 
		"PollIntervalMs=1400", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	web_url("searchtermautocomplete", 
		"URL=https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=HealthB", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ajax_loader_small.gif", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/ajax_loader_small.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t61.inf", 
		LAST);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("searchtermautocomplete_2",
		"URL=https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=Health+",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://demowebshop.tricentis.com/",
		"Snapshot=t62.inf",
		"Mode=HTTP",
		LAST); 
	*/

	web_url("ui-bg_glass_75_dadada_1x400.png", 
		"URL=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/images/ui-bg_glass_75_dadada_1x400.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/jquery-ui-1.10.3.custom.min.css", 
		"Snapshot=t63.inf", 
		LAST);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("searchtermautocomplete_3",
		"URL=https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=Health+Book",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://demowebshop.tricentis.com/",
		"Snapshot=t64.inf",
		"Mode=HTTP",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	web_url("search", 
		"URL=https://demowebshop.tricentis.com/search?q=Health+Book", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("__utm.gif_8", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=8&utmn=1705127255&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop.%20Search&utmhid=1037197160&utmr=0&utmp=%2Fsearch%3Fq%3DHealth%2BBook&utmht=1765358957539&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&"
		"utmjid=&utmu=qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("0000131_health-book_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000131_health-book_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/search?q=Health+Book", 
		"Snapshot=t67.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	web_url("Health Book", 
		"URL=https://demowebshop.tricentis.com/health", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/search?q=Health+Book", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("jquery.magnific-popup.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/jquery.magnific-popup.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("magnific-popup.css", 
		"URL=https://demowebshop.tricentis.com/Content/magnific-popup/magnific-popup.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("0000131_health-book_300.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000131_health-book_300.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("0000116_blue-and-green-sneaker_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000116_blue-and-green-sneaker_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("0000133_fiction_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000133_fiction_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("0000132_science_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000132_science_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("0000130_computing-and-internet_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000130_computing-and-internet_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t76.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("__utm.gif_9", 
		"URL=https://ssl.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=9&utmn=189883102&utmhn=demowebshop.tricentis.com&utmcs=UTF-8&utmsr=1280x800&utmvp=1263x689&utmsc=24-bit&utmul=en-gb&utmje=0&utmfl=-&utmdt=Demo%20Web%20Shop.%20Health%20Book&utmhid=739492861&utmr=0&utmp=%2Fhealth&utmht=1765358964976&utmac=UA-6574346-11&utmcc=__utma%3D78382081.606143095.1765358813.1765358813.1765358813.1%3B%2B__utmz%3D78382081.1765358813.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu="
		"qAAAAAAAAAAAAAAAAAAAAAAE~", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t73.inf", 
		LAST);

	return 0;
}
