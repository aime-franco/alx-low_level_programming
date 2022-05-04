#include "main.h"

/**
 * _strlen_recursion - returns the string length
 * @s: contains a string
 * Return: 0 success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strnlen_recursion(s + 1));
	}
	return (0);

}
