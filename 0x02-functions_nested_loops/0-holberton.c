/* #include <unistd.h> */
#include "holberton.h"
#include "_putchar.c"

/**
 * main - putchar Holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str1[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int n;

	for (n = 0; n < 9; n++)
		_putchar (str1[n]);
	_putchar ('\n');
	return (0);
}
