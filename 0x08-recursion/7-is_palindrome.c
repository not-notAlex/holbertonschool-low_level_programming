#include "holberton.h"

/**
 * is_palindrome - tests if a string is a palindrome
 * @s: string given
 *
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	int e = endof_str(s, 0);

	return (palindrome_finder(s, 0, e));
}

/**
 * endof_str - points to the end of a string
 * @s: given string
 * @n: index
 * Return: pointer
 */
int endof_str(char *s, int n)
{
	if (s[n] == '\0')
		return (n - 1);
	return (endof_str(s, n + 1));
}

/**
 * palindrome_finder - tests if a string is a palindrome
 * @s: string to test
 * @i: start of string
 * @e: end of string
 * Return: 1 if true 0 if false
 */
int palindrome_finder(char *s, int i, int e)
{
	if (i > e)
		return (1);
	if (s[i] == s[e])
		return (palindrome_finder(s, i + 1, e - 1));
	else
		return (0);
}
