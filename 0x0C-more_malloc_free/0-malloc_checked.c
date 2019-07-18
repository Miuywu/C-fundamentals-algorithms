#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * Return: pointer to the allocated memory
 * @b: input
 *
 */
void *malloc_checked(unsigned int b)
{
	/*store malloc output*/
	void *p;

	/*malloc*/
	p = malloc(b);

	/*malloc check*/
	if (p == NULL)
		exit(98);
	return (p);
}
