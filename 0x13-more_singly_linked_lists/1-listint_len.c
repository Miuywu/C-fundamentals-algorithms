#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: h
 * Return: size_t - number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t size;
	const listint_t *curr = h;

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
