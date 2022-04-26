#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: initial list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
