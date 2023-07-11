#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size <= 0)
		return (0);

	ptr  = malloc(size * sizeof(char));

	if (ptr == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	*(ptr + i) = '\0';

	return (ptr);
}
