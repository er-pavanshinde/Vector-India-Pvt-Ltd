//#include<linux/init.h>
#include<linux/module.h>

static int __init insert_hello(void)
{
	printk(KERN_INFO"Loading Hello World Module...\n");
	printk(KERN_INFO "Hello World\n");
	return 0;
} 

static void __exit remove_hello(void)
{
	printk(KERN_DEBUG "Hello World Removed\n");
}

module_init(insert_hello);
module_exit(remove_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("PAVAN SHINDE");
MODULE_DESCRIPTION("A SIMPLE HELLO WORLD LKM!!!");
MODULE_VERSION("0.1");
