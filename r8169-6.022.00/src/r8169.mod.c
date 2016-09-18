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
	{ 0x4f5cb6fe, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x14d8d0aa, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x572d07e3, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x88faf60d, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xe43a3b74, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x360e589d, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf6f8b206, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe7d46eed, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xaf26feba, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8480501e, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x92e0f28d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x29246c47, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x721ddc7f, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd1d3c999, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xe8f1a546, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x90b732f0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x365bc08e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8af0f1ab, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc6695331, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xe2dd135b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x51d114c0, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x1578b212, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xeba79732, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x42a968bf, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x24a8187b, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf1ef0c7c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x8a63a531, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x99636ce5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2389ce30, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x62c78419, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x4a03ef0b, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x5104382, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x49f54d70, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xe4238329, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x545ae281, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7752275e, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x4692b05e, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc0e60cb, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8d9e9b5d, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x7da8ff0f, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x14ccc578, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xb70cc747, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x45c64e24, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x911dea8b, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xbf7ae262, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x50ff6094, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf07c4e52, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xfefccfe9, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004300bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv00001186sd00004302bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004C00bc*sc*i*");

MODULE_INFO(srcversion, "499063FAC78440C0498A397");
