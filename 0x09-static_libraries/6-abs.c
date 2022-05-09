#include "main.h"
/**
 * _abs - print the absolute value
 * @n: containthe compared value
 * Return: 0 after code excution
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
