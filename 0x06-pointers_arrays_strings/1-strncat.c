nclude "main.h"

/**
 * _strncat - concantinate two strings
 * @dest: contains value of first string
 * @src: contains value of second string
 * @n: the number of bytes space
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && n > y)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	if (n > 0)
	{
		dest[x] != '\0';
	}
	return (dest);
}
