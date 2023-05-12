#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: pointer to a string to write the file to
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int c = 0;

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	b = write(a, text_content, c);

	if (a == -1)
		return (-1);
	if (b == -1)
		return (-1);
	close(a);
	return (1);
}
