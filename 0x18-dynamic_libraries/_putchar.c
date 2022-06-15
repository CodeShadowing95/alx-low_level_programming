#include "main.h"

/**
 * _putchar - put a character into the buffer and return immediately after then
 * @c: char
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
