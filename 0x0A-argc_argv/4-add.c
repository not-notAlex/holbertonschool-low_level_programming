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
	int a, b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < 48 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (a = 1; a < argc; a++)
	{
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
