#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

int param_var[3] = { 0,0,0 };

module_param_array(param_var,int,NULL,S_IRUSR | S_IWUSR);


void display(void) {
  printk(KERN_ALERT "TEST: param[0] = %d", param_var[0]);
  printk(KERN_ALERT "TEST: param[1] = %d", param_var[1]);
  printk(KERN_ALERT "TEST: param[2] = %d", param_var[2]);
}

static int hello_init(void) {
  printk(KERN_ALERT "TEST: Hello world \n");
  display();
  return 0;
}

static void hello_exit(void) {
	printk(KERN_ALERT "TEST: Good bye");
}

module_init(hello_init);
module_exit(hello_exit);
