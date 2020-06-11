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
	int b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (!(a == 57 && b == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (1);
}
