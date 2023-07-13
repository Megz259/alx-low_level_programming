#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>

/**
 * create_buffer - creates a buffer
 * @file: name of buffer of a file
 *
 * Return: A pointer to a new buffer
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - close file descriptor
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy the contents of one file to another
 * @argv: array of pointers in an argument
 * @argc: number of arguments
 *
 * Return: 0 on success, else
 * if the number of argument is not the correct one, exit with code 97
 * if file_from does not exist, or if you can not read it, exit with code 98
 * if you can not create or if write to file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int b, c, d, e;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	b = open(argv[1], O_RDONLY);
	d = read(b, buff, 1024);
	c = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (b == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98); }

	if (d == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98); }

	e = write(c, buff, d);

	if (e == -1 || c == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99); }

	d = read(b, buff, 1024);
	c = open(argv[2], O_WRONLY | O_APPEND);
	} while (d > 0);
	free(buff);
	close_file(b);
	close_file(c);

	return (0);
}
