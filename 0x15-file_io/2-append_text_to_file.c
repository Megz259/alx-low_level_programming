#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>

/**
 * append_text_to_file - append text in a file
 * @filename: pointer to the name of a file
 * @text_content: pointer to the content of a file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	b = open(filename, O_WRONLY | O_APPEND);
	c = write(b, text_content, a);

	if (b == -1)
		return (-1);
	if (c == -1)
		return (-1);

	close(b);
	return (1);
}
