#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

char c = 'A';

while (c <= 'Z')
{
if (c != 'E' && c != 'Q')
{
putchar(tolower(c));
}
c++;
}

putchar('\n');

return (0);
}
