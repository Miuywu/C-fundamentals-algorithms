#include "holberton.h"

/**
 * _strlen - returns length of str
 *
 * Return: length of str
 * @s: input
 */
int _strlen(char *s)
{
	int size = 0;

	for (; *s != '\0'; s++)
	{
		size++;
	}

	return (size);
}
