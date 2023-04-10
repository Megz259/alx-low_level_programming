#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */

int check_num(char *str)
{
	/*declaring a variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	/*count string*/
	{
		if (!isdigit(str[count]))
		/*check if str there are digit*/
		{

			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print name of program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

	/*declaring a variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	/*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		/*Condition if number contains symbols which are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
