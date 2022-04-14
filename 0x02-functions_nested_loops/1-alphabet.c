#include <main.h>
#include <_putchar.h>
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
		_putchar(alp);
	_putchar('\n');
	return (0);
}
