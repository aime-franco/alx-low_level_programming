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
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
