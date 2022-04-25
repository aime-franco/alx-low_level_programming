#include "main.h"
#include <stdio.h>

/**
 * puts2 - print the first character of string
 * @str: contains the compared value
 */
void puts2(char *str)
{
	int x = 0;
	
	while (str[x] != 0)
	{
		if (x % 2 == 0)
		{
			_puchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
