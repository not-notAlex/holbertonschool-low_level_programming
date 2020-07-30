#include "holberton.h"

/**
 * get_bit - Return the value of a bit at given index
 * @n: given number
 * @index: index of bit to get
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
