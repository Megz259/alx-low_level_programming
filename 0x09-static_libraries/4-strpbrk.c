#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @a: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *a)
{
	int k;

	while (*s)
	{
		for (k = 0; a[k]; k++)
		{
		if (*s == a[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
