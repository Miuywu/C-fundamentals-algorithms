#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints lowercase alphabet then uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;
	char uletter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}

	for (uletter = 'A'; uletter <= 'Z'; uletter++)
	{
		putchar (uletter);
	}
	putchar ('\n');

	return (0);
}
