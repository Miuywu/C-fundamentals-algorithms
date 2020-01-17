#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: sorted array of integers
 * @size: length of array
 * @value: target value
 * Return: index of target value or -1 if fails
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (!array)
		return (-1);
	while ((array[high] != array[low]) &&
	       (value >= array[low]) && (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low)
			     / (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid,
		       array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	printf("Value checked array[%d] is out of range\n", mid);
	return (-1);
}
