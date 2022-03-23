#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * rev_string - Entry point
 *
 * @s: String
 *
 * Return: void
 */
void rev_string(char *s)
{
long i = 0, j = 0;
char temp;
char str[10000];
strcpy(str, s);


j = strlen(str) - 1;

while (j > i)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
j--;
i++;
}

strcpy(s, str);
}
