#include "holberton.h"

/**
 * *_strncat - concat 2 strs
 *
 * Return: null
 * @src: input
 * @dest: out
 * @n: count
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] >= 32 && dest[a] <= 126)
		a++;
	for (b = 0; b < n && *(src + b) != '\0'; b++)
		*(dest + a + b) = *(src + b);
	return (dest);
}
