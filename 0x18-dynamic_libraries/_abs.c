#include "main.h"

/**
 * _abs - If n is less than zero, return the negative of n, otherwise return n.
 * 
 * @n The number to be converted to absolute value.
 * 
 * Return: The absolute value of the number.
 */
int _abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}