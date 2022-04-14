#include <stdio.h>
/**
 * void print_alphabet  - print the alphabet
 *
 * Return: 0 after code excution
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
