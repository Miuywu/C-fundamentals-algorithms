#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints 00-89 with some exceptions
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar (i);
			putchar (j);
			if (i != '8' || j != '9')
			{
				putchar (44);
				putchar (32);
			}
		}
	}
	putchar ('\n');
	return (0);
}
