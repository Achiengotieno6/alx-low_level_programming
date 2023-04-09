#include "main.h"

/**
 * get_bit - gives value of bit at a given index
 * @n: the range of number
 * @index: the index considered
 * Return: value of the bit at index, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
