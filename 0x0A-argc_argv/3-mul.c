#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to a integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, n, len, e, digit;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
	return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: numbers of argument
 * @argv: array of arguments
 *
 * Return: Always 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
