#include "main.h"

/**
 * reverse_array - function to reverse content of array of intergers
 * @a: array of intergers
 * @n: number of elements to be swaped
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
