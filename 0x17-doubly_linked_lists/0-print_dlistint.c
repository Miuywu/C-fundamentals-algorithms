#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: h
 * Return: size_t - number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *curr = h;

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
