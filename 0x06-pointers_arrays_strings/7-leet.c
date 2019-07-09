#include "holberton.h"

/**
 * *leet - translates input msg to l33t code
 *
 * Return: pointer to str c
 * @c: input
 */
char *leet(char *c)
{
	char *a = c;
	int b;
	char v[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	while (*a != '\0')
	{
		for (b = 0; v[b] != '\0'; b++)
			if (v[b] == *a)
				*a = l[b];
		a++;
	}
	return (c);
}
