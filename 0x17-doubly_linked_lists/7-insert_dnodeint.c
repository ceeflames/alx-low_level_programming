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
	dlistint_t *ptr, *head;
	unsigned int i;

	ptr = NULL;
	if (idx == 0)
		ptr = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					ptr = add_dnodeint_end(h, n);
				else
				{
					ptr = malloc(sizeof(dlistint_t));
					if (ptr != NULL)
					{
						ptr->n = n;
						ptr->next = head->next;
						ptr->prev = head;
						head->next->prev = ptr;
						head->next = ptr;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (ptr);
}
