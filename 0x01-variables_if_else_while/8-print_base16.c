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

	for (a = 48; a < 58; a++)
		putchar(a);

	for (a = 97; a < 103; a++)
		putchar(a);

	putchar(10);

	return (1);
}
