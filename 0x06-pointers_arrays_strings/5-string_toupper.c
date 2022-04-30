#include "main.h"

/**
 * string_toupper - converts string into upper case
 * @str: cinttains a string
 * Return: string
 */
char *string_toupper(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] > 96 && str[x] < 123)
		{
			str[x] -= 32;
		}
		x++;
	}
	return (x);
}
