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
	int number = 0;
	unsigned int dec_value = 0;
	int base = 1;

	int temp = number;

	for (temp = 0; b[temp]; temp++)
	{

	while (temp)
	{
		int c = temp % 10;

		temp = temp / 10;
		dec_value = (base * 2) * dec_value + (b[c] - '0');
	}
	}
	return (dec_value);
}
