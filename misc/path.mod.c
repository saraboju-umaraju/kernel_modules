#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe89b6b83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2f6e5ed8, __VMLINUX_SYMBOL_STR(init_task) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1B40604509B63E898B35AA");
