#include "main.h"
/**
 * set_bit - sets bit at given index
 * @n: range of the number
 * @index: the index of bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = ((*n | mask));
	return (1);
}
