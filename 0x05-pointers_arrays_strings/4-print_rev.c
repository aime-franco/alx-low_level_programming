#include "main.h"
#include <stdio.h>

/**
 * print_rev - print the reversed string
 * @s: contains the compared value
 * Return: nothing
 */
void print_rev(char *s)
{
	int x;
	int length = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
	for (x = length -1; x >= 0; x-- )
	{
		_putchar(s[x]);
	}
	_putchar('\n');
	}
}
