#include "search_algos.h"

/**
* interpolation_search - function that searches for a value
* @array: array of integers
* @size: size of array
* @value: value searched
* Return: return the index of value, and if it doesn't exist return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, middle, high;

	low = 0;
	high = (int) size - 1;

	if (!array || size == 0)
		return (-1);
	while (array[low] != array[high] && value >= array[low] &&
	       value <= array[high])
	{
		middle = low + (((double) (high - low) / (array[high] - array[low])) *
		             (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", middle, array[middle]);
		if (value > array[middle])
			low = middle + 1;
		else if (value < array[middle])
			high = middle - 1;
		else
			return (middle);
	}
	middle = low + (((double) (high - low) / (array[high] - array[low])) *
	             (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", middle);
	return (-1);
}
