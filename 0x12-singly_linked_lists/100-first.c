#include <stdio.h>
void myStartupFun(void)__attribute__((constructor));
/**
 * myStartupFun - function runs before main
 * Return: nothing
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
