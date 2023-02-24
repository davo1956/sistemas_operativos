/*  
 *  hello-1.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/sched.h> // for access to the PCB
int init_module(void)
{
	
	printk(KERN_INFO "Hola mundo desde el kernel\n");
	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	asm("cli");
	for(;;);
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Adios mundo desde el kernel.\n");
}


MODULE_LICENSE("GPL");
