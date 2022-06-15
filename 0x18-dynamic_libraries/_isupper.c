#include "main.h"

/**
 * > This function checks if the character is an uppercase letter
 * @c: The character to be checked
 * 
 * Return: 1 if the character is uppercase, otherwise it returns 0.
 */
int _isupper(int c)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int is_found = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
		{
			return (1);
		}
	}
	
	return (0);
}