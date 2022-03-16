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
uint64_t n1 = 0, n2 = 1, sum;
int count = 0;

while (count < 98)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
if (count == 97)
{
printf("%llu", sum);
}
else
{
printf("%llu, ", sum);
}
count++;
}

printf("\n");

return (0);
}

