#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code
 * @argc: number of inputs
 * @argv: array of inputs
 * Return: End all mains with 0
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int a;

	for (a = 0; argv[a]; a++)
		num++;

	if (num == argc)
		printf("%d\n", num - 1);
	return (0);
}
