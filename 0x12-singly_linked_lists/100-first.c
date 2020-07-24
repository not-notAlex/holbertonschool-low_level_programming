#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - This code is run before the main function
 *
 * Return: no return
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
