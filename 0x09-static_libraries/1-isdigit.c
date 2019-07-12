#include "holberton.h"


/**
 * _isdigit - checks for digit 0-9
 *
 * Return: 1 if c is 0-9, 0 otherwise
 * @c: input
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
