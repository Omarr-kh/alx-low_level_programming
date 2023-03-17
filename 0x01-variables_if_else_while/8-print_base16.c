#include <stdio.h>

/**
* main - prints alphabet in lowercase then uppercase
* Return: 0 always (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + 48);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(i + 97);
	}

	putchar('\n');

	return (0);
}
