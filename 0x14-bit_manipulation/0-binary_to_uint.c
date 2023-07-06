#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: points to a string
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string, or 0 if
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int number;
	unsigned int dec_value = 0;
	int base = 1;

	if (!(b))
		return (0);

	for (number = 0; b[number]; number++)
	{

	if (b[number] < '0')
		return (0);

	if (b[number] > '1')
		return (0);
	dec_value = (base * 2) * dec_value + (b[number] - '0');
	}
	return (dec_value);
}
