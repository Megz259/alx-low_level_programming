#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads and prints a text file
 * @letters: number of letters to read and print
 * @filename: file to be read
 *
 * Return: number of letters
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b;
	ssize_t d;
	char *c;

	c = malloc(sizeof(char) * letters);

	a = open(filename, O_RDONLY);

	d = read(a, c, letters);

	b = write(STDOUT_FILENO, c, d);

	close(a);
	free(c);
	return (b);
}
