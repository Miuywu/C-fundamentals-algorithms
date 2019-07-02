#include "holberton.h"

/**
 * rev_string - reverses input str
 *
 * Return: null
 * @s: input
 */
void rev_string(char *s)
{
	char c;
	char *ps = s;

	while (*s != '\0')
	{
		s++;
	}
	ps--;

	while (ps <= s)
	{
		c = *ps;
		*ps = *s;
		*s = c;
		ps++;
		s--;
	}
}
