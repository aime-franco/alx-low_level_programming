#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all 
 * @n: integer
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list list;
	int sum;

	va_start(list, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
