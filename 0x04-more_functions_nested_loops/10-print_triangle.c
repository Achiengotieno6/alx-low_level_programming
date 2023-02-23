#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter to be checked
 *
 *Return: 0
 */

void print_triangle(int size)
{
	int a = 0, aa;

	while (a <= size && size > 0)
	{
		aa = 0;
		while (aa < size - a)
		{
			_putchar(' ');
			aa++;
		}
		aa = 0;
		while (aa < a)
		{
			_putchar('#');
			aa++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
