#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code
 *
 * Return: End all mains with 0
 */
int main(void)
{
	int a, n;

	n = 0;
	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			n += a;
	}

	printf("%d\n", n);

	return (0);
}
