#include "hash_tables.h"
/**
 * key_index - return the index of a key
 * @key: some key
 * @size: length of hash table
 * Return: index at which the key exists
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	return (index);
}
