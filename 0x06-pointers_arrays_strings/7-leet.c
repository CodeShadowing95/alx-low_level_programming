#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - Encode a string
 *
 * @str: string to encode
 * Return: String encoded
 */
char *leet(char *str)
{
int i = 0;
int j;
char l_char[] = {'a', 'e', 'o', 'l', 't'};
char n[] = {'4', '3', '0', '1', '7'};

while (str[i])
{
j = 0;
while (l_char[j])
{
if (l_char[j] == tolower(str[i]))
{
str[i] = n[j];
break;
}

j++;
}

i++;
}

return (str);
}
