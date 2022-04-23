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

	for (a = 0; a <= 90; a++)
	{
		for ()
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
		}
		if (a != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
