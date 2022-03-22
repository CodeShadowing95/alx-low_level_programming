#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry point
 *
 * @str: String
 * Return void
 */
void puts_half(char *str)
{
int lenght = strlen(str);
int n, i = 0;

if (!(lenght % 2))
{
n = (lenght / 2) - 1;
}
else
{
n = (lenght - 1) / 2;
}

while (i < lenght)
{
if (i > n)
{
putchar(str[i]);
}
i++;
}

putchar('\n');
}
