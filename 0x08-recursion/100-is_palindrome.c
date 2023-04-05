#include "main.h"

/**
 * len - is the length of the string
 * @s: string used
 * Return: string length
 */

int len(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + len(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * string - length of the string by index
 * @i: integer
 * @s: string
 * Return: int value of the result
 */
int string(int i, char *s)
{
	if (*s)
	{
		if (*s != s[len(s) - i])
		{
			return (0);
		}
		return (string(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - is current value equal to the previous value
 * @s: string
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (string(i, s));
}
