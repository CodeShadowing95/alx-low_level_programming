#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * getSize - get the size of the node
 * @head: original linked list
 * Return: the size of the list
 */
int getSize(listint_t *head)
{
	int count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}

/**
 * delete_nodeint_at_index - delete a node at index of a list
 * @head: original linked list
 * @index: position of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *delNode;
	unsigned int i, count;

	if (*head == NULL)
		return (-1);

	count = getSize(temp);
	if (index > count)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}

	delNode = temp->next;

	temp->next = temp->next->next;
	delNode->next = NULL;
	free(delNode);

	return (1);
}
