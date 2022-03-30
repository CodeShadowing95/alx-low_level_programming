#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Reverse a string
 *
 * @s: String to reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
