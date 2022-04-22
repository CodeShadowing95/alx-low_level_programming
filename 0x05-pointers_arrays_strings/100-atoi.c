#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string to convert
 * Return: the number from the conversion of the string
 */
int _atoi(char *s)
{
	int i;
	int n = 0, loop_break = 0;
	int sign = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			/** To recover the whole number **/

			/**
			 * Take ASCII character of corresponding digit and
			 * subtract the code from '0' to get numerical
			 * value and multiply n by 10 to shuffle digits
			 * left to update running total **/
			n = n * 10 - (s[i] - '0');
			loop_break = 1;
		}
		else if (loop_break == 1)
			break;
	}
	n = sign * n;
	return (n);
}
