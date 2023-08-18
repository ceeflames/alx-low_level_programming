#include "lists.h"
/**
 * sum_dlistint - The sum of all the data(n) of a linked list
 * @head: ptr to list
 *
 * Return: 0 if empty || sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
