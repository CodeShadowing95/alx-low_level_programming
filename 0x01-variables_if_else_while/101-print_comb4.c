#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i = 0;

while (i < 1000)
{
if ((i / 100) < ((i % 100) / 10) && ((i % 100) / 10) < (i % 10))
{
putchar((i / 100) + '0');
putchar(((i % 100) / 10) + '0');
putchar((i % 10) + '0');
if ((i / 100) < 7)
{
putchar(',');
putchar(' ');
}
}
i++;
}

putchar('\n');

return (0);
}
