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
	hash_node_t *new, *end;

	if (ht || key || value)
		return (0);
	k_key = (unsigned char *)key;
	size = ht->size;

	i = key_index(k_key, size);
	if (i > sizeof(ht->array) / sizeof(hash_node_t *))
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strcpy(new->key, key);
	new->value = strcpy(new->value, value);

	for (end = ht->array[i];; end = end->next)
	{
		if (strcmp(end->key, key) == 0)
		{
			new->next = ht->array[i];
			ht->array[i] = new;
			return (1);
		}
		if (new->next == NULL)
			break;
	}
	end->next = new;
	new->next = NULL;
	return (1);
}
