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
	{
		if (a != 101 && a != 113)
			putchar(a);
	}

	putchar(10);

	return (0);
}
