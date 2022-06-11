#include "lists.h"

/**
 * sum_dlistint - get the sum of all datas nodes
 * @head: current or first node
 *
 * Return: sum of all datas node
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += (head->n);
		head = head->next;
	}

	return (sum);
}
