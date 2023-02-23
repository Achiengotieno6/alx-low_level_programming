#include "main.h"

/**
 * more_numbers - prints numbers 1-15 ten times
 *
 * Return: always 0
 */

void more_numbers(void)
{
	char a, b;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
		i++;
	}
}
