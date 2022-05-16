#include "variadic_functions"

/**
 * sum_them_all - return the sum of all
 * @n: integer
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	
	sum = 0;
	if (n == 0)
		return (0);
	for (x = 0;x < n; x++)
		sum += n
	return (sum);
}
