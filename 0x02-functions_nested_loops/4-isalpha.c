#include "main.h"
/**
 * _isalpha - checks the alphabet character
 * @c: contain comapre value
 * Return: 0 success after code excution
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
