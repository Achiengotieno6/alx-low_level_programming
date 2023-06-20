#include "main.h"

/**
 * _islower - function prints lower case
 * @c: paremter to be printed
 *
 * Return: 1 if lower case and 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

