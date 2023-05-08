#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - the function reads file and print it
 * @filename: the name of the file
 * @letters: the number of letters to read
 * Return: the number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t bytesWrote;
	ssize_t bytesRead;
	char *buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = (char *)malloc(letters);

	bytesRead = read(file, buffer, letters);
	bytesWrote = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(file);
	return (bytesWrote);
}
