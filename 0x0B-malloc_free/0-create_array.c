#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create the array
 * @size: the size of memory
 * @c: contains specific character
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size <= 0)
	{
		return (0);
	}
	a = malloc(sizeof(char) * size);
	if (a == 0)
	{
		return (0);
	}
	for (x = 0; x < size; x++)
	{
		*(a + 1) = c;
	}
	*(a + 1) = '\0';
	return (a);
}
