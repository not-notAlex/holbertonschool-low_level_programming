#include "holberton.h"
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

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 != 0 && a % 5 != 0)
			printf("%d ", a);
		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if ((a % 3 == 0 || a % 5 == 0) && a != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
