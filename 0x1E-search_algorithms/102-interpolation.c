#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - interpolation searches for a value in a sorted  array
 * @array: pointer to first element
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while ((array[low] != array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%ld] ", pos);
		if (pos >= size)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[pos]);

		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}

	return (-1);
}
