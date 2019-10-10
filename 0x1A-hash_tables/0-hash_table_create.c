#include "hash_tables.h"
/**
 * hash_table_create - initializes a hash table
 * @size: length of hash table
 * Return: ptr to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
	{
		free(new);
		return (NULL);
	}
	new->array = array;
	return (new);
}
