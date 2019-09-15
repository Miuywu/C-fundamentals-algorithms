#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position
 * @index: input
 * @head: h
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *cpy;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		cpy = *head;
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (curr = *head; index > 1 && curr->next; index--)
		curr = curr->next;
	if (!(curr->next) && index > 1)
		return (-1);
	cpy = curr->next;
	curr->next = curr->next->next;
	free(cpy);
	return (1);
}
