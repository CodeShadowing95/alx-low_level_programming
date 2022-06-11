#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: current or first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/**
	 * we traverse all nodes of the list
	 * and we free each node until head is NULL
	 */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
