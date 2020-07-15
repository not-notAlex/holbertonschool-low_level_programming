#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/**
 * main - The code
 * @argc: number of inputs
 * @argv: array of inputs
 * Return: End all mains with 0
 */
int main(int argc, char *argv[])
{
	int num;
	char *codes;
	int i;

	if (argc < 1)
	{
		printf("Error\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		return (0);
	}
	codes = malloc(num + 1);
	if (codes == NULL)
		return (0);
	for (i = 0; i < num; i++)
	{
		unsigned char ptr = (uintptr_t)(main + 1);

		codes[i] = ptr;
	}
	codes[i] = '\0';
	for (i = 0; i < num; i++)
	{
		printf("%02X", codes[i]);
		if ((i + 1) != num)
			printf(" ");
	}
	printf("\n");
	return (0);
}
