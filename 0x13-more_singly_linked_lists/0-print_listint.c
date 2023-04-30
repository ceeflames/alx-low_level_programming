#include "lists.h"

/**
 * print_listint - function that prints all the
 * elements of a list.
 * @h: element
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Number_of_nodes = 0;
	const listint_t *h2;


	for (h2 = h; h2 != NULL; h2 = h2->next)
	{
		printf("%d\n", h2->n);
	}
	return (Number_of_nodes);
}
