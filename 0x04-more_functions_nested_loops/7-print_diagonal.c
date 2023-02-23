#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: parameter to be checked
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('\\');
		a++;
	}
	_putchar('\n');
}
