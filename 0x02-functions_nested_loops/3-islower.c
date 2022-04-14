#include "main.h"
/**
 * _islower - prints the lower alphabet
 * @c: contains the compared value
 * Return: 0 success after excuting the code
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
