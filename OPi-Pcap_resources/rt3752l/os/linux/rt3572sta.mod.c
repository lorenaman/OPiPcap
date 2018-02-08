#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0xac902c3f, "module_layout" },
	{ 0xf44967e6, "register_netdevice" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x6cc0821a, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x6b1ca381, "netif_carrier_on" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xae62fdba, "skb_clone" },
	{ 0x14b08268, "dev_get_by_name" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x38f42821, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xbab8b2a6, "netif_carrier_off" },
	{ 0xb1f81ff4, "usb_kill_urb" },
	{ 0x6fa6a8b9, "filp_close" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0xc7a2f4e6, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x71742f4e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7f92586c, "netif_rx" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xaab707d4, "dev_alloc_skb" },
	{ 0x11089ac7, "_ctype" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xcc3fd46b, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc5bc068e, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xe4a969bf, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x6bbc4438, "register_netdev" },
	{ 0x16a7d773, "wireless_send_event" },
	{ 0x7e95a710, "usb_control_msg" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfb344d33, "skb_push" },
	{ 0xc095d7ad, "dev_close" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x97fd791e, "skb_pull" },
	{ 0x181e854b, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf0914723, "dev_kfree_skb_any" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6ab036e9, "module_put" },
	{ 0x8dc1d045, "skb_copy_expand" },
	{ 0xfc7b8ec5, "netif_device_attach" },
	{ 0xf0b5f0b4, "usb_submit_urb" },
	{ 0x93b4f22e, "netif_device_detach" },
	{ 0x6393adfd, "__alloc_skb" },
	{ 0xed0734ae, "usb_get_dev" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x2de0dff6, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x10a0f930, "eth_type_trans" },
	{ 0x51577603, "wake_up_process" },
	{ 0x552beefa, "pskb_expand_head" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x72542c85, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x2eb22412, "up" },
	{ 0x6023f394, "usb_register_driver" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x4b61f994, "unregister_netdev" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2aa9868b, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xd86e7695, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x807de797, "skb_put" },
	{ 0xc14bed20, "dev_get_drvdata" },
	{ 0x4098618b, "usb_free_urb" },
	{ 0x8369c654, "try_module_get" },
	{ 0xc8b923a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x204f8d99, "filp_open" },
	{ 0x7f5f70d1, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v148Fp2770d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp2870d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p2870d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p2770d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0039d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p003Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap7512d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0162d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0163d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0164d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v177Fp0302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1731d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1732d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1742d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p002Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p002Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p002Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C28d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pED06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C09d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C11d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C07d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp8053d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C23d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C27d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp002Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp003Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp003Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p800Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15A9p0006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApB522d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA618d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap8522d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap7522d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CDEp0022d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p3416d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CDEp0025d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9702d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p200Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C25d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3247d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap6618d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15C5p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v129Bp1828d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep300Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp805Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp815Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1482p3C09d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C09d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p2018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1690p0740d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0280d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0282d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7718d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7717d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1737p0070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1737p0071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p00E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp815Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v100Dp9031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p6899d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3572d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9801d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0042d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0944d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1690p0740d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1690p0744d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0284d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v167Bp4001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0A07d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "C555786DD73B0B4158C4A5E");
