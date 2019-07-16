#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 *
 * Return: copy of the string given as a parameter
 * @s1: input
 * @s2: input
 */
char *str_concat(char *s1, char *s2)
{
	char *array; /*pointer to copy of str */
	int strSize = 0; /*holds len of str*/
	int a, b;

	/* finds len of s1 + s2*/
	for (a = 0; s1[a] != '\0'; a++)
		strSize++;
	for (a = 0; s2[a] != '\0'; a++)
		strSize++;
	/*alloc mem @ array for s1, s2, \0*/
	array = malloc(strSize + 1 * sizeof(char));
	/* checks if malloc was successful*/
	if (array == NULL)
		return (NULL);
	/*copies s1 and s2 into array then add \0*/
	for (a = 0; s1[a] != '\0'; a++)
		array[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
		array[a + b] = s2[b];
	array[a + b] = '\0';
	return (array);
}
