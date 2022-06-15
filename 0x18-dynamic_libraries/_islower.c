#include "main.h"

/**
 * _islower - ...
 * @c: char
 *
 * Return: int
 */
int _islower(int c)
{
	char str[] = "abcdefghijklmnoprstuvwxyz";
	int is_found = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
		{
			is_found = 1;
			return (is_found);
		}
	}
	
	return (0);
}
