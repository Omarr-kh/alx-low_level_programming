#include "main.h"
/**
 * clear_bit - the function sets value of a bit to 0
 * @n: the number
 * @index: index of the bit
 * Return: 1, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int long) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
