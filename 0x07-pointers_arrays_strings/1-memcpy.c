#include "main.h"

/**
 * _memcpy - copies into src
 * @dest: compare value
 * @src: compared value
 * @n: number of bytes
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest+) = *(src + 1);
		x++;
	}
	return (dest);
}
