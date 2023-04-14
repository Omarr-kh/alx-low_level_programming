#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concats two strings
 * @s1: string1
 * @s2: string2
 * @n: n
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *str;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
