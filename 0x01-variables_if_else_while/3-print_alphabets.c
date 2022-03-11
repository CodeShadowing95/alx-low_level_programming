#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int c = 'A';

while (c <= 'Z')
{
putchar(tolower(c));
c++;
}

c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}

putchar('\n');

return (0);
}
