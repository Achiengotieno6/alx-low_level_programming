#include "main.h"
/**
 * binary_to_uint - converts binary number to decimal number
 * @b: string of binary numbers
 * Return: result of conversion or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int base = 1;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			decimal = decimal + base;
		}
		else if (b[i] != '0' && b[i] != '1')
			return (0);
		base = base * 2;
	}
	return (decimal);
}	
