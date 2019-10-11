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
	hash_node_t *end;

	if (!ht || !key || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	for (end = ht->array[i]; end; end = end->next)
		if (strcmp(end->key, key) == 0)
		{
			free(end->value);
			end->value = strdup(value);

			/*printf("found\n");*/
			return (1);
		}

	end = malloc(sizeof(hash_node_t));
	end->next = ht->array[i];
	end->value = strdup(value);
	end->key = strdup(key);

	ht->array[i] = end;

	/*printf("end\n");*/
	return (1);
}
