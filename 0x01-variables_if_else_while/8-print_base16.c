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
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
