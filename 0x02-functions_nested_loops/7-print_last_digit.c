#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: contains the compare value
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = (-1 * (n % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else 
	{
		lastDigit = (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
