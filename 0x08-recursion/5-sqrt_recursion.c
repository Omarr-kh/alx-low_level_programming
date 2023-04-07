#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 0));
}

/**
 * sqrt - get sqrt
 * @n: number
 * @i: it
 * Return: int
 */
int sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
