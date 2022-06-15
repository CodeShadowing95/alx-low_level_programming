#include "main.h"

/**
 * The above function checks if the character is lowercase.
 * @c: The character to be checked
 * 
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	char str[] = "abcdefghijklmnoprstuvwxyz";
	int is_found = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (1);
	}
	
	return (0);
}
