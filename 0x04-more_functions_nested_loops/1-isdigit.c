#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Entry point
 * @c: parameter
 *
 * Return: 1 if c digit, 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}

}

