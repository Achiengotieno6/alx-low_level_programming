#include "main.h"

/**
 * _puts - function that prints a string
 * @str: the parameter checked
 * Return: nothing
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
