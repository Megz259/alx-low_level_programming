#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;

	else if (flag == 0)
	{
		flag = 1;
		b++;
	}
	}

	return (b);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * NULL (error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - d;
				j++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = i;
	}
	matrix[j] = NULL;

	return (matrix);
}
