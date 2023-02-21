#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 *@n: parameter checked
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	for (; n > 98; n--)
		printf("%d, ", n);
	for (; n < 98; n++)
		printf("%d, ", n);
	printf("98\n");
}
