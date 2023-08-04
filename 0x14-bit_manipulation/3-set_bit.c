#include "main.h"
/**
 * set_bit - function to set the value of a bit
 * to 1 at any given index
 * @n: decimal number
 * @index: position of the bit
 * Return: 1 on succcuess and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | 1ul << index;
        return (1);
	
	if (index > 63)
		return (-1);
}
