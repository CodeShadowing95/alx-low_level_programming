#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get the number of elements of a linked list
 * @h: a list
 * Return: the length of a list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
