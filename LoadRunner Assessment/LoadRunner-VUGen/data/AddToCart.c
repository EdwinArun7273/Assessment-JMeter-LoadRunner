AddToCart()
{

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(14);

	web_url("ajax_loader_large.gif", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/ajax_loader_large.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_submit_data("1", 
		"Action=https://demowebshop.tricentis.com/addproducttocart/details/22/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=addtocart_22.EnteredQuantity", "Value=1", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("ico-close-notification-bar.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/ico-close-notification-bar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("0000131_health-book_47.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000131_health-book_47.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t80.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}
