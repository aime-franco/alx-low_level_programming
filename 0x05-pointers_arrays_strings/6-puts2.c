#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints the  first character of a string
 * @str: contains compared value
 */
void puts2(char *str)
{
	int x = 0;

	while(str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
	}
}
