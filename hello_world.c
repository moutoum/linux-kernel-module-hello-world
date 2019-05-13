#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxence Moutoussamy <maxence.moutoussamy1@gmail.com");
MODULE_DESCRIPTION("It is a simple Hello world kernel module");
MODULE_VERSION("1.0");

static int __init hello_world_init(void)
{
	printk(KERN_INFO "Hello, world from module!\n");
	return (0);
}

static void __exit hello_world_exit(void)
{
	printk(KERN_INFO "Bye, world from module!\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
