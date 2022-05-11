#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns the pointer to its newly locatio
 * @str: containd string
 * Return: string
 */
char *_strdup(char *str)
{
	int x;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
	;
	x++;
	}
	str = malloc(sizeof(char) * x);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		s[x] = str[x];
	}
	s[x] = '\0';
	return (s);
}
