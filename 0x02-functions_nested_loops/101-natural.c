#include <stdio.h>

/**
 * multiples_3_5 - Entry point
 *
 * Return: n times table
 */
void multiples_3_5(void)
{
int i = 0;
int sum = 0;

while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
i++;
}

printf("%d\n", sum);

}
