#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: parameter to be determined
 * Return: nothing
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
