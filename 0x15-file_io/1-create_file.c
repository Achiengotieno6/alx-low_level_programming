#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: a NULL terminated string to written
 * Return: -1 if function fails and 1 if success
 *
 */
int create_file(const char *filename, char *text_content)
{
	int Audrey_file = 0;
	int p = 0;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	Audrey_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(Audrey_file, text_content, length);
	if (Audrey_file == -1 || p == -1)
		return (-1);
	close(Audrey_file);
	return (1);
}
