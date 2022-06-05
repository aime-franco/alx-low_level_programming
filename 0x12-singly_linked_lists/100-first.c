#include <stdio.h>

/**
 * bmain - function runs before main
 * Return: nothing
 */
void __atribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
