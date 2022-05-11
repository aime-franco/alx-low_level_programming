#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * void free_grid - frees the 2 dimensional array created
 * @grid: created grid
 * @height: height value
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
