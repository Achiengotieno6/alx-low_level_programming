#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int p = 0;
	int i = 0;

	while (dest[p] != 0)
	{
		p++;
	}
	while (src[i] != 0)
	{
		dest[p + i] = src[i];
		i++;
	}
	dest[p + i] = 0;
	return (dest);
}
