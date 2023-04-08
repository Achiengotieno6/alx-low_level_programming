#include "main.h"
/**
 * binary_to_uint - converts binary number to decimal number
 * @b: string of binary numbers
 * Return: result of conversion or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')

			return (0);
		decimal = (decimal << 1) + (*b++ - '0');
	}
	return (decimal);
}
