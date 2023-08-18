#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: ptr to ptr
 * @idx: index
 * @n: number
 *
 * Return: *new_node || NULL(failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if(new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}

	dlistint_t *curr = *h;
	unsigned int count = 0;

	while (count < idx - 1 && curr != NULL)
	{
		curr = curr->next;
		count++;
	}
	if (curr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = curr->next;
	new_node->prev = curr;

	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new-node;

	return (new_node);

}
