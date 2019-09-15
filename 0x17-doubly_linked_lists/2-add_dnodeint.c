#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head elem
 * @n: new head int
 * Return: address of the new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
		if (new)
		{
			new->n = n;
			new->prev = NULL;
			new->next = NULL;
			if (*head)
			{
				new->next = *head;
				(*head)->prev = new;
			}
			*head = new;
			return (new);
		}
	}
	return (NULL);
}
