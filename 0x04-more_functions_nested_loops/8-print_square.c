#include "main.h"

/**
 * print_square - print the square shape
 * @size: contain compared value
 * Return: 0 success
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
