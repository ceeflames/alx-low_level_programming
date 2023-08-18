#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: ptr to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		dlistint_t *temp = ptr;

		ptr = ptr->next;
		free(temp);
	}

}
