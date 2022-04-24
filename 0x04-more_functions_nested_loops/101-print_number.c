#include "main.h"

/**
 * print_number - prints an integer
 * @n: tracked var
 */

void print_number(int n)
{
	unsigned int x;
	
	if (n < 0)
	{
		_putchar('-')
		x = -n;
	}
	else
	{
		x = n;
	}
	if (x / 100 != 0)
	{
		print_number(x / 10);
		_putchar(x % 10 + '0');
	}

