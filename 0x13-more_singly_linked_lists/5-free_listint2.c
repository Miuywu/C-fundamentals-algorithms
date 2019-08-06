#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head elem
 *
 * Return: address of the new element, or NULL
 */
void free_list(listint_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head);
	}
}
/**
 * free_listint2 - frees a listint_t list
 * @head: head elem
 *
 * Return: address of the new element, or NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *cpy;


	if (head == NULL)
		return;

	cpy = *head;
	if (cpy != NULL)
	{
		free_list(cpy);
	}
	*head = NULL;
}
