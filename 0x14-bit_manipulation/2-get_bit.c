#include "main.h"

/**
 * get_bit - returns the bit value at given index
 * @index: location of the bit
 * @n: contains the number of bits
 * Return: index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (x = 0; x < index; x++)
		n = n >> 1;
	return ((n & 1));
}
