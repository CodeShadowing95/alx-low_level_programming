#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: original linked list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
