#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: ptr
 * @n: number
 *
 * Return: ptr || NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_new = malloc(sizeof(dlistint_t));

	if (add_new == NULL)
		return (NULL);

	add_new->n = n;
	add_new->prev = NULL;
	add_new->next = *head;

	if (*head != NULL)
		(*head)->prev = add_new;

	*head = add_new;

	return (add_new);
}
