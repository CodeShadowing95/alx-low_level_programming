#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - display a string using function pointer
 *
 * @name: string to print
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
