#include "main.h"
/**
 * get_bit - fucntion that returns the value of a bit at a given index
 * @n: the number
 * @index: index of the bit
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	
	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
