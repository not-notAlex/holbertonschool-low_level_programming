#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code
 *
 * Return: End all mains with 1
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 56; a++)
	{
		for (b = a + 1; b < 57; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				if (a != b && a != c && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55 && b == 56 && c == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);

	return (1);
}
