#include "function_pointers.h"

/**
 * print_name - Prints a name using some other function
 * @name: name to print
 * @f: function to use on name
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
