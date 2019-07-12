#include "holberton.h"

/**
 * _strcat - concat 2 strs
 *
 * Return: null
 * @src: input
 * @dest: out
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] >= 32 && dest[a] <= 126)
		a++;
	for (b = 0; *(src + b) != '\0'; b++)
		*(dest + a + b) = *(src + b);
	return (dest);
}
