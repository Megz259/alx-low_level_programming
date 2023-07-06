#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit = 0;
	unsigned long int b;

	for (i = 63; i >= 0; i--)
	{
		b = (n ^ m) >> i;
		if (b & 1)
			bit++;
	}
	return (bit);
}
