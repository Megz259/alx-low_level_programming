#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit of a given index
 * @index: index
 * @n: value of bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 64)
		return (-1);

	i = ((n >> index) & 1);
	return (i);
}
