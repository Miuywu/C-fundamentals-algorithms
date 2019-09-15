#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head elem
 * @n: new end int
 * Return: address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cpy = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		if (!*head)
		{
			*head = new;
			return (*head);
		}
		while (cpy->next)
			cpy = cpy->next;
		cpy->next = new;
		return (*head);
	}
	return (NULL);
}
