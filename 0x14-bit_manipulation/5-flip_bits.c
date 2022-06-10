#include "main.h"

/**
 * flip_bits - flips number needed to get one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63, x >= 0; i--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}
	return (count);
}
