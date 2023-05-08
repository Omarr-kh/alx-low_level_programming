#include "main.h"
/**
 * create_file - the function creates a file
 * @filename: name of the file to be created
 * @text_content: the content to be written in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int writee = 0;
	int size;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
		{
			size++;
		}
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writee = write(filename, text_content, size);

	if (writee == -1 || file == -1)
		return (-1);
	close(file);
	return (1);
}
