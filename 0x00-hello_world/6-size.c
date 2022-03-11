#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int i1;
long long int i2;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i1));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i2));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
