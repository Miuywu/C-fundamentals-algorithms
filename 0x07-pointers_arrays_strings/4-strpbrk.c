#include "holberton.h"

/**
 * *_strpbrk - searches str for any set of bytes
 *
 * Return: count
 * @s: out
 * @accept: in
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *h = s;
	char *n = accept;

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
