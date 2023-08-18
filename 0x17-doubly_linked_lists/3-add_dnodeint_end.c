#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: ptr to head
 * @n: number
 *
 * Return: ptr || NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end = malloc(sizeof(dlistint_t));

	if (add_end == NULL)
		return (NULL);
	add_end->n = n;
	add_end->prev = NULL;
	add_end->next = *head;

	if (*head != NULL)
		(*head)->next = add_end;

	*head = add_end;

	return (add_end);
}
