#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @a: input
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *a)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; a[r]; r++)
		{
			if (*s == a[r])
			{
				n++;
				break;
			}
			else if (a[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
