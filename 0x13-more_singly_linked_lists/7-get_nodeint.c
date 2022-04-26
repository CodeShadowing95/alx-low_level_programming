#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a list
 * @head: original linked list
 * @index: index of the node, starting at 0
 * Return: the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
