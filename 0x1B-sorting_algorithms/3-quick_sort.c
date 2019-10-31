#include "sort.h"
void recurser(int *arr, size_t s, int start, int end);
int lomuto(int *arr, size_t s, int start, int end);
/**
 * quick_sort - quick sort implementation
 * @array: array of ints to be sorted
 * @size: length of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int start = 0, end = size - 1;

	if (!array || !*array || size < 2)
		return;
	recurser(array, size, start, end);
}
/**
 * recurser - recursively calls to the lomuto partitioner
 * @arr: array of ints to be sorted
 * @s: length of array
 * @start: starting index of array
 * @end: ending index of array
 * Return: void
 */
void recurser(int *arr, size_t s, int start, int end)
{
	int imouto_arr;

	if (start < end)
	{
		imouto_arr = lomuto(arr, s, start,  end);
		recurser(arr, s, start, imouto_arr - 1);
		recurser(arr, s, imouto_arr + 1, end);
	}
}
/**
 * lomuto - splits array into one array of < pivot and the other > pivot
 * @arr: array of ints to be sorted
 * @s: length of array
 * @start: starting index of array
 * @end: ending index of array
 * Return: new sort starting point
 */
int lomuto(int *arr, size_t s, int start, int end)
{
	int a, b;

	for (b = start, a = start - 1; b <= end - 1; b++)
		if (arr[b] < arr[end])
		{
			a++;
			if (arr[a] == arr[b])
				continue;
			arr[a] = arr[a] + arr[b];
			arr[b] = arr[a] - arr[b];
			arr[a] = arr[a] - arr[b];

			print_array(arr, s);
		}
	if (arr[end] < arr[a + 1])
	{
		arr[a + 1] = arr[a + 1] + arr[end];
		arr[end] = arr[a + 1] - arr[end];
		arr[a + 1] = arr[a + 1] - arr[end];

		print_array(arr, s);
	}
	return (a + 1);
}
