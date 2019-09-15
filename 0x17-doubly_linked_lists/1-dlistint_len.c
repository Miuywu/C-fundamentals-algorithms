#include "lists.h"
/**
 * dlistint_len - returns len of dlist_int
 * @h: head of linked list
 * Return: size_t - number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *curr = h;

	size = 0;
	if (h)
	{
		while (curr != NULL)
		{
			curr = curr->next;
			size++;
		}
	}
	return (size);
}
