#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i = 0;
int j = 'A';

while (i < 10)
{
int d = (int)((i % 10) + '0');
putchar(d);
i++;
}

while (j <= 'F')
{
putchar(tolower(j));
j++;
}

putchar('\n');

return (0);
}
