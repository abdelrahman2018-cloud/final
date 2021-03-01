#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init init(void){
	printk(KERN_INFO "Hello World CSCE-3402:\n");
	return 0;
}

static void __exit cleanup(void){
	printk(KERN_INFO "Bye bye CSCE-3402:\n");
	
}

module_init(init);
module_exit(cleanup);
