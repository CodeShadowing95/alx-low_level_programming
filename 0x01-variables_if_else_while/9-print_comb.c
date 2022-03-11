#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i = 0;

while (i < 10)
{
int n = (int)((i % 10) + '0');
putchar(n);
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}

putchar('\n');

return (0);
}
