#include "main.h"

/**
 * swap_int - function to swap two numbers
 *
 * @a - integer to be swiped
 * @b - integer to be swiped
 * Return: 1 on succes and -1 otherwise
 */

void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
	int swa;

	swa = *a;
	*a = *b;
	*b = swa;
}


