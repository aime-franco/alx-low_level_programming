#include "main.h"
/**
 * _abs - print the absolute value 
 * @n: contains the compared value
 * Return: 0 success after excuting the code
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
