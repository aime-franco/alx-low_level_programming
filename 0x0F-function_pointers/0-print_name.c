#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: contains the name 
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
