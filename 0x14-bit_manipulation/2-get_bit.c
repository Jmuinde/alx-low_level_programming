#include "main.h"

/**
 * get_bit - function to return the value
 * of a bit at a given index
 * @n: decimal number
 * @index: position of the bit
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	return ((n & x) > 0);
}

