#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Reuturn: 0 after excuting
 */
int main (0)
{
	char alpha;

	for(alpha = 'a'; alpha <= 'z'; alpha++)
		strrev(alpha);
		putchar(alpha);
	putchar('\');
	return (0);
}
