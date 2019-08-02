#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head elem
 * @str: head str
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cpy = *head;
	list_t *new;
	int a = 0;

	new = malloc(sizeof(list_t));
	if (new && str)
	{
		new->str = strdup(str);
		while (str[a])
			a++;
		new->len = a;
		new->next = NULL;

		if (!(*head))
		{
			*head = new;
			return (*head);
		}
		cpy = *head;
		while (cpy->next)
			cpy = cpy->next;
		cpy->next = new;
		return (*head);

	}
	return (NULL);
}
