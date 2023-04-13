#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of the file to be opened
 * @text_content: text to be added to file
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Audrey_file;
	int length;
	int written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (access(filename, F_OK) == 0 ? 1 : -1);

	Audrey_file = open(filename, O_WRONLY | O_APPEND);

	if (Audrey_file == -1)
		return (-1);

	for (length = 0; text_content[length];)
		length++;

	written = write(Audrey_file, text_content, length);
	if (written == -1)
		return (-1);
	close(Audrey_file);
	return (1);
}
