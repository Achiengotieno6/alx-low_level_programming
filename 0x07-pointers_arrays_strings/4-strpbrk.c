#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
			return (s);
		}
		s++;
	}
	return ('\0');
}
