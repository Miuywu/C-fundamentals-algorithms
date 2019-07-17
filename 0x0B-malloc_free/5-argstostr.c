#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * Return: copy of the string given as a parameter
 * @ac: input
 * @av: input
 */
char *argstostr(int ac, char **av)
{
	char *array; /*pointer to 2d array*/
	int a, b, c;/*loopers*/

	/*input checks*/
	if (ac == 0 || av == NULL)
		return (NULL);

	/*size counter*/
	c = 0;
	for (a = 0; a < ac; a++)
	{
		/*create space for each char of each arg*/
		for (b = 0; av[a][b] != '\0'; b++)
			c++;
		c++; /*create space for \n*/
	}

	/*malloc*/
	array = malloc(c * (sizeof(char *)));

	/*malloc check*/
	if (array == NULL)
		return (NULL);

	/*copies av into 1d array*/
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			array[c] = av[a][b];
		array[c] = '\n';
		c++;
	}
	return (array);
}
