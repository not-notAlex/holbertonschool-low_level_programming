#include "holberton.h"

/**
 * set_bit - sets the value of given bit to 1
 * @n: number to set
 * @index: index of bit to change
 * Return: 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 32)
		return (-1);
	m = m << index;
	*n += m;
	return (1);
}
