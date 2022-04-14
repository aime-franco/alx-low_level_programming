#include "main.h"
/**
 * islower - check the lower alphabets
 * Return: 1 when code is true
 * Return: 0 after excuting code
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z' || c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
