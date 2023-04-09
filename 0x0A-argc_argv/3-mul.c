#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: args count
 * @argv: args vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
