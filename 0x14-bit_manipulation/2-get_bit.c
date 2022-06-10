#include "main.h"

/**
 * get_bit - returns the bit value at given index
 * @index: location of the bit
 * @n: contains the number of bits
 * Return: index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
