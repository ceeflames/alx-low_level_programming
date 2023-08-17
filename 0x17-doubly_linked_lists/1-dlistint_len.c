#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in alinked list
 * @h: pointer
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_list = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		len_list++;
	}
	return (len_list);
}
