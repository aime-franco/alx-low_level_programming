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
	char *str0;

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
	if (str0 == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		str0[x] = str[x];
	}
	str0[x] = '\0';
	return (str0);
}
