#include "main.h"

/**
* _isdigit - prints number from 0 to 9
* @c: contains compared value
* Return: 0 success
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
