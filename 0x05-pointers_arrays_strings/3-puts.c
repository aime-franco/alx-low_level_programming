#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the srting as an output
 * @str: contains the string
 * Return: nothing
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
