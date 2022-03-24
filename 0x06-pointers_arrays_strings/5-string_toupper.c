#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @str: any string
 *
 * Return: String to upper
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
str[i] = toupper(str[i]);
i++;
}

return (str);

}
