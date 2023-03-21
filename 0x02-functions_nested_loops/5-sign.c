#include "main.h"
/**
 * print_sign - prints sign of num
 * @n: the number to be checked
 * Return: 1 if n is bigger than 0
 * 0 if n is equal to 0
 * -1 if n is smaller than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
