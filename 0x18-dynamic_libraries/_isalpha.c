#include "main.h"

/**
 * _isalpha - returns 1 if the character is a lowercase letter, and 0 otherwise
 * 
 * @c The character to be checked.
 * 
 * Return: 1 if the character is in the string, 0 if not.
 */
int _isalpha(int c)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
            return (1);
    }

    return (0);
}