#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of integer
 * @a: contains value of a
 * @b: contains value of b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = 0;
	x = *a;
	*a = *b;
	*b = x;

	
}
