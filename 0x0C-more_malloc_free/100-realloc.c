#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memcpy - function to copy the memory allocated
 * @loc: memory location
 * @org: origin of the memory
 * @x: assinged size of the memeory
 *
 * Return: value of the copied memmory
 */
char *_memcpy(char *loc, char *org, unsigned int x)
{
	unsigned int k;

	for (k = 0; k < x; k++)
		loc[k] = org[k];
	return (loc);
}
/**
 * _realloc -function to reallocate memory dynamically using malloc and free
 * @ptr: pointer variable
 * @old_size: initial size of the allocated memory
 * @new_size: new memroy size after dynamic alllocation
 *
 * Return: Pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
	tmp = malloc(new_size);
		if (tmp == 0)
			return (0);
		free(ptr);
		return (tmp);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	tmp = malloc(new_size);
	if (tmp == 0)
		return (0);

	_memcpy(tmp, ptr, old_size);
	free(ptr);
	return (tmp);
}
