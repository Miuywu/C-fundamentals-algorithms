#include "holberton.h"

/**
 * *_memset - fills mem with a constant byte
 *
 * Return: pointer to char
 * @n: input
 * @b: out
 * @s: array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
