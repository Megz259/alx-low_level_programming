#include "search_algos.h"

/**
 * rec_search - searches for a value in an array
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t div = size / 2;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);

	printf("\n");

	if (div && size % 2 == 0)
		div--;

	if (value == array[div])
	{
		if (div > 0)
			return (rec_search(array, div + 1, value));
		return ((int)div);
	}

	if (value < array[div])
		return (rec_search(array, div + 1, value));

	div++;
	return (rec_search(array + div, size - div, value) + div);
}

/**
 * advanced_binary - return the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
