#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x == 1)
		{
			printf("%d", x)
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
