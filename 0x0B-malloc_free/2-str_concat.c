#include "holberton.h"

/**
 * str_concat - concatenates two strings into new string
 * @s1: first string
 * @s2: second string
 * Return: new concacted string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int a, b;
	char *ar;

	while (s1[size1])
		size1++;

	while (s2[size2])
		size2++;

	ar = malloc(sizeof(char) * size1 + sizeof(char) * size2);

	if (ar == NULL)
		return (0);

	for (a = 0; a < size1; a++)
		ar[a] = s1[a];

	for (b = 0; b < size2; b++)
		ar[a + b] = s2[b];

	return (ar);
}
