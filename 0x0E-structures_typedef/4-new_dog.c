#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: n
 * @age: a
 * @owner: o
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int a, nLen, oLen;
	char *n_name;
	char *n_owner;
	 
	/*len count*/
	for (nLen = 0; name[nLen]; nLen++)
		;
	for (oLen = 0; owner[oLen]; oLen++)
		;
	/*input checks*/
	if (name == NULL || owner == NULL)
		return (NULL);
	/*malloc new space*/
	n_dog = malloc(sizeof(dog_t));
	n_name = malloc(nLen + 1);
	n_owner = malloc(oLen + 1);
	/*malloc checks*/
	if (n_dog == NULL)
		return (NULL);
	if (n_name == NULL)
		return (NULL);
	if (n_owner == NULL)
		return (NULL);
	/*copy name and owner into new dog*/
	for (a = 0; name[a]; a++)
		n_name[a] = name[a];
	for (a = 0; owner[a]; a++)
		n_owner[a] = owner[a];
	/*n_dog*/
	(*n_dog).name = n_name;
	(*n_dog).owner = n_owner;
	(*n_dog).age = age;
	return (n_dog);
}
