#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a given bit
 * @index: index
 * @n: pointer to bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0;

	if (index > 64)
		return (-1);

	*n = ((i << index) | *n);
	return (1);
}
