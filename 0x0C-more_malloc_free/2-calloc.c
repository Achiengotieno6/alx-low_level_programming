#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function definition
 * @nmemb: the number of elements
 * @size: the size of the bytes
 * Description: allocates memory for an array of nmemb
 * elements of size bytes
 * Return: a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		p[a] = 0;
	}

	return (p);
}
