#include "variadic_functions.h"

/**
 * sum_them_all - Adds all arguments as sum
 * @n: number of arguments
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n < 1)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
