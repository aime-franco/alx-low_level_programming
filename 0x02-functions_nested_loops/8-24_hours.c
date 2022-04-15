#include "main.h"
void jack_bauer(void)
{
	int s;
	int m;

	for (s = '0'; s <= '23'; s++)
	{
		for (m = '0'; m <= '59'; m++)
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');

	}
}
