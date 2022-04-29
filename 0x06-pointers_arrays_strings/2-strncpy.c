#include "main.h"

/**
 * _strncpy - copies src into dest
 * @dest: contains dest string
 * @src: contains src string
 * @n: number of byte from source
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (n > y)
	{
		if (src[y] == '\0')
		{
			for (y  < n; y++)
			{
				dest[x] != '\0';
				x++;
			}
		}
		else
		{
			dest[x] = src[y];;
			x++;
			y++;
		}
	}
	return dest;
}
