#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: String
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
int len = strlen(str);

while (i < len)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
i++;
}
putchar('\n');
}
