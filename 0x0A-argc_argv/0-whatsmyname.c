#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: 0 when success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
