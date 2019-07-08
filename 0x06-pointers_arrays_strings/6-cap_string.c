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
		while (*b >= '0' && *b <= '9')
		{
			b++;
		}
		if (!(*(b - 1) >= '0' && *(b - 1) <= '9') &&
		    (*b >= 'a' && *b <= 'z') && *(b - 1) != '-')
			*b -= 32;
		while (*b >= 'a' && *b <= 'z')
			b++;
		while ((*b >= 'a' && *b <= 'z') || (*b >= 'A' && *b <= 'Z'))
			b++;
		b++;
	}
	return (c);
}
