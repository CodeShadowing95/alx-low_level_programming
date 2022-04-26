#include <stdio.h>
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
	listint_t *currentNode;
	int count = 0;

	if (head == NULL)
		return (NULL);

	currentNode = head;
	while (currentNode != NULL)
	{
		if (count == index)
			return (currentNode);
		count++;
		currentNode = currentNode->next;
	}

	/**
	 * If we get to this line, the caller was asking
	 * for a non-existent element so we assert fail
	 */
	return (NULL);
}
