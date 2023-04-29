#include "lists.h"
#include <stddef.h>

/**
 * strlen_ - function to find the length of str
 * @str: string
 *
 * return: len
 */
unsigned int strlen_(char *str)
{
	unsigned int i;
	for (i = 0; str[i]; i++);
	return (i);
}

/**
 * *add_node_end - Function that adds a new node at
 * the end of the list.
 *
 * Return: Address of n || NULL (failure)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen_(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
