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
	int b2;
	char v[] = "abcdefghijklm";
	char l[] = "nopqrstuvwxyz";
	char v2[] = "ABCDEFGHIJKLM";
	char l2[] = "NOPQRSTUVWXYZ";

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
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
		else if (*a >= 'A' && *a <= 'Z')
		{
		for (b2 = 0; v2[b2] != '\0'; b2++)
		{
			if (v2[b2] == *a)
				*a = l2[b2];
			else if (l2[b2] == *a)
				*a = v2[b2];
		}
		a++;
		}
	}
	return (c);
}
