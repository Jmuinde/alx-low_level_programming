#include "main.h"
#include <stdlib.h>
/**
 * argstostr - the fucntion to main
 * @ac: function argument
 * @av: pointer pointer argument
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j;
	int x;
	int y = 0;
	int k = 0;
	char *tmp;

	if (ac == 0 || av == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		for (x = 0; av[j][x]; x++)
			k++;
	}
	k += ac;

	tmp = malloc(sizeof(char) * k + 1);
	if (tmp == 0)
		return (0);
	for (j = 0; j < ac; j++)
	{
	for (x = 0; av[j][x]; x++)
	{
		tmp[y] = av[j][x];
		y++;
	}
	if (tmp[y] == '\0')
	{
		tmp[y++] = '\n';
	}
	}
	return (tmp);
}
