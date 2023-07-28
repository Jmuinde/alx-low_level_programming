#include <stdlib.h>
#include <stdio.h>

void print(void)__attribute__((constructor));

/**
 * print - prints  text entered by the user
 *
 * Return: Nothing
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
