#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * @array: A pointer to the array.
  * @left: The starting index.
  * @right: The ending index.
  * @value: The value to search.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  * @array: A pointer to the first element.
  * @size: The number of elements.
  * @value: The value to search.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t j = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (j = 1; j < size && array[j] <= value; j = j * 2)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}

	right = j < size ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, right);
	return (_binary_search(array, j / 2, right, value));
}
