#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char rev;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
