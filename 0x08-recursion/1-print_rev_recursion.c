#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: 1 for succesful execuation -1 otherwise
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
