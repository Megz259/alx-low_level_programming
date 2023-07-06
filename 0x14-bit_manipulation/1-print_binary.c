#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary
 *
 * Return: number in binary
 */

void print_binary(unsigned long int n)
{
	int a, c = 0;
	unsigned long int b;

	for (a = 63; a >= 0; a--)
	{
		c = (n >> a);
		if (c & 1)
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
