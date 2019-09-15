#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @n: h
 * @idx: input
 * @head: h
 * Return: comment
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cpy = *h;
	unsigned int a = 1;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (a < idx && cpy)
	{
		cpy = cpy->next;
		a++;
	}
	if (a != idx)
		return (NULL);
	new->next = cpy->next;
	new->prev = cpy;
	cpy->next = new;
	return (new);
}
