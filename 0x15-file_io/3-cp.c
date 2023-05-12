#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * close_file - file that can't be closed
 * @fd: file descriptor
 *
 * Return: 0 on success
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
}
/**
 * create_buff - create a buffer
 * @txtfile: text file
 *
 * Return: pointer to the new buffer
 */
char *create_buff(char *txtfile)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, " Error: Can't write to NAME_OF_THE_FILE %s\n",
				txtfile);
		exit(99);
	}
	return (buff);
}

/**
 * main - copy contents of a file to another file
 * @argc: argument count
 * @argv: array of pointers to array of character object
 * close_file - file to be closed
 *
 * Return: 0 on success
 * Number of argumens counted is incorrect - exit code 97
 * file_from does not exsist - exit code 98
 * file_from can't be read - exit code 98
 * file_to can't be created - exit code 99
 * file_to can't be written to - exit code 99
 * file descriptor can't be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int c, file_from, file_to;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	c = read(file_from, buff, 1024);

	do {
		if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n",
				argv[2]);
		exit(99);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0064);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n",
				argv[1]);
		exit(98);
	}

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n",
				argv[1]);
		exit(98);
	}
	} while (c > 0);

	file_to = open(argv[2], O_WRONLY | O_APPEND);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
