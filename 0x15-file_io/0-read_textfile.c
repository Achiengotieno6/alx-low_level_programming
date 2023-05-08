#include "main.h"
/**
 * read_textfile - reads and prints files in the POSIX stdout
 * @filename: name of the  file to be read
 * @letters: number of letters to be printed
 * Return: actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int Audrey_file;
	ssize_t letters_w;
	ssize_t letters_r;
	char *buf;

	if (filename == NULL)
		return (0);
	/* open file */
	Audrey_file = open(filename, O_RDONLY);

	if (Audrey_file == -1)
		return (0);
	/* allocate memory */
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);
	/* read file and store data in buf */
	letters_r = read(Audrey_file, buf, letters);
	if (letters_r == -1)
		return (0);
	letters_w = write(STDOUT_FILENO, buf, letters_r);
	if (letters_w != letters_r)
		return (0);
	free(buf);
	close(Audrey_file);
	return (letters_r);
}
