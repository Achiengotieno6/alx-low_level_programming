#include "main.h"
/**
 * flip_bits - counts number of bits to be flipped
 * @n: first number
 * @m: second number
 * Return: no of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int p;
	unsigned int count;

	p = n ^ m;
	count = 0;
	while (p)
	{
		p = p & (p - 1);
		count++;
	}
	return (count);
}
