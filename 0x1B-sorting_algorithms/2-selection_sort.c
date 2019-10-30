#include "sort.h"
/**
 * selection_sort - creates a new subarray, ascending values
 * @array: values to be sorted
 * @size: length of list
 */
void selection_sort(int *array, size_t size)
{
	int min, sorted = 0;
	unsigned int toset, unsortS, mindex, a, b;

	if (!array || !*array || size < 2)
		sorted = -1;
	for (toset = 0; sorted != 1 && toset < size; toset++)
	{
		for (a = 0, b = 1; a < size - 1; a++, b++)
		{
			if (array[a] > array[b])
				break;
		}
		if (a == size - 1)
			sorted = 1;
		min = array[toset];
		for (unsortS = toset; unsortS < size; unsortS++)
			if (array[unsortS] < min)
			{
				min = array[unsortS];
				mindex = unsortS;
			}
		if (min == array[toset])
			continue;
		array[mindex] = array[toset];
		array[toset] = min;

		print_array(array, size);
	}
}
