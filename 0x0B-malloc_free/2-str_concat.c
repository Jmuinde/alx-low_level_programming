#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *ptr;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	ptr = malloc(sizeof(char) * (l1 + l2 + 1));

	if (ptr == 0)
		return (0);

	for (i = 0; i < l1; i++)
		*(ptr + i) = *(s1 + i);

	for (i = 0, j = l1; i <= l2; j++, i++)
		*(ptr + j) = *(s2 + i);

	return (ptr);
}
