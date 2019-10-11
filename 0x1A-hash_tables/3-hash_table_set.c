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
	unsigned long int i;
	hash_node_t *new, *end;

	if (!ht || !key || !value || !*key)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	for (end = ht->array[i]; !end; end = end->next)
		if (strcmp(end->key, key) == 0)
		{
			free(end->value);
			end->value = strdup(value);
			return (1);
		}
	if (!end)
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);

		new->next = ht->array[i];
		ht->array[i] = new;
	}
	return (1);
}
