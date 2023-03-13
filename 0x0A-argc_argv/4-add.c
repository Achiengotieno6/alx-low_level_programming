#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry  point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 *
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int a;
	int b;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
