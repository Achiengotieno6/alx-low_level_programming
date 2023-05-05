#include "main.h"
/**
 * get_endianness - gets the order of byte storage
 * Return: 1 0r 0
 *
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c;

	c = (char *) &a;
	if (*c)
		return (1);
	else
		return (0);
}
