#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
