#include "main.h"

/**
* print_numbers - prints the number
* Return: 0 success
*/
void print_numbers(void)
{
  int y;
  
  y = 0;
  while (y < 10)
  {
  _putchar(y + '0');
  y++;
  }
  _putchar('\n')
}
