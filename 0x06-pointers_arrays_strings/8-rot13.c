#include "holberton.h"

/**
 * *rot13 - rots all chars by 13
 *
 * Return: str rotted
 * @c: str 1
 *
 */
char *rot13(char *c)
{
	char *a = c;
	int b;
	char v[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char l[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	while (*a != '\0')
	{
		for (b = 0; v[b] != '\0'; b++)
		{
			if (v[b] == *a)
				*a = l[b];
			else if (l[b] == *a)
				*a = v[b];
		}
		a++;
	}
	return (c);
}
