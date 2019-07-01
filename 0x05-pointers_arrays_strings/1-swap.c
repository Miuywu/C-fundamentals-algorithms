#include "holberton.h"

/**
 * swap_int - swaps *a and *b
 *
 * Return: null
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int sa = *a;
	int sb = *b;

	*a = sb;
	*b = sa;
}
