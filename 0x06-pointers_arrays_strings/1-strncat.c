# include "main.h"

/**
 * *_strncat - The concantinating function
 * @dest: string to be concantinated
 * @src: string to be concantinated
 * @n: number of times
 * return: resulting string
 */
char *_strncat(char *dest, char *src, int n)
{	
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
