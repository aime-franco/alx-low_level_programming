#include "main.h"
/**
* _isdigit - prints the numbers from 0 to 9
* @c: contains compared values
* Return: 0 success
*/

int _isdigit(int c)
{
    if ( c >= 0 && c <=9)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
