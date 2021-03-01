#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>


static int times=3;
module_param(times,int,0);

static char *txt="csce";
module_param(txt,charp,0);


static int __init init(void){
	int i=0;
	for( i=0 ;i<times ;i++){
	printk(KERN_INFO "%s \n" ,txt);

	}
return 0;	
}

static void __exit cleanup(void){
	printk(KERN_INFO "Bye bye CSCE-3402:\n");
	
}

module_init(init);
module_exit(cleanup);
