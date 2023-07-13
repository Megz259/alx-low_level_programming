#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>

/**
 * read_textfile - read a text file to print to standard out
 * @filename: name of the file
 * @letters: letters to be read
 * Return: actual number of bytes read and printed, else
 * return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buff;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	c = read(a, buff, letters);
	b = write(STDOUT_FILENO, buff, c);

	free(buff);
	close(a);
	return (b);
}
