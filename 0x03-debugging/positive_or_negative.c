include "main.h"
/**
 * positive_or_negative - checks positive or negative numbers
 * @i: parameter to be checked
 * Return: zero when successful
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
