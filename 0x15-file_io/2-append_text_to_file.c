#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - a function that appends texts to
 * the end of the file
 *
 * @filename: pointer variable to file name
 * @text_content: pointer variable
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int pt;
	int count;
	int n = 0;

	if (filename == NULL)
		return (-1);

	pt = open(filename, O_WRONLY | O_APPEND);

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
