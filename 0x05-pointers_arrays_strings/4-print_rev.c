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
	
	for (x = 0; s[x] != '\0'; x--)
	{
		length++;
	}
	return (length);
}
