#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
		}
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
