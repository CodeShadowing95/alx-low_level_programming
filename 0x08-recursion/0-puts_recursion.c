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
	/** while there's a character in the string **/
	if (*s)
	{
		/** Recursion to the string, get the next character**/
		_puts_recursion(s - 1);
		/** print the character **/
		puts(s);
	}
	else
	{
		return;
	}
}
