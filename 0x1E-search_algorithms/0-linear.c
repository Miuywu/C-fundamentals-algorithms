#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * Prints every comparison
 * @array: pointer to array of ints
 * @size: length of array
 * @value: int to search for
 * Return: first index of value if found or -1 if value not found/array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (!array || !*array)
		return (-1);
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
