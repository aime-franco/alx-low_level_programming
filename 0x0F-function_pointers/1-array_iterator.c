#include "function_pointers.h"

/**
 * array_iterator - executes function
 * @size: array size
 * @action: pointer to  a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
		action(array[x]);
}
