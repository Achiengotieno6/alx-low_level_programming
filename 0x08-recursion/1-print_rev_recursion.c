#include "main.h"

/**
 * _print_rev_recursion -prints srting in reverse
 * @s: input
 * Return: 0 when success
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
