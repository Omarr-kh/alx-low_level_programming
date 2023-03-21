#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * Return: 0 always (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 10;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
       		{
			_putchar(i + 97);
		}
		_putchar('\n');
	}
}
