#include "main.h"

/**
 * It takes a string and returns the length of the string
 * @s: pointer to a string
 * 
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int count = 0;
    int i = 0;

    while (*(s + i) != '\0')
    {
        count++;
        i++;
    }

    return (count);
}