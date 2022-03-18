#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long n = 612852475143;
unsigned long i = 2, max = 0;

while ((n / i) >= 1)
{
if (n % i == 0)
{
if (max <= i)
{
max = i;
}
n = n / i;
i = 2;
}
else
{
i++;
}
}

printf("%ld\n", max);
}
