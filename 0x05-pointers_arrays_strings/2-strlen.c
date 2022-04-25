#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the lenghth of the string
 * @s: contains the compared value of s
 * Return: 0 success
 */
int _strlen(char *s)
{
	int x;
	int length = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		length++;
	}
	return (length);
}
