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
	if (i == 16 || i == 4)
	{
		continue;
	}
	putchar(97 + i);
	}

	putchar('\n');

	return (0);
}
