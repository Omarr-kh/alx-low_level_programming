#include "main.h"
/**
 * print_binary - prints from dec to binary
 * @n: dec num
 */
void print_binary(unsigned long int n)
{
	int iter;
	int size = 0;
	unsigned long int curr;

	for (iter = 63; iter >= 0; iter--)
	{
		curr = n >> iter;

		if (curr & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
			_putchar('0');
	}
	if (!size)
		_putchar('0');
}
