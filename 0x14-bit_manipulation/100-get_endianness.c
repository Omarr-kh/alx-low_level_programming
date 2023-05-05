#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 1, 0
 */
int get_endianness(void)
{
	int test = 1;
	char *ptr = (char *)&test;

	if (*ptr == 1)
	{
		return (1);
	}
	return (0);
}
