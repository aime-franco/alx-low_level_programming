#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 success
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) & x;

	return (*c);
}
