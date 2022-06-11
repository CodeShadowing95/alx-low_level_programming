#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a list
 * @head: current or first node
 * @n: data of the node
 *
 * Return: the address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = (*head);

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
