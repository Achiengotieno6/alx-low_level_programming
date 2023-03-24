#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list nums;

	va_start(nums, n);
	for (a = 0; a < n; a++)
	{
		if (a > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}
