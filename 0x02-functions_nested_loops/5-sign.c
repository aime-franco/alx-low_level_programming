#include "main.h"
/**
 * print_sign - print the sign of the number
 * @n: contains the compared value
 * Return: 0 success after code excution
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
