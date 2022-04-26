#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: contains compared value
 * @src: contains the source
 * Return: return value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (x = 0; x <= length; x++)
	{
		dest[x] = src[x];
	}
	return(dest);
}
