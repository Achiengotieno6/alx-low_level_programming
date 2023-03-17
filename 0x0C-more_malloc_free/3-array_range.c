#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function definition
 * @min: the minumum
 * @max: th emaximum
 * Description: array to contain all values from min
 * include to max and ordered from min to max
 * Return: pointer to array or null
 */

int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	a = malloc(sizeof(int) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
		a[i] = min + i;
	return (a);
}
