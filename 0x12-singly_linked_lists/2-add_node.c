#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: beginning of a list
 * @str: string value of each new node added
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head != NULL && str != NULL)
	{
		newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
			return (NULL);

		newNode->str = strdup(str);
		newNode->len = length(str);
		newNode->next = *head;

		*head = newNode;

		return (newNode);
	}

	return (0);
}

/**
 * length - length of a string
 * @str: string
 * Return: length of the string
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

