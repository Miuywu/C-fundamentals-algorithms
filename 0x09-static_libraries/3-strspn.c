#include "holberton.h"

/**
 * _strspn - counts how many times char from accept is used in s before not
 *
 * Return: count
 * @s: input
 * @accept: out
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *a = accept;
	int b;

	while ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
	{
		for (b = 0; a[b] != '\0'; b++)
			if (a[b] == *s)
				c++;
		s++;
	}
	return (c);
}
