#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: arr
 * @size: size int
 * @cmp: fn ptr
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a; /*looper*/

	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
		if (cmp(array[a]) != 0)
			return (a);
	return (-1);
}
