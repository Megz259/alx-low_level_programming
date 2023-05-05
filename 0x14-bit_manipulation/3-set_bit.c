#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the values of a given bit to 1
 * @index: index
 * @n: pointer to the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);

	*n = ((i << index) | *n);
	return (1);
}
