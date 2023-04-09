#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - funtion
 * @argc: args count
 * @argv: args vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *temp;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			temp = argv[i];

			for (j = 0; j < strlen(temp); j++)
			{
				if (temp[j] < 48 || temp[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(temp);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
		printf("0\n");
	return (0);
}
