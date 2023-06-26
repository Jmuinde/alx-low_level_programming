#include "main.h"

/**
 *_strlen - returns length of  a string
 *@*s: string to be evaluated for lenght
 *@s: stringto count
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

