#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %2ld byte(s)", (unsigned long)sizeof(char));
printf("Size of an int: %2ld byte(s)", (unsigned long)sizeof(int));
printf("Size of a long int: %2ld byte(s)", (unsigned long)sizeof(long int));
printf("Size of a long long int: %2ld byte(s)", (unsigned long)sizeof(long long int));
printf("Size of a float: %2ld byte(s)", (unsigned long)sizeof(float));

return (0);
}
