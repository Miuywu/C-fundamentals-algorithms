#include "holberton.h"
#include <stdlib.h>
/**
 * *_strchr - locates char c in char array s
 *
 * Return: pointer to char
 * @s: input
 * @c: out
 */
char *_strchr(char *s, char c)
{
	int a;
	for (a = 0; s[a] != '\0'; a++, s++)
		if (s[a] == c)
			return (s);
	if (*s == c)
		return (s);
	else
		return (NULL);
}
