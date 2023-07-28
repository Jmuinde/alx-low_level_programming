#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free the memeory of created data structure
 * @d: pointer elem
 *
 * Return: 1 when succesful
 * On error, -1 otherwise.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
