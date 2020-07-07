#include "holberton.h"

/**
 * argstostr - concatentates all strings into one
 * @ac: number of arguments
 * @av: strings to put together
 * Return: new singular string
 */
char *argstostr(int ac, char **av)
{
	int a, b;
	int size, totalsize = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		size = 0;
		while (av[a][size])
		{
			size++;
		}
		totalsize += size + 1;
	}

	ar = malloc(sizeof(char) * totalsize);
	if (ar == NULL)
		return (NULL);
	size = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ar[size] = av[a][b];
			size++;
		}
		ar[size] = '\n';
		size++;
	}

	return (ar);
}
