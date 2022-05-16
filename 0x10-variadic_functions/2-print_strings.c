
  
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;
	char *hold;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		hold = va_arg(list, char*);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
