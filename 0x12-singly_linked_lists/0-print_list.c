#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: h
 * Return: size_t - number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *curr = h;

	size = 0;
	if (h)
	{
		while (curr != NULL)
		{
			if (curr->str == NULL)
				printf("%s\n", "[0] (nil)");
			else
				printf("[%d] %s\n", curr->len, curr->str);
			curr = curr->next;
			size++;
		}
	}
	return (size);
}
