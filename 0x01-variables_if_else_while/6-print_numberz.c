#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i = 0;

while (i < 10)
{
char c = (char)((i % 10) + '0');
putchar(c);
i++;
}

putchar('\n');

return (0);
}
