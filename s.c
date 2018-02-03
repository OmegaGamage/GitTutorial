#include <linux/module.h>
#include <linux/init.h>


int init_mod(void)
{
	printk(KERN_ALERT"This is only for testing purposes\n");
}

void exit_mod(void)
{
	printk(KERN_ALERT "This will be printed when exit\n");
}

init_module(init_mod);
exit_module(exit_mod);