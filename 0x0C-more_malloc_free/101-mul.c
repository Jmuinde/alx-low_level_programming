#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _iftypenum - a fucction to check whether the entry is a number
 *
 * @str: string variable
 *
 * Return: return 1 on success and 0 if otherwise
 */
int _iftypenum(char *str)
{
	int x;
	int inspect = 1;
	int k = 0;

	for (x = 0; *(str + x) != 0; x++)
	{
		k = isdigit(*(str + x));
		if (k == 0)
		{
			inspect = 0;
			break;
		}
	}
	return (inspect);
}

/**
 * _setmem - function to set the memeory to zero to avoid garbage
 *
 * @y: size of bytes allocated
 *
 * Return: address pointer
 */
char *_setmem(unsigned int y)
{
	unsigned int n;
	char *stri;

	stri = malloc(y + 1);
	if (stri == 0)
		return (0);
	for (n = 0; n < y; n++)
		stri[n] = '0';
	stri[n] = '\0';
	return (stri);
}

/**
 * main - function to get the multiplication of two numbures
 *
 * @argc: variable declaration
 * @argv: cmd line args
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int x;
	int y;
	int z1;
	int z2;
	int sm;
	int prod;
	int sn;
	int v = 0;
	int r = 0;
	int sv;
	int non = 0;
	char *rem;

	if (argc != 3 || _iftypenum(argv[1]) == 0 || _iftypenum(argv[2]) == 0)
		printf("Error\n"), exit(98);
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
		printf("0\n"), exit(0);
	z1 = strlen(argv[1]), z2 = strlen(argv[2]);
	sm = z1 + z2;
	rem = _setmem(sm);
	if (rem == 0)
		printf("Error\n"), exit(98);
	for (x = z2 - 1; x >= 0; x--)
	{
		for (y = z1 - 1; y >= 0; y--)
		{
			sv = x + y + 1;
			prod = (argv[1][y] - '0') * (argv[2][x] - '0') + v;
			v =  prod / 10;
			sn = (rem[sv] - '0') + (prod % 10) + r;
			r = sn / 10;
			rem[sv] = (sn % 10) + '0';
		}
		rem[sv - 1] = (v + r) + '0';
	}
	if (rem[0] == '0')
		non = 1;
	for (; non < sm; non++)
		printf("%c", rem[non]);
	printf("\n");
	free(rem);
	return (0);
}
