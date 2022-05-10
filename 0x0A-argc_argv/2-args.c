#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: contains the number of parameters
 * @argv: contains arrays of argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc > 0)
	{
		for (x = 0; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}
	}
	return (0);
}
