#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts number of parameter passed in main
 * @argv: contains the array of argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, mul;
	
	mul = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			printf("%s\n", argv[x]);
			mul *= atoi(argv[x]);
		}
		printf("%d", mul);
	}
	return (0);
}
