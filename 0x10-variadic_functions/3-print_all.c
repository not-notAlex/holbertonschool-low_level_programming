#include "variadic_functions.h"
void print_i(va_list valist);
void print_f(va_list valist);
void print_s(va_list valist);
void print_c(va_list valist);

/**
 * print_all - prints all types of arguments
 * @format: types of arguments passed
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int a = 0, b;
	choice_t cho[5];
	char *sep = "";

	cho[0].t = 's';
	cho[0].f = print_s;
	cho[1].t = 'c';
	cho[1].f = print_c;
	cho[2].t = 'f';
	cho[2].f = print_f;
	cho[3].t = 'i';
	cho[3].f = print_i;
	cho[4].t = '\0';
	cho[4].f = NULL;
	va_start(valist, format);
	while (format != NULL && format[a])
	{
		b = 0;
		while (cho[b].t)
		{
			if (cho[b].t == format[a])
			{
				printf("%s", sep);
				cho[b].f(valist);
				sep = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(valist);
	printf("\n");
}

/**
 * print_s - prints a string
 * @valist: valist to print
 *
 * Return: no return
 */
void print_s(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_i - prints an integer
 * @valist: valist to print
 *
 * Return: no return
 */
void print_i(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_c - prints a char
 * @valist: valist to print
 *
 * Return: no return
 */
void print_c(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_f - prints a float
 * @valist: valist to print
 *
 * Return: no return
 */
void print_f(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
