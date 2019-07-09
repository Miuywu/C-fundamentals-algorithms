#include "holberton.h"

/**
 * *_strchr - locates char c in char array s
 *
 * Return: pointer to char
 * @s: input
 * @c: out
 */
char *_strchr(char *s, char c)
{
	unsigned int a;
 
	for (a = 0; s[a] != '\0'; a++, ++s)
		if (s[a] == c)
			return (s + 1);
	return ('\0');
}
