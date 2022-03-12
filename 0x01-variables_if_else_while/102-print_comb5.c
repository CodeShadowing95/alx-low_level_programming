#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i = 0;
int j = 0;

while (i < 99)
{
while (j <= 99)
{
if (((i / 10) <= (j / 10)) && (i % 10 < (j % 10)))
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i < 98)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
j = 0;
}

putchar('\n');

return (0);
}
