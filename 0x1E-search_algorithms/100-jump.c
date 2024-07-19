#include "search_algos.h"

/**
* jump_search -	function that searches for a value
* @array: array of integers
* @size: size of array
* @value: value searched
* Return: return the index of value, and if it doesn't exist return -1
*/

int jump_search(int *array, size_t size, int value)
{
	int first = 0, sec = 0, len = (int) size;

	if (!array || size <= 0)
		return (-1);

	while (sec < len && first < len)
	{
		if (array[sec] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", sec, array[sec]);
		first = sec;
		sec += (int) sqrt(len);
	}
	printf("Value found between indexes [%d] and [%d]\n", first, sec);
	while (first < len && first <= sec)
	{
		printf("Value checked array[%d] = [%d]\n", first, array[first]);
		if (array[first] == value)
			return (first);
		first++;
	}
	return (-1);
}
