#include <string.h>
#include "main.h"

/**
 * is_palindrome - Check if s is a palindrome or not
 *
 * @s: string to analyze
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	/** if the string is empty **/
	if (n == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, n - 1));
}

/**
 * palindrome - Check if a string is a palindrome or not
 *
 * @s: string to analyze
 * @i: index that goes forward in the string
 * @j: index that goes backward in the string
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome(char *s, int i, int j)
{
	/** if there's only one character in the string s **/
	if (i == j)
		return (1);

	/** if the first and last characters do not match **/
	if (s[i] != s[j])
		return (0);

	/** if there are more than 1 character **/
	if (i < j + 1)
		return (palindrome(s, i + 1, j - 1));
	else
		return (1);
}
