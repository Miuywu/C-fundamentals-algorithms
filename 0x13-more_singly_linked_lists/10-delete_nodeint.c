#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @index: input
 * @head: h
 * Return: 1, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *cpy;

	if (!head || !(*head))
		return (-1);
	if (!index)
	{
		cpy = *head;
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	if (index == 1)
	{
		cpy = (*head)->next;
		free(cpy);
		return (1);
	}
	for (curr = *head; index > 1; index--)
		curr = curr->next;
	if (!curr && index > 1)
		return (-1);
	cpy = curr->next;
	curr->next = curr->next->next;
	free(cpy);
	return (1);
}
