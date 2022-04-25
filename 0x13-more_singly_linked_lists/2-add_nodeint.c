#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a list
 * @head: pointer to the address of the first element of the list
 * @n: data of the list
 * Return: a new list added at the beginning of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;

		*head = newNode;

		return (newNode);
	}


	return (0);
}
