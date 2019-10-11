#include "hash_tables.h"
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
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(head->value);
			free(head->value);
			free(head->key);
			free(head);
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
