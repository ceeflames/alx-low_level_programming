#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: begining of the node
 */

void free_list(list_t *head)
{
	if (head)
	{
		free(head);
	}
}
