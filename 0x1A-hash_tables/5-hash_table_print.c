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
	int f = 0;

	if (!ht)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		for (end = ht->array[a]; end; end = end->next)
		{
			if (f != 0)
				printf(", ");
			else
				f = 1;
			printf("'%s': '%s'", end->key, end->value);
		}
	}
	printf("}\n");
}
