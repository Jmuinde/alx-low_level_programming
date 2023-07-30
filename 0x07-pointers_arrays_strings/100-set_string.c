#include "main.h"
#include <stdio.h>

/**
 * set_string - a function to set the value of a pointer
 * to char
 * @s: a pointer to a pointer
 * @to: a pointer variable
 * Return: 1 if successful and -1 if otherwise
 */
void set_string(char **s, char *to)
{
	*s = to;
}
