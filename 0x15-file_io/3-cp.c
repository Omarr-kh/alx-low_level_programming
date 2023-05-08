#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *new_buffer(char *f);
void closeFile(int f);

/**
 * new_buffer - creates a buffer of size 1024 bytes
 * @f: name of the file
 * Return: pointer to the buffer
 */
char *new_buffer(char *f)
{
	char *buff;

	buff = (char *)malloc(1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}

/**
 * closeFile - the function closes a file
 * @f: the file
 */
void closeFile(int f)
{
	int closeF = close(f);

	if (closeF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
 * main - the main will copy from a file to another file
 * @argc: number of command-line arguments
 * @argv: commad-line aregumets
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readd, writee;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = new_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	readd = read(file_from, buffer, 1024);
	do {
		if (file_from == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writee = write(file_to, buffer, readd);
		if (file_to == -1 || writee == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readd > 0);

	free(buffer);
	closeFile(file_from);
	closeFile(file_to);
	return (0);
}
