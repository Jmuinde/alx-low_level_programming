nclude "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that creates a file
 *
 * @filename: pointer to the filename
 * @text_content: a null terminated string to write to the file
 * Return: Returns: 1 is returned on succes and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int pt;
	int count;
	int n = 0;

	if (filename == NULL)
		return (-1);

	pt = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (pt == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[n] != 0)
			n++;
		count = write(pt, text_content, n);

		if (count == -1)
			return (-1);
	}

	close(pt);
	return (1);
}
