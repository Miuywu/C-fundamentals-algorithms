#include "hash_tables.h"
/**
 * hash_djb2 - implements the djb2 hash function
 * @str: name
 * Return: ulongint
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	if (!str)
		return (0);
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
