#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ryan Phillips");
MODULE_DESCRIPTION("Hello Worlds LKM");

static int __init ModuleInit(void) {
	printk("Hellow Kernal\n");
	return 0;
}

static void __exit ModuleExit(void) {
	printk("Goodbye, Kernel\n");

}

module_init(ModuleInit);
module_exit(ModuleInit);
