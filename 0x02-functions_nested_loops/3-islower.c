#include "main.h"
/**
 * _islower - check the lower alphabets
 * 
 * Return: 0 after excuting code
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
