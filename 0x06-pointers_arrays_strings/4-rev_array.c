#include "holberton.h"

/**
 * reverse_array - reverses int arr
 *
 * Return: null
 * @a: arr of int
 * @n: num of elem
 *
 */
void reverse_array(int *a, int n)
{
	int copy;
	int half = n / 2;
	int index = 0;

	while (index < half)
	{
		copy = *(a + index);
		*(a + index) = *(a + (n - 1));
		*(a + (n - 1)) = copy;
		index++;
		n--;
	}
}
