#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n1 = 0, n2 = 1, sum, count = 0;

while (count <= 50)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
printf("%d, ", sum);
count++;
}

return (0);

}

