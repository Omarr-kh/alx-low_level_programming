#include "main.h"
/**
 * append_text_to_file - the function adds text to a file end
 * @filename: the name of the file
 * @text_content: the content to be added
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, writee;
	int size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	writee = write(file, text_content, size);

	if (file == -1 || writee == -1)
		return (-1);
	close(file);
	return (1);
}
