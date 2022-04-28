#include "main.h"

/**
 * _strncat - concantenates the two strings
 * @dest: contains compared value
 * @src: contains compared value from source
 * @n: contans compared value
 * Return: string 
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	if (n > 0)
	{
		dest[x] = '\0';
	}
	return (dest);
	
}
