#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of type char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		arr[j] = c;
	}
	return (arr);
}
