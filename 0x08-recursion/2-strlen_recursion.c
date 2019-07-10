#include "holberton.h"
#include <stdio.h>
/**
 * int _strlen_recursion - returns str len
 * Return: NULL
 * @s: pointer to array of chars
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}
