#include "main.h"

/**
 * print_line - function to print line
 * @n : integer value
 * Return: void
 */
void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
