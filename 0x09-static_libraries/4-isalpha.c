#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: parameter to be checked
 *
 * Return: returns 1 if c is alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
