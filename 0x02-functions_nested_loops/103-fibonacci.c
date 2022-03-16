#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void) {
    int n1 = 0, n2 = 1, n3, sum = 0;
    int count = 0;

    while (count <= 10) {
        n3 = n1 + n2;
        if (n3 % 2 == 0)
        {
            sum += n3;
        }
        n1 = n2;
        n2 = sum;
        count++;
    }

    printf("%d\n", sum);

    return (0);
}

