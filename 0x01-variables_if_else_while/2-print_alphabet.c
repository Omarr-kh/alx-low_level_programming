#include <stdio.h>

/**
 * main - prints the alphabet
 * Return: 0 always (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 97);
	}

	putchar('\n')
	return (0);
}
