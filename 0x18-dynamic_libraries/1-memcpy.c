#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 * @n: numbeer of bytes
 * @src: where memory is copied from
 * @dest: where memory is stored
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
