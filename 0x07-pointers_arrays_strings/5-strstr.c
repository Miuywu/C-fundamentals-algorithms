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
	{
		int a;
		int b;
		int c;
		int needlelen = 0;
		char *h = haystack;
		char *n = needle;

		while (needle[needlelen] != '\0')
			needlelen++;
		if (*n == '\0')
		{
			return (h);
		}
		else
		{
			for (a = 0; *(h + a) != '\0'; a++)
			{
				for (b = 0; *(n + b) != '\0'; b++)
				{ 
					for (c = 0; *(h + a + c) == *(n + b + c); c++)
						;
					if (c == needlelen)
						return (&h[a - 1]);
				}
			} 
			return (0);
		}
	} 
} 
