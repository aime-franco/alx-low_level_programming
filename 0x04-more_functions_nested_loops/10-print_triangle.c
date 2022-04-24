#include "main.h"

/**
 * print_triangle - print the triangle shape
 * @size: contains the compared value
 * Return: 0  success
 */
void print_triangle(int size)
{
	int a, b;
	
	if (size <= 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
