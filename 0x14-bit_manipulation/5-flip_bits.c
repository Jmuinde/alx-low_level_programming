#include "main.h"

/**
 * flip_bits - a function that gives  number of bits to be flipped
 * in order to ge to the number
 * @n: decimal number
 * @m: decimal number
 *
 * Return: no of bits to be flipped
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int no_times = 0;

	x = n ^ m;

	while (x != 0)
	{
		no_times += x & 1;
		x = x >> 1;
	}

	return (no_times);
}

