#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph;
	int Alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (Alph = 'A'; Alph <= 'Z'; Alph++)
	{
		putchar(Alph);
	}
	putchar('\n');
	return (0);
}
