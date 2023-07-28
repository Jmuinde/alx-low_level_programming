#include "main.h"

/**
 * wildcmp - function to compare two strings
 * and checks whtehter they are identical or not
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Return: 1 is returned on success
 * If otherwise, -1 is returned
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
