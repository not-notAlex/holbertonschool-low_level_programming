#include "holberton.h"

/**
 * flip_bits - # of bits you need to flip to get from one number to another
 * @n: starting number
 * @m: ending number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0, opp;

	opp = n ^ m;

	while (opp)
	{
		sum += opp & 1;
		opp = opp >> 1;
	}

	return (sum);
}
