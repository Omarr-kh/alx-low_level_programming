#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: args count
 * @argv: args vec
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
