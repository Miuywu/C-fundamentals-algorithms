#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 1 if c is upper, 0 otherwise
 * @argc: input
 * @argv: inout
 */
int main(int argc, char *argv[])
{
	int a;
	int b = 0;

	for (a = 1; a < argc; a++)
	{
		b += atoi(argv[a]);
		if (sizeof(atoi(argv[a])) != 4)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", b);
	return (0);
}
