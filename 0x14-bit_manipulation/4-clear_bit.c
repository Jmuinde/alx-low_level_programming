#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0
 * at any given index
 * @n: pointer variable
 * @index: position to the value
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}

