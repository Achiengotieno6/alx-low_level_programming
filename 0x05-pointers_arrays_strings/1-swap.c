#include "main.h"

/**
 * swap_int - a function  that swaps the value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

