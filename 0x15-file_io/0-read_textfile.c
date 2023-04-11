#include "main.h"
/**
 * read_textfile - reads and prints files in the POSIX stdout
 * @filename: name of the  file to be read
 * @letters: number of letters to be printed
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t n, m;
	char *buf;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	n = read(fp, buf, letters);
	m = write(STDOUT_FILENO, buf, n);

	close(fp);

	free(buf);

	return (m);
}
