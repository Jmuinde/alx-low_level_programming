#include <stdio.h>
#include <stdlib.h>

/**
 * main -  the main funcion
 *
 * @argc: checks the number of arguments
 * @argv: pointer variable
 * Return: 0 when succesful
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
