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
	int sum = 0, num;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while (sum + 25 <= num)
	{
		sum += 25;
		coin++;
	}
	while (sum + 10 <= num)
	{
		sum += 10;
		coin++;
	}
	while (sum + 5 <= num)
	{
		sum += 5;
		coin++;
	}
	while (sum + 2 <= num)
	{
		sum += 2;
		coin++;
	}
	while (sum + 1 <= num)
	{
		sum += 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
