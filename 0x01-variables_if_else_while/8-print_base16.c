#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 after excuting code
 */
int main()
{
	int num;

	for (num = 'a'; num <= 'f'; num++)
		puchar(num);
	puchar('\n');
	return (0);
}
