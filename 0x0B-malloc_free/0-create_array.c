#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 * @size: input
 * @c: inout
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;/*loop counters*/

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	array[0] = c;
	if (array != NULL)
	{
		for (a = 0; a < size; a++)
			array[a] = c;
		return (array);
	}
	else
		return (NULL);
}
