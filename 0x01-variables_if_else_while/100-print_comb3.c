#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i = 0;

while (i < 100)
{
if ((i / 10) < (i % 10))
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i / 10 != 8)
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
