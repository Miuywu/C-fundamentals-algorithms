#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

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
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * Return: pointer to ncat in allocated memory
 * @nmemb: elements per arr
 * @size: num of arr
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;/*store malloc output*/

	/*inputs check*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*malloc*/
	p = malloc(nmemb * size);
	/*malloc check*/
	if (p == NULL)
		return (NULL);
	/*memset*/
	_memset(p, '0', nmemb);

	return (p);
}
