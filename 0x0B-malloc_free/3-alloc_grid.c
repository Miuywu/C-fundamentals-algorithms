#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * Return: copy of the string given as a parameter
 * @width: input
 * @height: input
 */
int **alloc_grid(int width, int height)
{
	int **array; /*pointer to 2d array*/
	int a,b,c;/*loopers*/

	/*checks for valid width and height*/
	if (width < 1 || height < 1)
		return (NULL);

	/*mem alloc*/
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++) 
	{
		array[a] = (int *)malloc(width * sizeof(int));
		if (array[a] == NULL)/*if malloc fails frees all mallocs*/
		{ 
			for (; a > 0;a--)
			{  
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
	}
	
	/*sets all values in 2d array to 0*/
	for (b = 0; b < height; b++)
		for (c = 0; c < width; c++)
			array[b][c] = 0;
	return (array);
}
