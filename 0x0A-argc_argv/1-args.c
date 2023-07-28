#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: the parameters
 * @argv: pointer array
 * Return: upon excesion return 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
	}
	printf("%d\n", n - 1);
	return (0);
}
