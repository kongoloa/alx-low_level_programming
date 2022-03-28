#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array of integers
 * @array: Array to search
 * @size: Size of the array
 * @val: Value to search
 * Return: 1st index where value is located or -1 for NULL array
 */

int interpolation_search(int *array, size_t size, int val)
{
	int lo = 0;
	int hi = (size - 1);
	int position;

	while (array != NULL)
	{
		position = lo + (((double)(hi - lo) /
			     (array[hi] - array[lo])) * (val - array[lo]));

		if (position < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", position, array[position]);
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", position);
			return (-1);
		}
		if (array[position] == val)
		{
			return (position);
		}
		if (array[position] < val)
		{
			lo = position + 1;
		}

		else
		{
			hi = position - 1;
		}
	}
	return (-1);
}
