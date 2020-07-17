#include "variadic_functions.h"

/**
 * print_strings - prints all argument strings
 * @separator: - string between strings
 * @n: number of arguments
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(valist, char *));
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
