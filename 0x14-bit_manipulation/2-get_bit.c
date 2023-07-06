#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index of bit
 *
 * Return: the value of the bit at index index,
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (n > 63)
		return (-1);
	bit_value = 1 & (n >> index);
	return (bit_value);
}
