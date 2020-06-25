#include "holberton.h"

/**
 * cap_string - Convert the letter of each word to capital
 * @str: String to modified
 *
 * Return: new string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 9)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 10)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 44)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 59)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 46)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 33)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 63)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 34)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 40)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 41)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 123)
			str[i + 1] = make_upper(str[i + 1]);
		if (str[i] == 125)
			str[i + 1] = make_upper(str[i + 1]);
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
