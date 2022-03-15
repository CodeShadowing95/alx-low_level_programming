#include <stdio.h>
#include "main.h"

/**
 * multiples_5_3 - Entry point
 *
 * Return: n times table
 */
void multiples_5_3(void)
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

