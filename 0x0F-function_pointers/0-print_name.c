#include "function_pointer.h"

/**
 * print_name - print the name
 * @f: pointer to function
 * @name: contans the name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
