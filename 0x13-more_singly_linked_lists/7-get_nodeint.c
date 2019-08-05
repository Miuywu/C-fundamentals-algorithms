#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: h
 * @index: input
 * Return: comment
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c_index;

	c_index = 0;
	while (head && c_index < index)
	{
		head = head->next;
		c_index++;
	}
	if (head)
		return (head);
	return (NULL);
}
