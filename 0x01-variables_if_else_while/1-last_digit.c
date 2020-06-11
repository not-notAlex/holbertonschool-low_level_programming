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

	int x;

	x = n % 10;

	printf("Last digit of %d is %d and is ", n, x);

	if (x > 5)
		printf("greater than 5\n");
	else if (x != 0)
		printf("less than 6 and not 0\n");
	else
		printf("and is 0\n");

	return (0);
}
