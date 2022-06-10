#include "lists.h"

/**
 * dlistint_len - get the len of elements in a list
 * @h: current node considered as head
 *
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
