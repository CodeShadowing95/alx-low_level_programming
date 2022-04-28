#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 *
 * @head: original linked list
 * @idx: index where the new node will be added
 * @n: the data to add to the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *currentNode = *head;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	while (--idx)
	{
		currentNode = currentNode->next;
		if (currentNode == NULL)
			return (NULL);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
