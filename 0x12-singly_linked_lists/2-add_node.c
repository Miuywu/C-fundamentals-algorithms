#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head elem
 * @str: head str
 * Return: address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int a = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		new->next = *head;
		while (str[a])
			a++;
		new->len = a;
		*head = new;
		return (new);
	}
	return (NULL);
}
