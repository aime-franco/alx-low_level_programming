#include "main.h"

/**
 * _strcat - concantenate the strings
 * @dest: contains compared value of dest
 * @src: source of string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != 0)
	{
		src[y] = dest[x];
		x++;
		y++;
	}
	dest[x];
	return (dest);
}
