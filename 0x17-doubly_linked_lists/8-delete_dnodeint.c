#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position
 * @index: input
 * @head: h
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cpy;
	unsigned int a;

	if (!head || !*head)
		return (-1);
	cpy = *head;
	if (!index)
	{
		if (cpy->next)
			cpy->next->prev = NULL;
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (a = 0; a < index && cpy->next; index--)
		cpy = cpy->next;
	if (a != index)
		return (-1);
	if (cpy->next)
		cpy->next->prev = cpy->prev;
	if (cpy->prev)
		cpy->prev->next = cpy->next;
	free(cpy);
	return (1);
}
