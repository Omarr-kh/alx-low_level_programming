#include "main.h"
/**
 * flip_bits - the number of bits to flip
 * @n: first nubmer
 * @m: second number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int no_of_bits = 0;

	while(xor != 0)
	{
		no_of_bits += xor & 1;
		xor >>= 1;
	}
	return no_of_bits;
}
