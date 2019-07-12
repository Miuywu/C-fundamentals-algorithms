#include "holberton.h"


/**
 * _isupper - checks for uppercase char
 *
 * Return: 1 if c is upper, 0 otherwise
 * @c: input
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
