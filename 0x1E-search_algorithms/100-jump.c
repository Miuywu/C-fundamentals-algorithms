#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: array of ascended sorted ints
 * @size: length of array
 * @value: target of search
 * Return: first index of the target value or -1 if fails
 */
int jump_search(int *array, size_t size, int value)
{
	int a, sint, root, b;

	if (!array)
		return (-1);
	sint = (int)size;
	root = (int)sqrt(sint);
	for (a = 0; a <= sint; a += root)
	{
		if (array[a] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       a - root, a);
			for (b = a - root; b <= a; b++)
			{
				printf("Value checked array[%d] = [%d]\n",
				       b, array[b]);
				if (array[b] == value)
					return (b);
				if (b == a)
					return (-1);
			}
		}
		else if (array[a] < value)
			printf("Value checked array[%d] = [%d]\n",
			       a, array[a]);
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       a - root, a);
	return (-1);
}
