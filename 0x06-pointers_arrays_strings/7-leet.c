#include "main.h"

/**
 * leet - encodes string to 1337
 * @s: the string to be encoded
 *
 * Return: a pointer to the encoded string.
 *
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] ||
				s[i] - 32 == leet[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}

