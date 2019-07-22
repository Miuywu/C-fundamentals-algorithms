#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - my first struct
 * @name: n
 * @age: a
 * @owner: o
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
/*void print_dog(struct dog *d);*/
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

#endif
