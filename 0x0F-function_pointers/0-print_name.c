#include <stdio.h>
#include "function_pointers.h"

/**
 * printStr - function
 *
 * @str: string
 * Return: void
 */
void printStr(char *str)
{
	unsigned int i;

	if (str != NULL)
	{

		for (i = 0; str[i] != 0; i++)
			;
		i += 1;

		for (int j = 0; str[j] != 0; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
}

/**
 * print_name - display a string using function pointer
 *
 * @name: string to print
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
