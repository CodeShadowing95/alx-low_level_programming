#include"lists.h"

/**
 * get_dnodeint_at_index - get a node at a given index
 * @head: current or first node
 * @index: index of the node, starting from 0
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	idx = 0;

	while (head != NULL)
	{
		if (index == idx)
			return (head);

		head = head->next;
		idx++;
	}

	return (NULL);
}
