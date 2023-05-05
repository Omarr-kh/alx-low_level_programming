#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1
 * Return: conv num, 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint = 2 * uint + (b[i] - '0');
	}
	return (uint);
}
