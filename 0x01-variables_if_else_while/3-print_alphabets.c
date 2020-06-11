#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code
 *
 * Return: End all mains with 1
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
		putchar(a);

	for (a = 65; a < 91; a++)
		putchar(a);

	putchar(10);

	return (1);
}
