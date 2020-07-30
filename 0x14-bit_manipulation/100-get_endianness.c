#include "holberton.h"

/**
 * get_endianness - checks the endianness of system
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int number = 98;
	char *c = (char *)&number;

	if (*c)
		return (1);
	else
		return (0);
}
