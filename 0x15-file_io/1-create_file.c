#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>

/**
 * create_file - file to create
 * @filename: pointer of the file
 * @text_content: pointer of the contents to include in the file
 *
 * Return:on function fails --1, on success -1
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0;
	int b, c;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(b, text_content, a);

	if (b == -1)
		return (-1);
	if (c == -1)
		return (-1);

	close(b);
	return (1);
}
