#include "main.h"
#include <limits.h>
#include <unistd.h>

/**
 * print_binary - function to transform anumber  to
 * it's binary form
 * @n: The decimal number to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int check = 1ul << 63;
	char k = '0';

	while (!(check & n) && check != 0)
		check = check >> 1;

	if (check == 0)
		write(1, &k, 1);

	while (check)
	{
		if (check & n)
			k = '1';
		else
			k = '0';
		write(1, &k, 1);
		check = check >> 1;
	}
}
