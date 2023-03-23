#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - indexes array
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: int value
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
