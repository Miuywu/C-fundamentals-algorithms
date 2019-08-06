#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head elem
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int cpy;
	listint_t *copy;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	copy = (*head)->next;
	cpy = (*head)->n;
	
	free(*head);

	*head = copy;
	return (cpy);
}
