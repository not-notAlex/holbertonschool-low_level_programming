#include "holberton.h"

/**
 * string_nconcat - concatenates two strings for n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int a, b;
	char *ar;

	if (s1 != NULL)
		while (s1[size1])
			size1++;
	if (s2 != NULL)
		while (s2[size2] && size2 < n)
			size2++;

	ar = malloc(size1 + size2 + 1);
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size1; a++)
		ar[a] = s1[a];

	for (b = 0; b < size2 && b < n; b++)
		ar[a + b] = s2[b];

	ar[a + b] = '\0';

	return (ar);
}
