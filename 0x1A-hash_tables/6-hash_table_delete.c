#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int a;
	hash_node_t *end, *c;

	if (!ht)
		return;
	for (a = 0; a < ht->size; a++)
	{
		for (end = ht->array[a], c = end->next; end; end = c)
		{
			free(end->key);
			free(end->value);
			free(end);
		}
	}
	free(ht->array);
	free(ht);
}
