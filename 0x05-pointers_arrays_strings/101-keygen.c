#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords
 * for the pragram 101-crackme
 * Return: 0
 */
int main(void)
{
	int i;
	char pass[12];

	srand((unsigned int) (time(NULL)));

	for (i = 0; i < 12; i++)
		pass[i] = 33 + rand() % 94;

	pass[i] = '\0';
	printf("%s\n", pass);

	return (0);
}
