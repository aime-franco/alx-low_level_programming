#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: contains string of s1
 * @ds2: contains string of s2
 * Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
