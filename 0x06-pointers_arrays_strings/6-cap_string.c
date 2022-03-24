#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: the string
 *
 * Return: All the words of the string capitalized
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] == '-' || isdigit(str[i]))
{
i++;
continue;
}

if (!(isalpha(str[i])))
{
str[i + 1] = toupper(str[i + 1]);
}

i++;
}

return (str);
}
