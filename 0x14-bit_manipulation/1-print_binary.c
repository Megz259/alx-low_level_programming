#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary
 *
 * Return: number in binary
 */

void print_binary(unsigned long int n)
{
	int a;
	unsigned long int b;

	for (a = 63; a >= 0; a--)
	{
		if ((n >> a) & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!(b))
		_putchar('0');
}
