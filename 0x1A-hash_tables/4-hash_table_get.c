#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: given key
 * Return: value at key, or NULL if key couldnt be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *end;

	if (!ht || !key)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	for (end = ht->array[i]; end; end = end->next)
		if (strcmp(end->key, key) == 0)
			return (end->value);
	return (NULL);
}
