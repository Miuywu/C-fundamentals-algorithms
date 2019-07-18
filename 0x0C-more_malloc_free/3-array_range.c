#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 *
 * Return: pointer to ncat in allocated memory
 * @min: input
 * @max: inout
 *
 */
int *array_range(int min, int max)
{
	int *p;/*store malloc output*/
	int a, b;/*loopers*/

	/*input check*/
	if (min > max)
		return (NULL);
	/*len of final str*/
	for (a = min; a <= max; a++)
		;
	/*malloc*/
	p = malloc(a * sizeof(int));

	/*malloc check*/
	if (p == NULL)
		return (NULL);
	/*init arr*/
	for (b = 0; p[b] <= max; b++, min++)
		p[b] = min;
	return (p);
}
