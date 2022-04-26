#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: original linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (*head != NULL)
	{
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}

	*head = NULL;
}
