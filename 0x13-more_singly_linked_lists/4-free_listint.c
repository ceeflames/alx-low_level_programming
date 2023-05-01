#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	if (head)
		free(head);
}
