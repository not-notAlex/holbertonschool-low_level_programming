#include "holberton.h"

/**
 * strtow - Splits of string into seperate words
 * @str: string to split up
 *
 * Return: Array or words
 */
char **strtow(char *str)
{
	int words = 2;
	int a = 0, b, c;
	char **ar;
	int size = 0;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (NULL);
	if (str[0] == ' ')
	{
		while (str[a] == ' ')
			a++;
	}
	while (str[a])
	{
		if (str[a] == ' ')
		{
			while (str[a] == ' ')
				a++;
			if (str[a])
				words++;
		}
		a++;
	}
	ar = malloc(sizeof(char) * (words + 1));
	if (ar == NULL)
		return (NULL);
	a = 0;
	for (b = 0; b < words - 1; b++)
	{
		while (str[a] == ' ')
			a++;
		for (size = 0; str[a] != ' ' && str[a] != '\0'; a++)
		{
			size++;
			a++;
		}
		for (c = 0; c < size; c++)
			a--;
		ar[b] = malloc(sizeof(char) * size);
		if (ar[b] == NULL)
			return (NULL);
		for (c = 0; c < size; a++)
		{
			ar[b][c] = str[a];
			c++;
		}
		ar[b][c] = '\0';
	}
	ar[b] = NULL;
	return (ar);
}
