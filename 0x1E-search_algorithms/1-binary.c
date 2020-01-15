#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array of integers
 * using the binary search algorithm
 * Prints every comparison
 * @array: pointer to array of ints sorted in ascension with no repeated values
 * @size: length of array
 * @value: int to search for
 * Return: first index of value if found or -1 if value not found/array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, counter, temp;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	for (counter = 0; left <= right && counter < size; counter++)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		temp = left;
		while (temp <= right)
		{
			printf("%d", array[temp]);
			if (temp < right)
				printf(", ");
			temp++;
		}
		printf("\n");

		if (array[middle] < value)
		{
			left = middle + 1;
			continue;
		}
		if (array[middle] > value)
		{
			right = middle - 1;
			continue;
		}
		if (array[middle] == value)
			return (middle);
	}
	return (-1);
}
