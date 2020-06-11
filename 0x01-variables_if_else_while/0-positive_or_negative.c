#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - The code
 *
 * Return: End all mains with 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");

	return (0);
}
