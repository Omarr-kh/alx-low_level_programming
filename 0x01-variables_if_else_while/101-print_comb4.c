#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 * Return: 0 always (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (k = i + 1; k <= 9; k++)
		{
			for (j = k + 1; j <= 9; j++)
			{
				if ((i != k) != j)
				{
					putchar(i + 48);
					putchar(k + 48);
					putchar(j + 48);
				}
				if (i == 7 && k == 8)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');

	return (0);
}
