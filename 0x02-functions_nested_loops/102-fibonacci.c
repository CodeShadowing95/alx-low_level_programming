#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long long int n1 = 0, n2 = 1, sum;
int count = 0;

while (count <= 50)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
if (count == 50)
{
printf("%lld", sum);
}
else
{
printf("%lld, ", sum);
}
count++;
}

printf("\n");

return (0);
}

