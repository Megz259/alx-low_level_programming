#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;
	j = 0;
	
	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0')
			return (0);
		if (b[i] > '1')
			return (0);
		j = (b[i] - '0') + 2 * j;
	}
	return (j);
}
