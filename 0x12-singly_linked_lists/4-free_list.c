#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 * @head: original linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
