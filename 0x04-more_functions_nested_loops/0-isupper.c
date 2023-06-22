#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *@c - the character to be checked 
 *
 * Return: 1 if the character is uppercase and 0 if it is anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c  <= 90)
	{
		return (1);
	}
	
	return (0);
}
