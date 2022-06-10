#include "main.h"

/**
 * set_bit - set bit at given index
 * @n: pointer to the number
 * @index: index of bit
 * Return: 1 success 0 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
