#include <stdio.h>

/**
* main - prints alphabet in lowercase then uppercase
* Return: 0 always (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (j != i)
			{
				putchar(i + 48);
				putchar(j + 48);
			}
			if (i == 8 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
