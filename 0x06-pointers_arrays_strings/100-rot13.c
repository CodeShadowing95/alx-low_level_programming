#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - Encode string
 *
 * @str: string to encode
 * Return: the encoded string
 */
char *rot13(char *str)
{
char tab1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char tab2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0, j;
int len = strlen(str);
int len_tab = strlen(tab1);

while (i < len)
{
j = 0;
while (j < len_tab)
{
if (str[i] == tab1[j])
{
str[i] = tab2[j];
break;
}
j++;
}
i++;
}
return (str);
}
