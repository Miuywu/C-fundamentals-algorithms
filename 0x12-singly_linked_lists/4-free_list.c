#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head elem
 *
 * Return: address of the new element, or NULL
 */
void free_list(list_t *head)
{
	list_t *nex;
	while (head->next && head->next->next)
	{
		nex = head->next;
		free(head->str);
		free(head);
		head = nex;
	}
}
