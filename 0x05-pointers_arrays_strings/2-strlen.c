#include "main.h"

/**
 *_strlen - function to return length of  a string
 *@*s: string to be evaluated for lenght
 *@s: string length
 *@j: calculated length of the string
 *Retrun: length of the string
 *
 */
int _strlen(char *s)
{
	int j = 0;

	for (; *s != '\0'; s++)
	{
		j++;
	}

	return (j);
}

