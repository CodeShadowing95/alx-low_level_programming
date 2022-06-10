#include "lists.h"

/**
 * print_dlistint - get the number of nodes
 * @h: current node (as head)
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
