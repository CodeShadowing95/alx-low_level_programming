#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: The parameter
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c == tolower(c))
{
return (1);
}
else
{
return (0);
}
}
