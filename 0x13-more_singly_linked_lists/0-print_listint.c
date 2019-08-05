#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: h
 * Return: size_t - number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size;
	const listint_t *curr = h;

	size = 0;
	if (h)
	{
		while (curr != NULL)
		{
			printf("%d\n", curr->n);
			curr = curr->next;
			size++;
		}
	}
	return (size);
}
