#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x92997ed8, "_printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5e9e3342, "gpio_to_desc" },
	{ 0x74cb8fc9, "gpiod_set_raw_value" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2bf9031b, "cdev_del" },
	{ 0x8c7fb26f, "device_destroy" },
	{ 0x3a8831fe, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x61907396, "__class_create" },
	{ 0xd43e80f0, "device_create" },
	{ 0x729bab70, "cdev_init" },
	{ 0x95c1026a, "cdev_add" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x85f2e527, "gpiod_direction_output_raw" },
	{ 0x15ac2962, "gpiod_direction_input" },
	{ 0x532543ff, "gpiod_get_raw_value" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xc84d16dc, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2106D38CBADF3A923356C7");
