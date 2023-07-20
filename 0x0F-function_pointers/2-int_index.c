#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of type int
 * @size: size of array
 * @cmp: function with argument int and no return
 *
 * Return: No element matches -1, if size <=0 -1
 * else index of first element cmp func does not rtrn 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp && size > 0)
		for (n = 0; n < size; n++)
			if (cmp(array[n]))
				return (n);

	return (-1);
}
