#include "main.h"

/**
 * _isalpha - function that checks alphabetic character
 * @c: parameter to be checked
 *
 * Return: returns 1 if c is a letter and 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
		return (1);
	else
		return (0);
}
