#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n elemnts of an array of integer
 *
 * @a: Pointer variable 
 * @n: number of integres in the array
 * Return: void 
 */
void print_array(int *a, int n)
{	
	int i; 

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
	
		if (i != (n - 1))
		{
	
			printf(",");

		}	
	}

	printf("\n");
}	
