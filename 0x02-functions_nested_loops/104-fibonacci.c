#include <stdio.h>
#include <limits.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long n1 = 0, n2 = 1, sum;
int count = 0;

while (count < 98)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
if (count == 97)
{
printf("%u", sum);
}
else
{
printf("%u, ", sum);
}
count++;
}

printf("\n");

return (0);
}

