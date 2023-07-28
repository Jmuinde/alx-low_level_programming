#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in the string
 * @s: The string to be evaluated
 *
 * Return: total count of the number of words
 */
int count_word(char *s)
{
	int sta;
	int n;
	int x;

	sta = 0;
	x = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
			sta = 0;
		else if (sta == 0)
		{
			sta = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - function to split string into words
 * @str: the string to be splinted
 *
 * Return: string pointer that is an array
 * if otherwise return nothing.
 */
char **strtow(char *str)
{
	char **split, *ptr;
	int j;
	int x = 0;
	int size = 0;
	int words;
	int n = 0;
	int first;
	int last;

	while (*(str + size))
		size++;
	words = count_word(str);
	if (words == 0)
		return (0);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split == 0)
		return (0);
	for (j = 0; j <= size; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (n)
			{
				last = j;
				ptr = (char *) malloc(sizeof(char) * (n + 1));
				if (ptr == 0)
					return (0);
				while (first < last)
					*ptr++ = str[first++];
				*ptr = '\0';
				split[x] = ptr - n;
				x++;
				n = 0;
			}
		}
		else if (n++ == 0)
			first = j;
	}
	split[x] = 0;
	return (split);
}
