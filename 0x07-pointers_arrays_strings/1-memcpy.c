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

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; n > x; x++)
	{
		dest[x] != '\0';
	}
	return (dest);
}
