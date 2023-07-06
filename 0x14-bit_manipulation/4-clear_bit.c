#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a number
 * @index: indes to the bit
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & (~(1UL << index)));
	return (1);
}
