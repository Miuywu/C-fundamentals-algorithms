#include "holberton.h"

/**
 * *_strncpy - copy input
 *
 * Return: null
 * @src: input
 * @dest: out
 * @n: size of str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int srcLen = 0;

	while (*src != 0)
	{
		src++;
		srcLen++;
	}
	src -= srcLen;
	srcLen--;
	while (index < n)
	{
		if (index <= srcLen)
			*(dest + index) = *(src + index);
		else
			*(dest + index) = '\0';
		index++;
	}
	return (dest);
}
