#include "main.h"
#include <string.h>

/**
 * print_rev - Entry point
 *
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = strlen(s);

while (i > 0)
{
_putchar(s[i - 1]);
i--;
}
_putchar('\n');
}
