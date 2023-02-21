#include "main.h"

/**
 * _abs - function that prints absolute value of an integer
 * @i: parameter being checked
 * Return: 0 always
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
