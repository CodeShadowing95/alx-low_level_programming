#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: every minute of the day of Jack Bauer from 00:00 to 23:59
 */
void jack_bauer(void)
{
int m = 0;

while (m < 24)
{
int s = 0;
while (s < 60)
{
printf("%02d:%02d\n", m, s);
s++;
}
m++;
}

}

