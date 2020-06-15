#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code
 *
 * Return: End all mains with 0
 */
int main(void)
{
	int a;
	unsigned int x = 1;
	unsigned int y = 2;
	unsigned int t;
	unsigned int sum = 2;

	for (a = 2; y < 4000000; a++)
	{
		t = x;
		x = y;
		y += t;
		if (y % 2 == 0)
			sum += y;
	}

	printf("%u\n", sum);

	return (0);
}
