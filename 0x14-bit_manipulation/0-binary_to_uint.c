#include "main.h"

/**
 * binary_to_uint - function to convert binary number
 * to unsinged integer
 * @b: constant pinter variable
 * Return: converted integer or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 0;
	int pos = 1;
	int k = 0;

	if (b == 0)
		return (0);

	while (b[k + 1])
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		k++;
	}

	while (k >= 0)
	{
		pow += ((b[k] - '0') * pos);
		pos *= 2;
		k--;
	}

	return (pow);
}
