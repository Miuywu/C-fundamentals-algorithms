#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @n: h
 * @idx: input
 * @head: h
 * Return: comment
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		if (idx == 0)
			*head = new;
		else
			free(new);
	}
	else
	{
	if (idx == 0)
	{
		new->next = (*head)->next;
		*head = new;
	}
	else
	{
		curr = *head;
		for (; idx > 1 && curr; idx--)
		{
			curr = curr->next;
			if (!curr)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = curr->next;
		curr->next = new;
	}
	}
	return (*head);
}
