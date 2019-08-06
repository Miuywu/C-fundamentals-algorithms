#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head elem
 * @n: given value
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cpy = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (!(*head))
		{
			*head = new;
			return (*head);
		}
		cpy = *head;
		while (cpy->next)
			cpy = cpy->next;
		cpy->next = new;
		return (*head);

	}
	return (NULL);
}
