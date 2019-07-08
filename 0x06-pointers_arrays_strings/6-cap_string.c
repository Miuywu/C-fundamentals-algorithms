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
		if (b == c && *b >= 'a' && *b <= 'z')
			*b -= 32;
		while ((*b >= 'A' && *b <= 'Z') || (*b >= 'a' && *b <= 'z'))
			b++;
		while (*b != '\0' && !((*b >= 65 && *b <= 'Z') || (*b >= 97 && *b <= 122)))
			b++;
		if (*b != '-')
			b++;
		if (*b >= 'a' && *b <= 'z')
		{
			if (*(b - 1) > '9' && *(b - 1) < '0')
				*b -= 32;
		}
		b++;
	}
	return (c);
}
