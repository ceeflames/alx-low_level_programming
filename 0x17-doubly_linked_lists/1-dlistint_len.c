#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in alinked list
 * @h: pointer
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
