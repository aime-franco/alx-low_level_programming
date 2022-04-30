#include "main.h"

/**
 * reverse_array - reverse the array
 * @a: contains array
 * @n: number of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	y = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
		y--;
	}
}
