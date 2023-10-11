#include "search_algos.h"
#include <math.h>

/**
 * jump_search - uses jump search algorithm
 * @array:  pointer to the first element of the array
 * @size: number of elements in array
 * @value: Value to search for
 * Return: index value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (!array)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	if (value < array[0])
		return (-1);
	prev = 0;
	step = (size_t)sqrt(size);
	i = step;

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	while (prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);

		if (prev == i)
			return (-1);

		prev += 1;
	}
	return (-1);
}
