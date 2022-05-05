#include "main.h"

/**
 * prim - prints out the prime numbers
 * @x: contans value for x
 * @y: contains value ofy
 * Return: 0 success
 */
int prim(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (prim(x, y + 1));
}
/**
 * is_prime_number - return the prime numbers
 * @n: contains compare value
 * Return: 0 successs
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prim(n, 2));
}
