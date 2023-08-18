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
	add_end->next = NULL;

	if (*head == NULL)
	{
		add_end->prev = NULL;
		*head = add_end;
	}
	else
	{
		dlistint_t *curr = *head;

		while (curr->next != NULL)
			curr = curr->next;
		curr->next = add_end;
		add_end->prev = curr;
	}
	return (add_end);
}
