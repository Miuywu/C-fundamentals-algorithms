#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: h
 * Return: size_t - number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size;

	if (h.str == NULL)
		printf("[0] (nil)");

	while (h.next != NULL)
	{
		if (h.str == NULL)
			h.str = "[0] (nil)";

		printf("%s", h.str);
		h = h.next;
		size++;
	}
	return (size);
}
