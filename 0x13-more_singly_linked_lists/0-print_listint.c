#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 * @h: a list
 * Return: the length of the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
