#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int a;
	hash_node_t *end;

	if (!ht)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
		for (end = ht->array[a]; end; end = end->next)
		{
			printf("'%s': '%s'", end->key, end->value);
			if (a == ht->size - 1 && end->next == NULL)
				break;
			printf(", ");
		}
	printf("}\n");
}
