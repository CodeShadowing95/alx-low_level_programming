#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a string through a recursion
 *
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s - 1);
		_putchar(s);
	}
}
