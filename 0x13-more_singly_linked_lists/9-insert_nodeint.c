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
	unsigned int c_index;
	listint_t *insert;
	listint_t *curr = *head;

	insert = malloc(sizeof(listint_t));
	if (!insert)
		return (NULL);

	if (idx == 0)
	{
		insert->next = curr;
		*head = insert;
		return (*head);
	}
	c_index = 0;
	while (curr && c_index < idx)
	{
		curr = curr->next;
		c_index++;
		if (!curr)
		{
			free(insert);
			return (NULL);
		}
	}
	if (!curr)
		return (NULL);

	insert->next = curr->next;
	insert->n = n;
	(curr)->next = insert;
	return (insert);
}
