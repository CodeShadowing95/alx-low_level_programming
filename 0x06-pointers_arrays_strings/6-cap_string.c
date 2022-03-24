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

if (str == NULL)
{
return (NULL);
}

while (str[i])
{
if (str[i] == '64' || str[i] == '9' || str[i] == '10' || str[i] == '44'
|| str[i] == '59' || str[i] == '46' || str[i] == '33' || str[i] == '63'
|| str[i] == '34' || str[i] == '40' || str[i] == '41' || str[i] == '123'
|| str[i] == '125')
{
str[i + 1] = toupper(str[i + 1]);
}

i++;
}

return (str);
}
