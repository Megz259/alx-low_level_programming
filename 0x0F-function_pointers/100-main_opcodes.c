#include <stdio.h>
#include <stdlib.h>

/**
 * main - printys its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
