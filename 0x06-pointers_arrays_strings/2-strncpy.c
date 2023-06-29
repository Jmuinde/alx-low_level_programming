#include "main.h"

/**
 * *_strncpy - function to copy strings
 * @*dest: string
 * @*src: string
 * @n: number of characters to copy
 * Return: the string 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
