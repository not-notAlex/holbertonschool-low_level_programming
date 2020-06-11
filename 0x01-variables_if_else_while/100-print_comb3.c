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
	int y = 0;

	for (a = 48; a < 58; a++)
	{
		for (b = 49 + y; b < 58; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
			if (!(a == 56 && b == 57))
			{
				putchar(44);
				putchar(32);
			}

		}
		y++;
	}

	putchar(10);

	return (1);
}
