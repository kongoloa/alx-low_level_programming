#include "search_algos.h"
#include <math.h>

int min_value(int num1, int num2);

/**
 * jump_search - Searches value in a sorted array of ints using the Jump search algorithm
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 * Return: 1st index where value is located or -1 for NULL array
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int index = 0;

	if (!array)
	{
		return (-1);
	}

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += jump;
	}

	index -= jump;
	printf("Value found between indexes [%d] and [%d]\n", index, index + jump);
	while (index <= (index + jump) && index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
