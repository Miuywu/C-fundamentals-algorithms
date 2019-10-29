#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - insertion sort implementation
 * @list: linked list of values for sorting
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *after;

	if (!list || !*list || !((*list)->next))
		return;
	curr = *list;
	after = curr->next;
	while (after)
	{
		after = after->next;
		while (curr->prev && curr->n < curr->prev->n)
		{
			curr->prev->next = curr->next;
			if (curr->next)
				curr->next->prev = curr->prev;
			curr->next = curr->prev;
			curr->prev = curr->next->prev;
			curr->next->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
			else
				curr->prev->next = curr;

			print_list(*list);
		}
		curr = after;
	}
}
