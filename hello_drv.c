#include <linux/module.h>

int hello_init(void)
{
}

int cleanup_module(void)
{
}

MODULE_LICENSE("GPL");
// module_init(hello_init);

// int init_module