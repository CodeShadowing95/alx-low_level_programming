#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function to do the sum of all datas of a list
 * @head: original linked list
 * Return: the sum of all the data (n) of a list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
