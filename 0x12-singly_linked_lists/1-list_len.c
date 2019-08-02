#include "lists.h"
/**
 * list_len - stores number of elems in list_t list
 * @h: h
 * Return: size_t - number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *curr = h;

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
