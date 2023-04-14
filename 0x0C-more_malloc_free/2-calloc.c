#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an aray
 * @nmemb: number of elements
 * @size: size of bytes each
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
