#include "search_algos.h"

/**
 * binary_search - searches value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: index f the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (mid = start; mid < end; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
