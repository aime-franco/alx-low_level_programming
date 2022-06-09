#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: contains the binary number
 * Return: 0 success
 */
unsigned int binary_to_unit(const char *b)
{
	int x;
	unsigned int val = 0;

	if (!b)
		return (0);
	for (x = o; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		val = 2 * val + (b[x] - '0');
	}
	return (val);
}
