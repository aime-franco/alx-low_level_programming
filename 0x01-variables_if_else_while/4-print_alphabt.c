#include <stdlib.h>
#include <sdtdio.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: 0 after excuting the code
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
