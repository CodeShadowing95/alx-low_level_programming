#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: the initial list
 * @n: the data of the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *lastNode;

	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (*head);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = lastNode;
		return (temp);
	}

	return (NULL);
}
