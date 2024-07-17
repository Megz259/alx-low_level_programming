#include "search_algos.h"

/**
  * binary_search - Searches for a value in an array
  * @array: array to search.
  * @size: number of elements.
  * @value: The value.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t j, a, b;

	if (array == NULL)
		return (-1);

	for (a = 0, b = size - 1; b >= a;)
	{
		printf("Searching in array: ");
		for (j = a; j < b; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = a + (b - a) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			b = j - 1;
		else
			a = j + 1;
	}

	return (-1);
}
