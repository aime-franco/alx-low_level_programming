#include "function_pointers.h"

/**
 * int_index - search the integer
 * @array: contains array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
