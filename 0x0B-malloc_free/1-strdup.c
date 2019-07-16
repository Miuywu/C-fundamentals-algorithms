#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * Return: copy of the string given as a parameter
 * @str: input
 *
 */
char *_strdup(char *str)
{
	char *array; /*pointer to copy of str */
	int strSize; /*holds len of str*/
	int a;

	if (str == NULL)
		return (NULL);
	strSize = 0;
	while (str[strSize] != '\0')/* finds len of str */
		strSize++;
	array = malloc(strSize * sizeof(char));
	/* checks if malloc was successful*/
	if (array == NULL)
		return (NULL);
	for (a = 0; a < strSize; a++)
		array[a] = str[a];
	return (array);
}
