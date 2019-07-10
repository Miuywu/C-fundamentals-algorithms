#include "holberton.h"

/**
 * *_strstr - finds first address of matching
 *
 * Return: count
 * @haystack: out
 * @needle: in
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	char *h = haystack;
	char *n = needle;

	for (a = 0; *(h + a) != '\0'; a++)
	{
		for (b = 0; *(n + b) != '\0'; b++)
		{
			if (*(h + a) == *(n + b))
				return (&h[a]);
		}
	} 
	return (0);
} 
