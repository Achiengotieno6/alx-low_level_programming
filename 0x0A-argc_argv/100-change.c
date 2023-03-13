#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int cents, int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		cents++;
		coins -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
