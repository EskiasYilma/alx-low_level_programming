#include "lists.h"

void n(void) __attribute__ ((constructor));

/**
 * n - function to be executed before main
 */

void n(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
