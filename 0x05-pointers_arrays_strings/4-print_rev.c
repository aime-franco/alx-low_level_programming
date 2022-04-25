#include "main.h"

/**
 * print_rev - print the string in reverse
 * @s: contains the compared value
 */
void print_rev(char *s)
{
	int x;
	int length = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
