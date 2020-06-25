#include "holberton.h"

/**
 * leet - converts string to 1337-SP34K
 * @str: string to convert
 *
 * Return: modified string
 */
char *leet(char *str)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			if (str[i] == s1[k])
				str[i] = s2[k];
		}
	}

	return (str);
}
