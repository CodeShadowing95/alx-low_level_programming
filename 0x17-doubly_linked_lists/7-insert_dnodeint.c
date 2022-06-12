#include "lists.h"

size_t size_list(dlistint_t **);

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: current or first node
 * @idx: index of the list where the node should be added(starts at 0)
 * @n: data of the new node
 *
 * Return: the address of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/**
	 * traverse the list until the position idx
	 * to insert a new node is reached
	 */
	while (--idx)
	{
		temp = temp->next;
		if (temp == NULL && idx > 0)
			return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
