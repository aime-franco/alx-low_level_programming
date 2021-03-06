#include "main.h"

/**
 * _strncpy - copies src into dest
 * @dest: string for dest
 * @src: string for source
 * @n: number of byte from src
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; n > x; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

