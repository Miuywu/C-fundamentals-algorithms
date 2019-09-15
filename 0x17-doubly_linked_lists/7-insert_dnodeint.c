#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @n: h
 * @idx: input
 * @head: h
 * Return: comment
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new, *curr;

	if (!head || (!(*head) && idx > 0))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	curr = *head;
	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (*head);
	}
	for (curr = *head; idx > 1 && curr->next; idx--)
		curr = curr->next;
	if (!(curr->next) && idx > 1)
	{
		free(new);
		return (NULL);
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
