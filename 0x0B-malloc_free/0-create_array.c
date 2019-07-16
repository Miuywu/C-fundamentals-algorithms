#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * create_array - creates an array, initialize with char
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 * @size: input
 * @c: inout
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;/*loop counters*/

	if (size == 0)/*checks if size = 0*/
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)/*checks if malloc failed*/
		return (NULL);
	else
	{
		for (a = 0; a < size; a++)
			array[a] = c;
		return (array);
	}
}
