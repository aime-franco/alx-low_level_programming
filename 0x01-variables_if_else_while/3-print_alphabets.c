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
	
	for (low = 'a'; low <= "z\n"; low++)
		putchar(low);
	for (low = 'A'; low <= "Z\n"; low++)
		putchar(low);
	return (0);
}

