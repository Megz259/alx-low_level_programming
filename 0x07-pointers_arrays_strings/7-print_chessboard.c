#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 *
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int d;

	for (b = 0; b < 8; b++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[b][d]);
		_putchar('\n');
	}
}
