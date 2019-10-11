#include "hash_tables.h"
hash_node_t *add_node_hash(hash_node_t **head, const char *str, const char *k);

/**
 * add_node_hash - adds a new node at the beginning of a list_t list
 * @head: head elem
 * @str: head str
 * @k: key
 * Return: address of the new element, or NULL
 */
hash_node_t *add_node_hash(hash_node_t **head, const char *str, const char *k)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new)
	{
		new->value = strdup(str);
		new->next = *head;
		new->key = strdup(k);
		*head = new;
		return (new);
	}
	return (NULL);
}
/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key of pair
 * @value: value of pair
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned char *k_key;
	unsigned long int i, size;
	hash_node_t *head;

	if (ht || key || value)
		return (0);
	k_key = (unsigned char *)key;
	size = ht->size;
	i = key_index(k_key, size);
	for (head = ht->array[i]; head; head = head->next)
		if (!strcmp(head->key, key))
		{
			head = ht->array[i];
			head = add_node_hash(&head, value, key);
			if (!head)
				return (0);
			head->next = ht->array[i];
			return (1);
		}
	head = malloc(sizeof(hash_node_t));
	if (!head)
		return (0);
	head->key = strcpy(head->key, key);
	if (strcmp(head->key, key) != 0)
		return (0);
	head->value = strcpy(head->value, value);
	if (strcmp(head->value, value) != 0)
		return (0);
	head->next = ht->array[i];
	ht->array[i] = head;
	return (1);
}
