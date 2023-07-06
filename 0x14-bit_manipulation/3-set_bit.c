#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index: index of a bit
 *
 * Return: On success 1, on error -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1UL << index));
	return (1);
}
