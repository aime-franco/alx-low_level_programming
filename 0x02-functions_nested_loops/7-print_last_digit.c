#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: contains the compare value
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int latDigit;

	if (n < 0)
	{
		latDigit = (-1 * (n % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else 
	{
		lastDigit = (n % 10);
		_putchar(latDigit + '0');
		return (lastDigit);
	}
}
