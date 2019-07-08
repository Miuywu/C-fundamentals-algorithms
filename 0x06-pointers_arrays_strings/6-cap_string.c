#include "holberton.h"

/**
 * *cap_string - capitalizes first letter of every word in str
 *
 * Return: null
 * @c: input
 */
char *cap_string(char *c)
{
	char *b = c;

	while (*b != '\0')
	{
		while ((*b >= 'A' && *b <= 'Z')||(*b >= 'a' && *b <= 'z'))
			b++;
		while (!((*b >= 'A' && *b <= 'Z')||(*b >= 'a' && *b <= 'z')))
			b++;
		if (*b >= 'a' && *b <= 'z')
			*b -= 32;
		b++;
	}
	return (c);
}
