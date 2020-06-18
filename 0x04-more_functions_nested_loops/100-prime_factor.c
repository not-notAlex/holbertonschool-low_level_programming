#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code
 *
 * Return: End all mains with 0
 */
int main(void)
{
	int a, num;

	for (a = 3; a < 782848; a += 2)
	{
		if (612852475143 % a == 0)
			num = a;
	}

	if (612852475143 / num > num)
		num = 612852475143 / num;

	printf("%d\n", num);

	return (0);
}
