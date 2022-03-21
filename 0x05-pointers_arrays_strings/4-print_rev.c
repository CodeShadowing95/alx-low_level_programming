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
int len = strlen(s);

for (int i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
