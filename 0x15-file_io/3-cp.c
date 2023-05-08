#include "main.h"
#include <errno.h>
/**
 * __exit - prints error messages and exits
 * @error: num is either exit value or file descriptor
 * @s: name of the file
 * @fd: file descriptor
 * Return: 0 on success
 */
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - program copies content of one file to another
 * @argc: counts number of arguments
 * @argv: no of srtings entered
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fp1, fp2, input, output;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);
	fp1 = open(argv[1], O_RDONLY);
	if (fp1 == -1)
		__exit(98, argv[1], 0);
	fp2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp2 == -1)
		__exit(99, argv[2], 0);
	while ((input = read(fp1, buffer, 1024)) != 0)
	{
		if (output == -1)
			__exit(98, argv[1], 0);
		output = write(fp2, buffer, input);
		if (output == -1)
			__exit(99, argv[2], 0);
	}
	close(fp2) == -1 ? (__exit(100, NULL, fp2)) : close(fp2);
	close(fp1) == -1 ? (__exit(100, NULL, fp1)) : close(fp1);
	return (0);
}
