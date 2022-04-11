#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after excuting code
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++; "\n")
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++; "\n")
		putchar(low);
	return (0);
}
