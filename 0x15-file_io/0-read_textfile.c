#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads textfile and print to standard output
 * @filename: text file to be read
 * @letters: the number of letters to read
 * Return: the number of bytes read and printed otherwise 0
 *	when it fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f, w, t;

	f = open(filename, O_RDONLY);
	if (f == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(f);
	return (w);
}
