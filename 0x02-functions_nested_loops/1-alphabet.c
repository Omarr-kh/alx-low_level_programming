#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: 0 always (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}

	_putchar('\n');
}
