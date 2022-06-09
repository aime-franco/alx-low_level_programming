#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: contains the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int x, count = 0;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;
		if (current & 1)
		{
			_putchar('1');
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
