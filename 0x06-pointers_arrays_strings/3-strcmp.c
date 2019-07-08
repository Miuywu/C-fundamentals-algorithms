#include "holberton.h"

/**
 * _strcmp - takes in 2 strs and compares
 *
 * Return: difference of non-matching char's ascii val
 * @s1: str 1
 * @s2: str 2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int s2Len = 0;
	int s1Len = 0;
	int shorter = 0;
	int index = 0;

	while (*s1 != 0)
	{
		s1++;
		s1Len++;
	}
	s1 -= s1Len;
	s1Len--;
	while (*s2 != 0)
	{
		s2++;
		s2Len++;
	}
	s2 -= s2Len;
	s2Len--;
	if (s2Len >= s1Len)
		shorter = s1Len;
	else
		shorter = s2Len;

	while (index <= shorter)
	{
		if (*(s1 + index) != *(s2 + index))
			return (*(s1 + index) - *(s2 + index));
		index++;
	}
	return (0);
}
