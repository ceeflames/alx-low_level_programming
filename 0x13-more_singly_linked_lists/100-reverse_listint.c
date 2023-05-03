#include "lists.h"

/**
 * *reverse_listint - function that reverses a linked list
 * @head: double pointer
 *
 * Return: A pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *back;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	back = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
	*head = back;

	return (*head);
}
