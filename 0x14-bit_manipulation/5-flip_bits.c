#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - indicates the number of bits needed
 * to flip to get one number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits required for change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j = 0;
	unsigned long int k;
	unsigned long int l;

	l = n ^ m;

	for (i = 64; i >= 0; i--)
	{
		k = l >> i;
		if (k & 1)
			return (j);
	}
	return (j);
}
