#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
