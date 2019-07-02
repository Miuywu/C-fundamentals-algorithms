#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - prints n elements of an array
 *
 * Return: null
 * @src: array
 * @dest: array size
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (src[c] != '\0')
	{
		c++;
	}

	while (d <= c)
	{
		dest[d] = src[d];
		d++;
	}
	return (dest);
}
