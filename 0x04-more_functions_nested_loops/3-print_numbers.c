#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: 0 success
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58, x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
