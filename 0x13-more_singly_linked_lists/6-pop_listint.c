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

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	cpy = (*head)->n;

	*head = (*head)->next;
	return (cpy);
}
