#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: targeted string
 * Return: pointer to arr of char
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *dupstr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	dupstr = malloc(size + 1);

	if (dupstr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dupstr[i] = str[i];
	dupstr[size] = '\0';

	return (dupstr);
}
