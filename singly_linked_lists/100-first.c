#include <stdio.h>
/**
 * before_main - Function that runs before the main function.
 * This function is executed automatically before the main function
 * due to the `constructor` attribute. It prints a specific message
 * to the standard output.
 */
void before_main(void) __attribute__ ((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
