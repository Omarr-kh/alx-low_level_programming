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
	FILE *f;
	char *buffer;
	size_t bytes;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(f);
		return (0);
	}

	bytes = fread(buffer, sizeof(char), letters, f);
	if (bytes == 0)
	{
		fclose(f);
		free(buffer);
		return (0);
	}
	buffer[bytes] = '\0';

	if (fwrite(buffer, sizeof(char), bytes, stdout) != bytes)
	{
		fclose(f);
		free(buffer);
		return (0);
	}
	fclose(f);
	free(buffer);
	return (bytes);
}
