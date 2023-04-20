#include "function_pointers"
/**
 * int_index - function that searches for an integer
 * @array: array of ints
 * @size: size of the array
 * @cmp: function that searches for int in an array
 * Return: index of the int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
