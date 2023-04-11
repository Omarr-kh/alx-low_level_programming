#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to arr of char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size1 = 0, size2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	str = malloc(size1 + size2 + 1);
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (i = size1, j = 0; i < size1 + size2; i++)
	{
		str[i] = s2[j];
		j++;
	}
	str[size1 + size2] = '\0';
	return (str);
}
