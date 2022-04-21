#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * length - length of a string
 * @str: string
 * Return: the number of elements of a string
 */
int length(const char *str)
{
	int count = 0;

	while (*str)
	{
		str++;
		count++;
	}

	return (count);
}

/**
 * add_node_end - add a new node at the end of a list
 * @head: head of the linked list
 * @str: string to add at the end of the list
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	if (str != NULL)
	{
		newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
			return (NULL);
		newNode->str = strdup(str);
		newNode->len = length(str);
		newNode->next = NULL;

		if (*head == NULL)
		{
			*head = newNode;
			return (*head);
		}
		else
		{
			lastNode = *head;
			while (lastNode->next != NULL)
				lastNode = lastNode->next;

			lastNode->next = newNode;
			return (lastNode);
		}
	}

	return (NULL);
}
