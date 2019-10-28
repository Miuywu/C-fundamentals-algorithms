#include "sort.h"
/*
 * bubble_sort - implementation of the basic bubble sort
 * @array: elements to be sorted
 * @size: length of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t sorted = 0, a, b;
	int lesser;

	while (sorted != 1)
	{
		for (a = 0, b = 1; a < size - 1; a++, b++)
		{
			if (array[a] > array[b])
				break;
		}
		if (a == size - 1)
			sorted = 1;
		for (a = 0, b = 1; a < size - 1; a++, b++)
			if (array[a] > array[b])
			{
				lesser = array[b];
				array[b] = array[a];
				array[a] = lesser;

				print_array(array, size);
			}
	}
}
