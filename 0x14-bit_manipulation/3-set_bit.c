#include "main.h"
/**
 * set_bit - the function sets a bit to 1
 * @n: number
 * @index: the index
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
