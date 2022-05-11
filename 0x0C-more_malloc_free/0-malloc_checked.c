#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocate memory.
 *@b: size of the memory to be allocated.
 *Return: pointer;
 **/
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (x);
}
