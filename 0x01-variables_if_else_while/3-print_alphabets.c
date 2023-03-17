#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 * Return: 0 always (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}

	for (i = 0; i < 26; i++)
	{
	putchar(65 + i);
	}
	putchar('\n');

	return (0);
}
