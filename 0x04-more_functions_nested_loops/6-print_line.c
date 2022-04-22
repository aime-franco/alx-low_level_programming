#include "main.h"

/**
* print_line - print lines
* 
* Return: 0 success
*/
void print_line(int n)
{
    if (n > 0)
    {
        _putchar('_\n');
    }
    else if (n < 0)
    {
        _putchar('\n');
    }
    else
    {
       _putchar();
    }    
}
