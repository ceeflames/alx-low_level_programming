#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node
 * at the end of a list.
 * @head: pointer to a pointer
 * @n: constant integer
 *
 * Return: address of new element || NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(listint_t));
	h->n = n;
	h->next = h;
	
	free(h);
	return (h);
}
