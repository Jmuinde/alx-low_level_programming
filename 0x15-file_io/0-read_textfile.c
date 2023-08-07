#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile -  A function that  read context of a text file and prints it
 * results to the POSIX standard output
 * @filename: ponter character to the file
 * @letters: count of letters to be read and printed
 * Return: the acctual number of letters that have been read and printed,0 in cases
 * where the  does mot opene or read.0 when there  filename is null. 0 if
 * write call fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	char *pt;
	int count;
	int out;
	
	if (filename == NULL)
		return (0);

	pt = malloc(letters + 1);

	if (pt == NULL)
		return (0);

	ptr  = open(filename, O_RDONLY);

	if (ptr == -1)
		return (free(pt), 0);

	count = read(ptr, pt, letters);

	if (count == -1)
		return (free(pt), 0);

	pt[letters] = '\0';

	out = write(STDOUT_FILENO, pt, count);
	if (out == -1)
		return (free(pt), 0);

	free(pt);
	close(ptr);
	return (out);
}
