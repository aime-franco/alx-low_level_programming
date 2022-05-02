#include "main.h"

/**
 * _strchr - locate a character in the string
 * @s: contains string
 * @c: contains character
 * Return: string
 */
 char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}
	for (y = 0, y <= x, y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
