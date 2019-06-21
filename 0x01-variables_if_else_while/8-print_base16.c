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

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar (letter);
	}

	for (uletter = 'a'; uletter <= 'f'; uletter++)
	{
		putchar (uletter);
	}
	putchar ('\n');

	return (0);
}
