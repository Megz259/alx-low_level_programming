#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to print in binary
 *
 * Return: number in binary code
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int j;
	int k = 0;
	int l = 1;

	for (j = 63; j >= 0; j--)
	{
		i = n >> j;

		if (i & l)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
