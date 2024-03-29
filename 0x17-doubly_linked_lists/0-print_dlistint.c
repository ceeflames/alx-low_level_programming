#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Prints all the elements of a list
 * @h: pointer
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	if (h == NULL)
		return (0);


	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_node++;
		h = h->next;
	}

	return (count_node);
}
