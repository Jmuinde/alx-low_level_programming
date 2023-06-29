#include "main.h"

/**
 * *string_toupper - functions to change lowers case letters in a string to upper case
 * @c: the string to be converted 
 * return: void
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
