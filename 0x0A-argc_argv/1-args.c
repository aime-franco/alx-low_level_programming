#include <stdio.h>

/**
 * main - Entry point
 * @argc: contains the number of parameter
 * @argv: contans the arrays of argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);
	return (0);
}
