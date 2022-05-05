#include "main.h"

/**
 * sqrt - calculate the square root of a number
 * @x: contains value for x
 * @y: contians value for y
 * Return: 0 success
 */
int sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt(x, (y + 1)))
}
/**
 * _sqrt_recursion - return squareroot of a number
 * @n:contans a number
 * Return: 0 success
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
