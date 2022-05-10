#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of parameters passed in main
 * @argv: arrays of argc
 * Return: 0 success
 */
int main(int argc, char *argv)
{
	int x, ret;
	
	ret = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		ret = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ret);
}
