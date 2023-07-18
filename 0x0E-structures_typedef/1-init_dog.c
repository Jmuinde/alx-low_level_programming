#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the function to call
 * @d: Dog
 * @name: Dog name
 * @age: dog age
 * @owner: Dog owner
 *
 * Return: On success 1 and -1 otherwise.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
