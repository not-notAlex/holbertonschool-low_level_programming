#include "holberton.h"

/**
 * rot13 - Encrypts a string into rot13
 * @str: string to encode
 *
 * Return: encrypted string
 */
char *rot13(char *str)
{
	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			if (str[i] == s1[k])
			{
				str[i] = s2[k];
				break;
			}
		}
	}
	return (str);
}
