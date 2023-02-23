#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter to be checked
 *
 *Return: 0
 */

void print_triangle(int size)
{
	int a = 0;
	int b;
	int c;

	if (size > 0)
	{
		while (a < size)
		{
			for (b = size - 1; b > a; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c < a + 1; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
