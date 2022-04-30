#include "main.h"

/**
 * string_toupper - converts string into upper case
 * @s: cinttains a string
 * Return: string
 */
char *string_toupper(char *s)
{
	int x = 0;
	
	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
		x++;
	}
	return (s);
}
