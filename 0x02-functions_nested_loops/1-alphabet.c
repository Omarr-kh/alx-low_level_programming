#include "main.h"

/**
 * main - prints the alphabet
 * Return: 0 always (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}

	_putchar('\n');
	return (0);
}
