#include "holberton.h"

/**
 * cap_string - Convert the letter of each word to capital
 * @str: String to modified
 *
 * Return: new string
 */
char *cap_string(char *str)
{
	int a, b;
	char s1[] = "\t\n ,;.!?\"(){}";

	str[0] = make_upper(str[0]);

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; s1[b] != '\0'; b++)
		{
			if (str[a] == s1[b])
				str[a + 1] = make_upper(str[a + 1]);
		}
	}

	return (str);
}

/**
 * make_upper - Makes a character uppercase
 * @c: character to modify
 *
 * Return: new character
 */
char make_upper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
