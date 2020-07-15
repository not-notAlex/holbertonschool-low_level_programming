#include "3-calc.h"

/**
 * main - The code
 * @argc: number of inputs
 * @argv: array of inputs
 * Return: End all mains with 0
 */
int main(int argc, char *argv[])
{
	int n, m, total, a, b;
	int (*ptr)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	n = argv[2][0];
	if (ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	m = atoi(argv[3]);
	if ((n == 47 && m == 0) || (n == 37 && m ==0))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	total = (*ptr)(a, b);
	printf("%d\n", total);

	return (0);
}
