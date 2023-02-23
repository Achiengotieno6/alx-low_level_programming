#include "main.h"

/**
 * print_number - Prints an integer to the console.
 * @n: The integer to be printed.
 *
 * Return: 0
 */

void print_number(int n)
{
	int digit_count = 1;
	int power_of_ten = 1;
	int i;
	int negative = 0;

	if (n < 0)
	{
		_putchar('-');
		negative = 1;
		n = -n;
	}

	while ((n / power_of_ten) >= 10)
	{
		digit_count++;
		power_of_ten *= 10;
	}

	for (i = 0; i < digit_count; i++)
	{
		int digit = (n / power_of_ten) % 10;

		power_of_ten /= 10;
		_putchar(digit + '0');
	}

	if (negative)
	{
		_putchar('-');
	}
}

