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
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	str = malloc(size1 + size2 + 1);
	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[i] = '\0';
	return (str);
}
