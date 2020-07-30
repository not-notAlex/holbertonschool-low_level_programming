#include "holberton.h"

/**
 * binary_to_uint - converts a binary to decimal
 * @b: number to convert
 *
 * Return: result value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, i = 0, c, k = 0;
	unsigned int sum = 0, exp;

	if (b == NULL)
		return (0);

	while (b[count])
	{
		if (b[count] > 57 || b[count] < 48)
			return (0);
		count++;
	}

	while (b[i])
	{
		c = b[i] - 48;
		exp = 1;
		for (k = 0; k < count - 1; k++)
			exp *= 2;
		sum += c * exp;
		count--;
		i++;
	}

	return (sum);
}
