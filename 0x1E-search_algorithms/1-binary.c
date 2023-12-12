#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of the value, NULL if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; l <= r;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			l = i + 1;
		else
			r = i - 1;
	}
	return (-1);
}
