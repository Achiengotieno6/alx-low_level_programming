#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
#define SE STDERR_FILENO
/**
 * main - program copies content of one file to another
 * @argc: counts number of arguments
 * @argv: no of srtings entered
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fp1, fp2;
	int input, output;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	fp1 = open(argv[1], O_RDONLY);
	if (fp1 == -1)
		dprintf(SE, "Error: Cant read from file %s\n", argv[1]), exit(98);
	fp2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | 0644);
	if (fp2 == -1)
		dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	/* copying of contents input file to output file */
	input = read(fp1, buf, BUFFER_SIZE);
	output = write(fp2, buf, input);
	while (input > 0)
	{
		if (output != input)
			dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (input == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(input) == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fp1), exit(100);
	if (close(output) == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fp2), exit(100);
	return (0);
}
