#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: 0 if the endian is big and  1 if the endian is 
 * little
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x) + '0');
}
