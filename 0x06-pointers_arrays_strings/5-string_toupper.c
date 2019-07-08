#include "holberton.h"

/**
 * *string_toupper - changes all lowercase chars of input to upper
 *
 * Return: null
 * @c: input
 */
char *string_toupper(char *c)
{
	char *b = c;

	while (*b != '\n')
	{
		if (*b >= 97 && *b <= 122)
			*b -= 32;
		b++;
	}
	return (c);
}
