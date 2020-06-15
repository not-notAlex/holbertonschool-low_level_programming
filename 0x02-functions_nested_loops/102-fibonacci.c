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

	printf("1, 2, ");

	for (a = 2; a < 50; a++)
	{
		printf("%u", (x + y));
		if (a != 49)
			printf(", ");
		t = x;
		x = y;
		y += t;
	}

	printf("\n");

	return (0);
}
