#include "main.h"
/**
 * _isupper -check the upper case alphabet
 * @c: contains compared values 
 * Return: 0 success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
