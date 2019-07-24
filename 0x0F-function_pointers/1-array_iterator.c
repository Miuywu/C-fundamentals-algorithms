#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on array elements
 * @array: arr
 * @size: size struct
 * @action: fn
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;/*loopers*/

	for (a = 0; a < size; a++)
		action(array[a]);
}
