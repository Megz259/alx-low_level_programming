#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: pointer to the string to add at the end of a file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	a = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	b = write(a, text_content, c);

	if (a == -1)
		return (-1);

	if (b == -1)
		return (-1);

	close(a);
	return (1);
}
