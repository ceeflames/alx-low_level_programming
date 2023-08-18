#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: ptr to the linked list
 * @index: index
 *
 * Return: NULL if node doesn't exit || nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node = head;
	unsigned int idx = index;

	while (idx > 0 && new_node != NULL)
	{
		new_node = new_node->next;
		idx--;
	}
	if (new_node == NULL)
		return (NULL);

	return (new_node);
}
