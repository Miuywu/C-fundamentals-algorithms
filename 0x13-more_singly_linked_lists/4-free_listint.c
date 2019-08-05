#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head elem
 *
 * Return: address of the new element, or NULL
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);

		free(head);
	}
}
