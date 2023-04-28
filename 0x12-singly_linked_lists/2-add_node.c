#include "lists.h"

/**
 * *add_node - function that adds a new node
 * at the begining of a ist.
 * @head: pointer to list
 * @str: insert into element
 * Return: Number of node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addnode;

	addnode = malloc(sizeof(list_t));
	if (addnode == NULL)
		return (NULL);
	addnode->str = strdup(str);
	addnode->len = strlen(str);
	addnode->next = *head;
	*head = addnode;

	return(addnode);
}
