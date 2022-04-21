#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - get the length of a list
 * @h: struct list_t
 * Return: number of elements of a list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
