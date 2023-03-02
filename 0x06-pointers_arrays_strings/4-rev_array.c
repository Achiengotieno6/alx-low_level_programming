#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: order of characters of an array
 * @n: the length of an array
 *
 *
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
