#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 *
 * Return: pointer to ncat in allocated memory
 * @s1: input
 * @s2: inout
 * @n: in
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;/*store malloc output*/
	unsigned int a, b;/*loopers*/

	/*len of final str*/
	for (a = 0; s1[a]; a++)
		;
	a += n;
	a++;/* \0 */
	/*malloc*/
	p = malloc(a * sizeof(char));

	/*malloc check*/
	if (p == NULL)
		return (NULL);
	/*changes null to empty str*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*copies s1 & s2 into p*/
	for (a = 0; s1[a]; a++)
		p[a] = s1[a];
	for (b = 0; s2[b] && b < n; b++)
		p[a + b] = s2[b];

	/*append \0*/
	p[a + b] = '\0';
	return (p);
}
