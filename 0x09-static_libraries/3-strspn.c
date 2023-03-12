#include "main.h"

/**
 *  _strspn - Entry point
 *  @s: input
 *  @accept: input
 *  Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				m++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
