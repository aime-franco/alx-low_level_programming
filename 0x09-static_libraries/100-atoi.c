#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: containts compared value
 * Return: 0 success
 */
int _atoi(char *s)
{
	int x = 1, y = 0;
	unsigned int r = 0;

	while (!(s[y] <= '9' && s[y] >= '0') && s[y] != '\0')
	{
		if (s[y] == '-')
			x *= -1;
		y++;
	}
	while ((s[y] <= '9' && s[y] >= '0') && s[y] != '\0')
	{
		r = (r * 10) + (s[y] - '0');
		y++;
	}
	r *= x;
	return (r);
}
